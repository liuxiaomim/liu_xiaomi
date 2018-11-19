#include <iostream>

#include<cmath>

#include<iomanip>

using namespace std;

double roundToInteger(double number)
{
    double y;
    y=floor(number+0.5);
    return y;
}
double roundToTenths(double number)
{
    double y;
    y=floor(number*10+0.5)/10;
    return(y);
}
double roundToHundredths(double number)
{
    double y;
    y=floor(number*100+0.5)/100;
    return(y);
}
double roundToThousandths(double number)
{
    double y;
    y=floor(number*1000+0.5)/1000;
    return(y);
}
int main()
{
    double a,y1,y2,y3,y4;
    cout<<"please enter a number:";
    cin>>a;
    y1=roundToInteger(a);
    y2=roundToTenths(a);
    y3=roundToHundredths(a);
    y4=roundToThousandths(a);
    cout<<y1<<endl;
    cout<<y2<<endl;
    cout<<y3<<endl;
    cout<<y4<<endl;
}
