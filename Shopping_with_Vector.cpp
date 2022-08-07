#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class item
{
private:
    string name;
    int quantity;
    float price;

public:
    item() {}
    item(string n, int q, float p)
    {
        name = n;
        price = p;
        quantity = q;
    }

    string getName()
    {
        return name;
    }
    float getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }

    friend ostream &operator<<(ostream &out, item &i);
    friend ofstream &operator<<(ofstream &give, item &i);
    friend ifstream &operator>>(ifstream &take, item &i);
};

int main()
{
    int number;
    cout << "Enter the number of Product you wanna Purchase : ";
    cin >> number;
    string name;
    int quantity;
    float price;

    vector<item *> list;
    cout << "Enter the Details of The Products you wanna Buy : \n";
    for (int i = 0; i < number; i++)
    {
        cout << "Enter the Name of Product " << i + 1 << " : ";
        cin >> name;
        cout << "Enter the Price of Product " << i + 1 << " : ";
        cin >> price;
        cout << "Enter the Quantity of Product " << i + 1 << " : ";
        cin >> quantity;

        list.push_back(new item(name, price, quantity));
    }

    ofstream give("Shopping_using_Vectors.txt");
    vector<item *>::iterator itr;
    for (itr = list.begin(); itr != list.end(); itr++)
    {
        give << **itr;
    }

    item taker;

    ifstream take("Shopping_using_Vectors.txt");
    for (int i = 0; i <= (number) - 1; i++)
    {
        take >> taker;
        cout << "ITEMS : " << endl << taker;
    }

    return 0;
}



ostream &operator<<(ostream &out, item &i)
{
    out << i.name << endl;
    out << i.price << endl;
    out << i.quantity << endl;
    return out;
}
ofstream &operator<<(ofstream &give, item &i)
{
    give << i.name << endl;
    give << i.price << endl;
    give << i.quantity << endl;
    return give;
}
ifstream &operator>>(ifstream &take, item &i)
{
    take >> i.name;
    take >> i.price;
    take >> i.quantity;
    return take; 
}