#include <iostream>

#include<cmath>

#include<iomanip>

using namespace std;

int main()
{
    double a,b,c,d;
    int y1,y2,y3,y4;
    cin>>a>>b>>c>>d;

    y1=floor(a+0.5);
    y2=floor(b+0.5);
    y3=floor(c+0.5);
    y4=floor(d+0.5);
    cout<<a<<'\t'<<y1<<endl;
    cout<<b<<'\t'<<y2<<endl;
    cout<<c<<'\t'<<y3<<endl;
    cout<<d<<'\t'<<y4<<endl;
    return 0;
}
