#include<iostream>
using namespace std;
main()
{
    int number[5];
    int sum=0;
    float avg=0;
    for(int idx=0;idx<5;idx++)
    {
        cout << "Enter the number:";
        cin >> number[idx];
    }
    sum=number[0]+number[1]+number[2]+number[3]+number[4];
    cout << "SUm is:" << sum << endl;
    avg=sum/5;
    cout << "Avg is:" << avg;
}