#include<iostream>
using namespace std;
main()
{  
string n;
int ap,cp,as,cs,pd;
int total;
int after;

cout<<"Enter the movie name:"<<endl;
cin>>n;
cout<<"Enter the adult prize"<<endl;
cin>>ap;
cout<<"Enter the child prize"<<endl;
cin>>cp;
cout<<"Enter the adult tickets sold"<<endl;
cin>>as;
cout<<"Enter the child ticket sold"<<endl;
cin>>cs;
cout<<"Percentage to donate"<<endl;
cin>>pd;

total=(ap*as)+(cp*cs);
cout<<"Total is"<<total;

after=(total/pd);
cout<<"After donation is"<<after<<endl;

}