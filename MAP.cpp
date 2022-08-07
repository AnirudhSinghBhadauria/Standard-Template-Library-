#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> student;

    student.insert(pair<int, string>(1, "Anirudh Singh Bhadauria"));
    student.insert(pair<int, string>(2, "Devansh Singh Bhadauria"));
    student.insert(pair<int, string>(3, "Vanshika Singh Bhadauria"));

    map<int, string>::iterator itr;
    for (itr = student.begin(); itr != student.end(); itr++)
    {
        cout << itr->first << endl
             << "" << itr->second << endl;
    }

    return 0;
}