#include<iostream>
using namespace std;
main() 
{
    int mb,result;

    cout<<"Enter megabytes"<<endl;
    cin>>mb;

    result=(mb*1024);
    result=(result*1024);
    result=(result*8);

    cout<<"Bits are"<<result;

}

