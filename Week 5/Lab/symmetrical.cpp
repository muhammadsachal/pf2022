#include<iostream>
using namespace std;
bool value(int a,int b,int c);
main()
{
int a,b,c;
int result;
cout<<"enter number 1"<<endl;
cin>>a;
cout<<"enter no 2"<<endl;
cin>>b;
cout<<"enter no 3"<<endl;
cin>>c;

result=value(a,b,c);

cout<<result;
}
bool value(int a,int b,int c)
{
if(a==c)
{
  return true;

}
else 
{
  return false;
}


}


