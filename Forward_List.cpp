#include <iostream>
#include <forward_list>

using namespace std;

int main()
{

    forward_list<int> d = {23, 34, 45, 56, 54};

    d.push_front(45);
    //d.push_back(56);//This cannot be done in forward_list !!
    cout << "\nUsing For Each Loop !!\n\n";

    for (int x : d)
    {
        cout << x++<<endl;
    }
    cout << "\nUsing Iterator !!\n";
    forward_list<int>::iterator itr;
    for (itr = d.begin(); itr != d.end(); itr++)
    {
        cout << (*itr+1)<<endl; //value can be changed in iterator 😇
    }

    return 0;
}