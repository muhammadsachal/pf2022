#include<iostream>
using namespace std;

int grade(float percentage);
main()
{
    int s1,s2,s3,s4,s5,sum;
    float percentage;
    cout<<"Enter the marks of subject 1"<<endl;
    cin>>s1;
    cout<<"Enter the marks of subject 2"<<endl;
    cin>>s2;
    cout<<"Enter the marks of subject 3"<<endl;
    cin>>s3;
    cout<<"Enter the marks of subject 4"<<endl;
    cin>>s4;
    cout<<"Enter the marks of subject 5"<<endl;
    cin>>s5;

    sum=s1+s2+s3+s4+s5;
    cout<<sum<<endl;
    percentage=(sum*100)/500;
    cout<<percentage<<endl;

    grade(percentage);

}

int grade(float percentage)
{
    
    if(percentage<40)
    {
        cout<<"F"<<endl;
    }
    else if(percentage>=40 && percentage<=50)
    {
        cout<<"D"<<endl;
    }
    else if(percentage>=50 && percentage<=60)
    {
        cout<<"C"<<endl;
    }
    else if(percentage>=61 && percentage<=70)
    {
        cout<<"B"<<endl;
    }

    else if(percentage>=71 && percentage<=80)
    {
        cout<<"B+"<<endl;
    }

    else if(percentage>=81 && percentage<=85)
    {
        cout<<"A"<<endl;
    }

    else if(percentage>85)
    {
        cout<<"A+"<<endl;
    }


}