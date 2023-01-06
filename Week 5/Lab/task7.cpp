#include<iostream>
#include<cmath>
using namespace std;   
int sum(int no,int number);
main()
{
int no,number;
cout<<"enter 1st number"<<endl;
cin>>no;

cout<<"enter 2nd number"<<endl;
cin>>number;

sum(no,number);

}
int sum(int no,int number)
{
int sums;
sums=no+number;
cout<<sums;

}