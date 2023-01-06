#include<iostream>
#include<cmath>
using namespace std;   
double sine(double no);
main()
{
int no;
double result;

cout<<"Enter a number"<<endl;
cin>>no;

result=sine(no);
cout<<result;

}
double sine(double no)
{
double result;
result=sin(no);
return result;

}