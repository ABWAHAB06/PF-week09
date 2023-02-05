#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "TEll String:";
    getline(cin,name);
    int idx=0;
    while(name[idx]!='\0')
    {
        idx++;
    }
    for(int k=idx-1;k>=0;k--)
    {
        cout << name[k] << endl;
    }
}