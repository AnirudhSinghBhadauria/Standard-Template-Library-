#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d = {23, 34, 45, 56, 54};

    d.push_front(45);
    d.push_back(56);
    cout << "\nUsing For Each Loop !!\n\n";

    for (int x : d)
    {
        cout << x++<<endl;
    }
    // cout << "\nUsing Iterator !!\n";
    // deque<int>::iterator itr;
    // for (itr = d.begin(); itr != d.end(); itr++)
    // {
    //     cout << *itr++<<endl;
    // }

    return 0;
}