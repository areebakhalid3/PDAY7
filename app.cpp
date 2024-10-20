#include<iostream>
#include<conio.h>  //adding it to use getch function
using namespace std;
string name,email,password,logemail,logpassword; //variables for registeration and login
bool isowner;

void printheader();
void userregister();
void userlogin();
void listresources();
void borrowresources();
void returnresources();
int menu();

int main(){
printheader();
cout << "Press any Key to Continue. ";
getch();
system("cls");

userregister();
cout << "Press Enter to Continue. ";
getch();
system("cls");

userlogin();
while (true)
{
cout << "Press Enter to Continue. ";
getch();
system("cls");
    int option = menu();
    if (option == 1) {
        cout << "Press any Key to Continue. ";
        getch();
        system("cls");
        listresources(); }

    else if (option == 2) {
        cout << "Press any Key to Continue. ";
        getch();
        system("cls");
        borrowresources();}

    else if (option == 3) {
        cout << "Press any Key to Continue. ";
        getch();
        system("cls"); 
        returnresources();}

    else if (option == 4) {
        cout << "Exiting the application. Goodbye!" <<endl;
        break;
     }

cout << "Press any Key to Continue. ";
getch();
system("cls");
}
return 0;
}
void userregister()
{   cout << endl;
    cout << endl;
    cout << "                            ================================================" << endl;
    cout << "                            ==           R  E  G  I  S  T  E  R           ==" << endl;
    cout << "                            ==                  N  O  W !                 ==" << endl;
    cout << "                            ================================================" << endl;
    cout << endl;
    cout <<"          Enter your name." << endl;
                     cin  >> name;
    cout <<"          Enter your email id." << endl;
                     cin  >> email;
    cout <<"          Create a secure password." << endl;
                     cin  >> password;

    char usertype;
    cout << "Are you a resource owner or borrower?(press a for owner,b for borrower)";
    cin >> usertype;
    isowner = (usertype=='a');

    cout << "Registration successful!" <<endl;
}
void userlogin(){
    
    cout << endl;
    cout << "                           ===================================================" << endl;
    cout << "                           ==         L  O  G  I  N      P  A  G  E         ==" << endl;
    cout << "                           ===================================================" << endl;
    cout << endl;
    while(true){
    cout <<"         Enter your email id." << endl;
    cin  >> logemail;
    cout <<"         Enter your password" << endl;
    cin  >> logpassword;

    if((logemail==email)&&(logpassword==password))
    {cout << "                          Login successful."<<endl;
     cout << "                          ===================================================" << endl;
     cout << "                          ==              WELCOME, "<< name <<" !          ==" << endl;
     cout << "                          ===================================================" << endl;
        break;}

    else{ cout << "Login failed. Try again!"<<endl;}
    }
}

int menu(){
    int option;
    cout << endl; 
    cout << "                          ===================================================" << endl;
    cout << "                          ==       M  E  N  U     O  P  T  I  O  N  S      ==" << endl;
    cout << "                          ===================================================" << endl;
    cout << endl; 
    cout << endl;
    cout << "                    1. List Resources."   << endl;
    cout << "                    2. Borrow Resources." << endl;
    cout << "                    3. Return Resources." << endl;
    cout << "                    4. Exit."             << endl;
    cout << "--> Select options 1-4"   << endl;
    cin  >> option;
    return option;
}

void listresources()
{
    string rsc,yorno;
    cout << "Upload Resources."<<endl;

   while(true){
    cout << "Enter your resource:"<<endl;
    cin >> rsc;
    cout << "Do you want to upload more resources(enter 'yes' or 'no')?"<<endl;
    cin >> yorno;
    if(yorno=="no"||yorno=="No"||yorno=="NO"){; break;}
    }
    cout << "Your resource has been uploaded!"<<endl;
    
}

void borrowresources(){
    int numrsc;
    cout << "Available Resources:" <<endl;
    string r1="1. Laptop";
    string r2="2. Projector";
    string r3="3. Speakers";
    string r4="4. Headphones";
    string r5="5. USB chord";
 
    cout << r1 <<endl;
    cout << r2 <<endl;
    cout << r3 <<endl;
    cout << r4 <<endl;
    cout << r5 <<endl;

    cout << "Enter the number of resource you want to borrow:"<<endl;
    cin >> numrsc;
    cout << "You have successfully borrowed the resource!" <<endl;
}

void returnresources(){
    string returnrsc;
    cout << "Enter the name of the resource you want to return."<<endl;
    cin >> returnrsc;
    cout << "Thanks for using our app! Come back for more!"<<endl;

}
void printheader()
{
system("Color B0");  
   
    cout << "======================================================================================" << endl;
    cout << "                                                                                      " << endl;
    cout << "                  #######   ##      ##   #######   ########   ########                " << endl;
    cout << "                 ##     ##  ##      ##  ##     ##  ##     ##  ##                      " << endl;
    cout << "                 ##         ##      ##  ##     ##  ##     ##  ##                      " << endl;
    cout << "                 #########  ##########  #########  ########   ########                " << endl;
    cout << "                        ##  ##      ##  ##     ##  ##     ##  ##                      " << endl;
    cout << "                 ##     ##  ##      ##  ##     ##  ##     ##  ##                      " << endl;
    cout << "                  #######   ##      ##  ##     ##  ##     ##  ########                " << endl;
    cout << "                                                                                      " << endl;
    cout << "            #######    ########   ##      ##  ########  ########   ########           " << endl;
    cout << "           ##     ##   ##     ##  ##      ##  ##        ##     ##  ##                 " << endl;
    cout << "           ##          ##     ##  ##      ##  ##        ##     ##  ##                 " << endl;
    cout << "           #########   ########   ##########  ########  ########   ########           " << endl;
    cout << "                  ##   ##         ##      ##  ##        ##     ##  ##                 " << endl;
    cout << "           ##     ##   ##         ##      ##  ##        ##     ##  ##                 " << endl;
    cout << "            #######    ##         ##      ##  ########  ##     ##  ########           " << endl;
    cout << "                                                                                      " << endl;
    cout << "======================================================================================" << endl;
    cout << endl;
    cout << "                                          WELCOME!                                    " << endl;
    cout << endl;
    cout << "                        Your Trusted Business Application for Sharing                 " << endl;
    cout << "                                   Resources Seamlessly.                              " << endl;
    cout << endl;
    cout << "======================================================================================" << endl;

}
