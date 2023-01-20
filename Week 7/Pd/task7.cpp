#include<iostream>
using namespace std;
main()
{
    float number;
    float p1,p2,p3;
    int input;
    int dby2=0;
    int dby3=0;
    int dby4=0;

    cout<<"Enter the range"<<endl;
    cin>>number;

    for(int no=1; no<=number; no++)
        {
            cout<<"Enter the numbers"<<endl;
            cin>>input;

            if(input%2==0)
                {
                    dby2=dby2+1;
                }
                if(input%3==0)
                {
                    dby3=dby3+1;
                }
                if(input%4==0)
                {
                    dby4=dby4+1;
                }
        }
            cout<<dby2<<dby3<<dby4;
            p1=(dby2/number)*100;
            p2=(dby3/number)*100;
            p3=(dby4/number)*100;
            cout<<p1<<endl<<p2<<endl<<p3<<endl;
            
}