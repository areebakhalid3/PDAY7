#include<iostream>
using namespace std;
bool isprime(int num);

int main(){

int num;
cout << "Enter Number:";
cin >> num;

int result=isprime(num);
cout << result;

}

bool isprime(int num)
{
    if(num <= 1)
    {
        return false;
    }

    for(int n=2;n<num;n++)
    {
        if(num%n==0)
        {
        return false;
        }
    }
        return true;
       
}