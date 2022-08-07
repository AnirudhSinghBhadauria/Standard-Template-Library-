#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s = {10, 45, 65};

    s.insert(45);

    cout<<"Using For Each Loop !!\n";

    for (int x : s)
    {
        cout << x << endl;
    }
cout<<"\nUsing Iterator !!\n";
    set<int>::iterator itr;

    for(itr = s.begin() ; itr != s.end() ; itr++){
        cout<<*itr<<endl;
    }

    return 0;
}