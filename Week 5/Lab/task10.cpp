#include<iostream>
using namespace std;   
int number(int num,int dig1,int dig2);
main()
{
 int num,dig1,dig2,result;
 
 cout<<"Enter the number"<<endl;
 cin>>num;


result=number(num,dig1,dig2);
cout<<result;
}


int number(int num, int dig1,int dig2)
{
     dig1=num/10;
     dig2=num%10;
     
    if(dig1==2)
    {

        cout<<"twenty";

    }
    else if(dig1==3)
    {

        cout<<"thirty";

    }
    else  if(dig1==4)
    {

        cout<<"fourty";

    }
    else if(dig1==5)
    {

        cout<<"fifty";

    }
    else  if(dig1==6)
    {

        cout<<"sixty";

    }
    else   if(dig1==7)
    {

        cout<<"seventy";

    }
    else if(dig1==8)
    {

        cout<<"eighty";

    }
    else  if(dig1==9)
    {

        cout<<"ninty";

    }

    if(dig2==1)
    {

        cout<<"one";

    }
    else  if(dig2==2)
    {

        cout<<"two";

    }
    else  if(dig2==3)
    {

        cout<<"three";

    }
else  if(dig2==4)
    {

        cout<<"four";

    }
else   if(dig2==5)
    {

        cout<<"five";

    }
else   if(dig2==6)
    {

        cout<<"six";

    }
else   if(dig2==7)
    {

        cout<<"seven";

    }
    else  if(dig2==8)
    {

        cout<<"eight";

    }
    else  if(dig2==9)
    {

        cout<<"nine";

    }
}
     


