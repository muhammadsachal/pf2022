#include<iostream>
using namespace std;
main()
{  
int s,c,a,cost,arps;

cout<<"Enter the size in pounds"<<endl;
cin>>s;
cout<<"Enter the cost of bag"<<endl;
cin>>c;
cout<<"Area covered by each bag"<<endl; 
cin>>a;

cost=(c/s);
cout<<"cost is"<<cost<<endl;

arps=(c/a);
cout<<"Fertlizing cost per area:"<<arps<<endl;

}
