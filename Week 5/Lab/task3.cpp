#include<iostream>
#include<cmath>
using namespace std;

float calculation(float base, float degree);
main()
{
float base;
float  degree;
float result;
cout<<"the base is"<<endl;
cin>>base;
cout<<"degree"<<endl;
cin>>degree;
result=calculation (base,degree);
cout<<result;

}
float calculation(float base, float degree)
{
float radian=57.2958;
float angle=degree/radian;
float result=tan(angle);
float res=result*base;

return res;
}
