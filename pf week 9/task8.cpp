#include<iostream>
using namespace std;
main()

{
    string name;
    bool isfound;
    char ch;
    cout << "Enter the String:";
    getline(cin,name);
    int idx=name.length();
    cout << "Enter the character:";
    cin >> ch;
    for(int i=0;i<=idx;i++)
    {
    if(ch==name[idx-1])
    {
        isfound=true;
        break;
    }
    }
    if(isfound=true)
    {
        cout << "Found:";
    }
    else
    {
        cout << "Not Found:";
    }

}