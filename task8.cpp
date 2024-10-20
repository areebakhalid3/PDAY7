#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int count,tonnage;
    int minibus=0,truck=0,train=0,cargo=0;
    float sum=0;
    float pm,pt,ptn,average;


    cout<<"Enter the count of cargo for transportation:";
    cin>> count;

    for(int i=1;i<=count;i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<":"<<endl;
        cin>> tonnage;

        sum=sum+tonnage;

        if(tonnage<=3)
        {
            minibus=minibus+tonnage;
        }
        else if (tonnage>3 && tonnage<=11)
        {
            truck=truck+tonnage;
        }
        else if(tonnage>11)
        {
            train=train+tonnage;
        }
        
    } 
//average price per ton

average=(minibus*200+truck*175+train*120)/sum;

cout << fixed << setprecision(2) << average;
cout << "%" << endl;

//Percentage of cargo

pm=(minibus/sum)*100;

cout << fixed << setprecision(2) << pm;
cout << "%" << endl;

pt=(truck/sum)*100;

cout << fixed << setprecision(2) << pt;
cout << "%" << endl;

ptn=(train/sum)*100;

cout << fixed << setprecision(2) << ptn;
cout << "%" << endl;

}