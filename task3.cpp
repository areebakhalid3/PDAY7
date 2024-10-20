#include<iostream>
using namespace std;
void numamplify();
int numamp=0;

int main(){

cout << "Enter the number to amplify:";
cin >> numamp;

numamplify();

return 0;
}
void numamplify(){

    int num=1;

for(num=1;num<=numamp;num++){
    if(num%4==0){
        cout << num*10;
    }
    else{cout << num;}

if(num<numamp){
    cout << ",";
}
    }

}
