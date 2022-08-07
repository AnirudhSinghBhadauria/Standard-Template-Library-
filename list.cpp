#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<int> l = {23, 34, 45, 56, 76, 23};

    l.push_front(54);
    l.push_back(58);

    cout << "\n\nUsing For Each Loop !!\n\n";
    for (int x : l)
    {
        cout << x<<endl;
    }
    cout << "\n\nUsing Iterator Loop !!\n\n";

    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << endl;
    }

    return 0;
}