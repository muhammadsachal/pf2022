#include<iostream>
using namespace std;
main()
{
    int patients;
    int doc=7;int days;
    int total=0;
    int treated=0,untreated;     
    cout<<"Enter the days"<<endl;
    cin>>days;   

    for(int crday=1; crday<=days; crday++)
    {
        if(crday%3==0)
            {
                if(untreated>treated)
                {
                    doc=doc+1;
                }
            }


        cout<<"Enter patient"<<endl;
        cin>>patients;
        total=total+patients;

        if(patients>=doc)
            {
                treated=treated+doc;
            }
        else
        {
            treated=treated+patients;
        }
    untreated=total-treated;
    
    }
        cout<<"treated:"<<treated<<endl;
        cout<<"untreated:"<<untreated;


}