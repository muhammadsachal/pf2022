#include<iostream>
using namespace std;
main()
{   
    float bus=0,truck=0,train=0;
    int cargo;
    int total;
    int bp;
    int tp;
    int trp;
    float avg;
    float weight;
    float p1,p2,p3;
    int ton=0;
    cout<<"Enter the number of cargo"<<endl;
    cin>>cargo;

    for(int i=1; i<=cargo; i++)
        {
            cout<<"Weight is:"<<endl;
            cin>>weight;
            ton=ton+weight;

            if(weight<=3)
            {
                bus+=weight;
            }
            else if(weight<=11)
            {
                truck+=weight;
            }
            else 
            {
                train+=weight;
            }
            
        }

        bp=bus*200;     //bus price
        tp=truck*175;   //truck price
        trp=train*120;  //train price

        total=bp+tp+trp;
        avg=total/ton;

        p1=(bus/ton)*100;
        p2=(truck/ton)*100;
        p3=(train/ton)*100;

cout<<avg<<endl;
cout<<p1<<endl<<p2<<endl<<p3<<endl;
        

}