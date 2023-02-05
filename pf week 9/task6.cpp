#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter the name of string:";
    getline(cin,name);
    int idx=0;
    while(name[idx]!='\0')
    {
        idx++;
    }
    cout << "Your total characteer are:" << idx;
    if(idx%2==1)
    {
        cout << "odd number:" << endl;
    }
    else{
        cout << "Even number:";
    }
}