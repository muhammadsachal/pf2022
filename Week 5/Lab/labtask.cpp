#include<iostream>
#include<cmath>
using namespace std;   
float squareroot(float no);
main()
{
int no;
double result;

cout<<"Enter a number"<<endl;
cin>>no;

result=sqrt(no);
cout<<result;

}
float squareroot(float no)
{
double result;
result=sqrt(no);
return result;

}
