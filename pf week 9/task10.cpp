#include<iostream>
using namespace std;
main()
{
    string name;
    int yes=0;
    cout << "ENter the string:";
    getline(cin,name);
    int idx=name.length();
    for(int i=0;i<=idx;i++)
    {
        if('a'==name[i] || 'e'==name[i] || 'i'==name[i] || 'o'==name[i] || 'u'==name[i])
        {
           yes++;
        }
    }
    cout << "Total characteer are:" << yes;
}