#include<iostream>
using namespace std;
int isminimum(int number1,int number2);
main()
{

int number1,number2,result;

cout<<"NUMBER1 IS:"<<endl;
cin>>number1;
cout<<"NUMBER2 is:"<<endl;
cin>>number2;

result=isminimum(number1,number2);
cout<<result<<endl;

}
isminimum(int number1,number2)
{
if (number1<number2)
{

return number1;
}

else
{

return number2;

}






