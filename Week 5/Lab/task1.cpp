#include<iostream>
using namespace std;   
float multiply(float no);
main()
{
int no;
double result;

cout<<"Enter a number"<<endl;
cin>>no;

result=multiply(no);
cout<<result;

}
float multiply(float no)
{
double result;
result=no*5;
return result;

}