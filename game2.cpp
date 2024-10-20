#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printmaze();
void printplayer();
void eraseplayer();
void moveplayerleft();
void moveplayerright();
void moveplayerup();
void moveplayerdown();
void printe1();
void erasee1();
void printe2();
void erasee2();
void printe3();
void erasee3();
void movee1();
void movee2();
void movee3();
void checkcollision();
void collectitem();
void displayscore();
char getCharAtxy(short int x, short int y);

int pX = 4, pY = 23; //player
int ex1 =6, ey1=2;   //enemy 1
int ex2=95, ey2=2;   //enemy 2
int ex3=95, ey3=20;  //enemy 3
int d1=1,d2=1,d3=1;  //distance
int dx=3,dy=3;
int health=3; //3 lives
int score=0;   
int item1x = 8, item1y = 2; 
bool item1collected = false;
int item2x = 80, item2y = 5; 
bool item2collected = false;
int item3x = 45, item3y = 8; 
bool item3collected = false;
int item4x = 20, item4y = 25; 
bool item4collected = false;
int item5x = 96, item5y = 20; 
bool item5collected = false;

int main()
{
     system("cls");
     system("Color E0");
     printmaze();
     printplayer();
     printe1();
     printe2();
     printe3();
     

    while(true)
{
    if (GetAsyncKeyState(VK_LEFT))
    {
    moveplayerleft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
    moveplayerright();
    }
     if (GetAsyncKeyState(VK_UP))
    {
    moveplayerup();
    }
     if (GetAsyncKeyState(VK_DOWN))
    {
    moveplayerdown();
    }
    movee1();
    movee2();
    movee3();
    
    collectitem(); 
    displayscore();
    checkcollision();
    
    Sleep(100);
}
return 0;
}

void printplayer()

{
gotoxy(pX,pY);

cout << "   O   ";
gotoxy(pX, pY+1);
cout << " / | \\ ";
gotoxy(pX, pY+2);
cout << "  / \\  ";
}

void eraseplayer()

{
gotoxy(pX,pY);
cout << "        ";
gotoxy(pX, pY+1);
cout << "        ";
gotoxy(pX, pY+2);
cout << "        ";
gotoxy(pX, pY+3);
cout << "        ";
gotoxy(pX, pY+4);
cout << "        ";
}

void moveplayerright()
{
    if (getCharAtxy(pX + 6, pY) == ' ')
    {
    eraseplayer();
    pX = pX + 1;
    printplayer();
    }
}

void moveplayerleft()
{
    if (getCharAtxy(pX-1, pY) == ' ')
   {
        eraseplayer();
        pX = pX - 1;

        printplayer();
    }
}

void moveplayerup()
{
    if (getCharAtxy(pX, pY-1) == ' ')
    {
        eraseplayer();
        pY = pY - 1;
        printplayer();
    }}



void moveplayerdown()
{
 if (getCharAtxy(pX, pY+3) == ' '){
        eraseplayer();
        pY = pY + 1;

        if(pY>=120 && pX>=30)
        {
            pY=pY-10;
            pX=pX-5;
        }
        printplayer();
    }
}

void printe1()

{
 gotoxy(ex1,ey1);
 cout<<"      _\\_      ";
 gotoxy(ex1, ey1+1);
 cout<<"   __/   \\====@";
 gotoxy(ex1, ey1+2);
 cout<<"  /~~~~~~~~~\\  ";
 gotoxy(ex1, ey1+3);
 cout<<"  \\O.O.O.O.O/  ";
 gotoxy(ex1, ey1+4);
 cout<<"   ---------    ";
}

void erasee1()

{
 gotoxy(ex1,ey1);
 cout<<"                ";
 gotoxy(ex1, ey1+1);
 cout<<"                ";
 gotoxy(ex1, ey1+2);
 cout<<"                ";
 gotoxy(ex1, ey1+3);
 cout<<"                ";
 gotoxy(ex1, ey1+4);
 cout<<"                ";
 
}
void printe2(){
gotoxy(ex2,ey2);
 cout<<"    __|__    ";
 gotoxy(ex2, ey2+1);
 cout<<"   /o-o--\\  ";
}

void erasee2(){
gotoxy(ex2,ey2);
 cout<<"             ";
 gotoxy(ex2, ey2+1);
 cout<<"             ";
}
void printe3()
{
 gotoxy(ex3,ey3);
 cout<<"    ____     ";
 gotoxy(ex3, ey3+1);
 cout<<"   |____|    ";
 gotoxy(ex3, ey3+2);
 cout<<"  [======]   ";
 gotoxy(ex3, ey3+3);
 cout<<"    [  ]     ";
}

void erasee3()
{
 gotoxy(ex3,ey3);
 cout<<"             ";
 gotoxy(ex3, ey3+1);
 cout<<"             ";
 gotoxy(ex3, ey3+2);
 cout<<"             ";
 gotoxy(ex3, ey3+3);
 cout<<"             ";
}
void movee1()
{
    erasee1();
    if(getCharAtxy(ex1, ey1 + d1) == ' ' && getCharAtxy(ex1, ey1 + 4 + d1) == ' ')
    {
    ey1 = ey1+d1;
    }

    if(ey1>=17||ey1<=1)
    {
        d1=-d1;
        ey1=ey1+d1;
    }
printe1();
}

void movee2() {
   
    erasee2();

//for diagonal movement
    
    ex2=ex2+dx;  
    ey2=ey2+dy;  

    if(ex2 >= 100 || ex2 <= 40)
    {
        dx = -dx; 
    }

    if(ey2 >= 10 || ey2 <= 4) 
    {
        dy = -dy; 
    }

    printe2();
}


void movee3()
{
    erasee3();

    if(getCharAtxy(ex3 + d3, ey3) == ' ' && getCharAtxy(ex3 + d3 + 9, ey3) == ' ')
     {
    ex3 = ex3+d3;
     }

    if(ex3>=95||ex3<=20)
    {
        d3=-d3;
        ex3=ex3+d3;
    }

    printe3();
}

void resetgame()
{
    pX = 2; 
    pY = 26; 
    ex1 = 6; ey1 = 2; 
    ex2 = 95; ey2 = 2; 
    ex3 = 95; ey3 = 20; 
    score =score; //score remains same

    item1collected = false; 
    item2collected = false; 
    item3collected = false; 
    item4collected = false; 
    item5collected = false; 

    item1x = 8; item1y = 3;
    item2x = 80; item2y = 5;
    item3x = 45; item3y = 8;
    item4x = 20; item4y = 25;
    item5x = 96; item5y = 20;
   
    system("cls");
    printmaze();
    printplayer();
    printe1();
    printe2();
    printe3();
    displayscore();
    gotoxy(0, 31);
    cout << "Health: " << health;
}

void gameover()
 {
    system("cls");
    cout<<endl;
    cout<<endl;
    cout << "           GAME OVER! You were caught by an enemy :(" << endl;
    cout << "           Do you want to play again?(Enter Y/N): ";
    char choice;
    cin >> choice;
    
    if (choice=='Y'||choice=='y') 
    {
        resetgame();
    } 
    
    else {
    cout<<endl;
    cout << "   <<Thanks for playing!>>"<<endl;
        exit(0);
    }
}

void checkcollision() 
{
    if((pX >= ex1 && pX <= ex1 + 12 && pY >= ey1 && pY <= ey1 + 4)|| // Enemy 1(5 rows high)
       (pX >= ex2 && pX <= ex2 + 7 && pY >= ey2 && pY <= ey2 + 1)||  // Enemy 2(2 rows high)
       (pX >= ex3 && pX <= ex3 + 8 && pY >= ey3 && pY <= ey3 + 3))   // Enemy 3(4 rows high)
    {    
        health--; 

     if(health <= 0) 
    {
    gameover(); 
    }
       
     else{
            gotoxy(0, 33);
            cout << "You were hit! Health: " << health;
            Sleep(1000); 
            resetgame();
        }
    }
}


void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printmaze()
{  
    int height=28;
    int width=120;
    //printing first line 
    //i=0 means first row

    for(int i=0;i<width;i++){
        cout << "#";
    }
    cout << endl;

    //inner lines 
    //i=1 means second row,height-1 means second last row

    for(int i=1;i<height-1;i++){
        cout << "#";

        for(int j=1;j<width-1;j++){
            cout << " ";
        }

        cout << "#";
        cout <<endl;
    }

    for(int i=0;i<width;i++){
        cout << "#";
    }
    cout << endl;
}

void collectitem() 
{
    if(!item1collected)
    {
        gotoxy(item1x, item1y);
        cout << "$"; 
    }
    if(!item2collected)
    {
        gotoxy(item2x, item2y);
        cout << "$";
    }

    if(!item3collected)
    {
        gotoxy(item3x, item3y);
        cout << "$"; 
    }

    if(!item4collected) 
    {
        gotoxy(item4x, item4y);
        cout << "$"; 
    }

    if(!item5collected) 
    {
        gotoxy(item5x, item5y);
        cout << "$"; 
    }

    if(!item1collected && (pX >= item1x - 1 && pX <= item1x + 1) && (pY >= item1y - 1 && pY <= item1y + 1))
    {
        item1collected = true;  
        gotoxy(item1x, item1y);
        cout << " "; 
        score=score+10; 

        gotoxy(0, 32); 
        cout << "You collected an item! Score: " << score << endl;
    }

    if (!item2collected && (pX >= item2x - 1 && pX <= item2x + 1) && (pY >= item2y - 1 && pY <= item2y + 1))
    {
        item2collected = true;  
        gotoxy(item2x, item2y);
        cout << " ";
        score=score+10; 

        gotoxy(0, 32); 
        cout << "You collected an item! Score: " << score << endl;
    }

    if (!item3collected && (pX >= item3x - 1 && pX <= item3x + 1) && (pY >= item3y - 1 && pY <= item3y + 1)) 
    {
        item3collected = true;  
        gotoxy(item3x, item3y);
        cout << " ";
        score=score+10; 

        gotoxy(0, 32); 
        cout << "You collected an item! Score: " << score << endl;
    }

    if (!item4collected && (pX >= item4x - 1 && pX <= item4x + 1) && (pY >= item4y - 1 && pY <= item4y + 1)) 
    {
        item4collected = true;  
        gotoxy(item4x, item4y);
        cout << " ";
        score=score+10; 

        gotoxy(0, 32); 
        cout << "You collected an item! Score: " << score << endl;
    }

    if (!item5collected && (pX >= item5x - 1 && pX <= item5x + 1) && (pY >= item5y - 1 && pY <= item5y + 1)) 
    {
        item5collected = true;  
        gotoxy(item5x, item5y);
        cout << " "; 
        score=score+10; 

        gotoxy(0, 32); 
        cout << "You collected an item! Score: " << score << endl;
    }
}

void displayscore() 
{
    gotoxy(0, 30);
    cout << "Score: " << score << "   ";
    gotoxy(0, 31);
    cout << "Health: " << health << "   "; 
}

char getCharAtxy(short int x, short int y)

{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}