#include<iostream>
using namespace std;
main()
{
    int size;
    int num[size];
    cout << "Enter the size:";
    cin >> size;
    for(int idx=0;idx<size;idx++)
    {
        cout << "Enter the numbers:";
        cin >> num[size];
    }
    for(int idx=size-1;idx>=0;idx--)
    {

        cout << num[size] << endl;
    }
}