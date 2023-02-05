#include<iostream>
using namespace std;
main()
{
    int size;
    bool isfound;
    int num;
    cout << "Enter the amount of size:";
    cin >> size;
    int number[size];
    for(int idx=0;idx<size;idx++)
    {
        cout << "ENter the number:";
        cin >> number[idx];
    }
    cout << "Enter the number you want:";
    cin >> num;
    for(int idx=0;idx<size;idx++)
    {
        if(num==number[idx])
        {
           isfound=true;
           break;
        }
    }
    if(isfound=true)
    {
        cout << "Number Found:";
    }
    else
    {
        cout << "Number not found:";
    }
}