#include<iostream>
using namespace std;
void printdiamond(int rowsize);

int main(){

int rowsize;
cout << "Enter the number of rows:";
cin >> rowsize;
printdiamond(rowsize);
}
void printdiamond(int rowsize)
{
    for(int row=rowsize;row>0;row--)
    {
        for(int col=1;col<=row;col++){
            cout << "*" ;
        }

        cout << endl;
    }
}




