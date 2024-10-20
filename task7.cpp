#include<iostream>
using namespace std;

int main()
{
    int days,p; //p=patients
    int doc=7;
    int untreated=0,treated=0;


    cout<<"Enter the number of days you visited hospital:";
    cin>> days;

    for(int i=1;i<=days;i++)
    {
        cout<<"Number of patients who visited hospital on day "<<i<<":"<<endl;
        cin>>p;

        //Every 3 days

        if(i%3==0 && i!=0 && untreated>treated)
        {
            doc++;
        }

        if(p<=doc)
        {
            treated=treated+p;
            untreated=untreated+0;
        }
        else if(p>doc)
        {
            treated=treated+doc;
            untreated+=p-doc; 
        }
    }
    
    cout<<"Treated patients:"<<treated<<endl;
    cout<<"Untreated patients:"<<untreated<<endl;
}