#include<iostream>
#include<cmath>
using namespace std;
float positivequad(float a,float b,float c);
float negativequad(float a,float b,float c);
main()
{
float a,b,c,result,resullt;
cout<<"a is"<<endl;
cin>>a;
cout<<"b is"<<endl;
cin>>b;
cout<<"c is"<<endl;
cin>>c;

result=positivequad( a,b,c);
resullt=negativequad( a,b,c);
cout<<resullt;
cout<<result;


}
float positivequad(float a,float b,float c)
{
   float square,sq,result,e,d;
   square=pow(b,2);
   e=square-(4*a*c);
   sq=sqrt(e);
   d=-b+sq;
   result=(d/2*a);
   return result;


}
float negativequad(float a,float b,float c)
{
   float square,sq,result,e,d;
   square=pow(b,2);
   e=square-(4*a*c);
   sq=sqrt(e);
   d=b-sq;
   result=(d/2*a);
   return result;

}
