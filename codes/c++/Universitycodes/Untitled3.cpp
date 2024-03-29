//Multiple Element
/*
#include <iostream>
using namespace std;

struct rectangle
{
    float length;
    float width;
};

void setLengthWidth(rectangle r[],int n)
{
    for(int i = 0; i<n; ++i)
    {
        r[i].length = 5.0;
        r[i].width=4.0;
    }
}

void getArea(rectangle r[], int n)
{
    for(int i=0; i<n; ++i)
    {
        cout<<r[i].length*r[i].width<<endl;
    }
}

int main()
{
    rectangle r[1];
    setLengthWidth(r,20);
    getArea(r,20);

    return 0;
}
*/
//Compare between 1 and 2:
//2)
//Multiple Element
#include <iostream>
using namespace std;

struct rectangle
{
    float length;
    float width;
};

void setLengthWidth(rectangle *r, int n)
{
    for(int i =0; i<n; ++i)
    {
        r[i].length = 5;
        r[i].width = 6;
    }
}

void getArea(rectangle *r, int n)
{
    for(int i =0; i<n; ++i)
        cout<<r[i].length*r[i].width<<endl;
}

int main()
{
    rectangle *r = new rectangle[10];
    setLengthWidth(r,10);
    getArea(r,5);

    return 0;
}
