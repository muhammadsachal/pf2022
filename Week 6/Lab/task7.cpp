#include<iostream> 
using namespace std;
int grade(int no);
main()
{
    int no;
    cout<<"Enter the number"<<endl;
    cin>>no;

    grade(no);

}

int grade(int no)
{
    if(no<50)
    {
        cout<<"F"<<endl;

    }
    else if(no>=50 && no<=60)
    {
        cout<<"E"<<endl;
    }
    else if(no>=61 && no<=70)
    {
        cout<<"D"<<endl;
    }

    else if(no>=71 && no<=80)
    {
        cout<<"C"<<endl;
    }

    else if(no>=81 && no<=85)
    {
        cout<<"B"<<endl;
    }

    else if(no>85)
    {
        cout<<"A"<<endl;
    }


}
