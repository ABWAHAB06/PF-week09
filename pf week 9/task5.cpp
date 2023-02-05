#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "TEll string:";
    cin >> name;
    int idx=0;
    while(name[idx]!='\0')
    {
        cout << "Character" << name[idx] <<  "is at index:" << idx << endl;
        idx++;
    }
}