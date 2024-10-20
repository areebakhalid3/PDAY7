#include <iostream>
using namespace std;
void up(int r);
void low(int r);
main()
{
    int r;
    cout<<"Enter desired number of rows:";
    cin>>r;
    up(r);
    low(r);
}
void up(int r)
{
    for(int row=1; row<=r ;row++)
    {
         for(int rs=r-row; rs>0; rs--)
         {
            cout<<" ";
         }
         for (int col=1; col<= row;col++)
         {
             cout<<"*";
         }
        cout<<endl;
    }
}
void low(int r)
{
    for(int row=r; row>0; row--)
    {
        for(int rs=r-row; rs>0; rs--)
        {
            cout<<" ";
        }
        for(int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}