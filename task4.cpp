#include <iostream>
using namespace std;
int dots(int tri);

int main()
{
    int tri;
    cout<<"Enter number of triangles: ";
    cin>>tri;

    int output = dots(tri);
    cout<<"Dots in the Triangle: "<<output;

return 0;
}

int dots(int tri)
{
    int d;
    d=tri*(tri+1)/(2);
    
return d;
}