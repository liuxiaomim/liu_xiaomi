#include<iostream>
using namespace std;
int charge(int hours)
{

    double charge;


    if(hours<=3)charge=2.00;
    else
    {
        if(hours<=18)charge=2+(hours-3)*0.5;
        else charge=10.00;
    }
    return(charge);

}
float quzheng(float hours)
{
    float s,i;
    s=hours-int(hours);
    if(s==0)i=hours;
    else
        i=int(hours+1);
    return(i);
}
int main()
{
    int hours1,hours2,hours3,a,b,c;
    double charge1,charge2,charge3,tcharge,thours;
    cin>>a>>b>>c;
    hours1=quzheng(a);
    hours2=quzheng(b);
    hours3=quzheng(c);
    charge1=charge(hours1);
    charge2=charge(hours2);
    charge3=charge(hours3);
    thours=a+b+c;
    tcharge=charge1+charge2+charge3;

    cout<<"Car"<<'\t'<<"Hours"<<'\t'<<"Charge"<<endl;
    cout<<"1"<<'\t'<<hours1<<'\t'<<charge1<<endl;
    cout<<"2"<<'\t'<<hours2<<'\t'<<charge2<<endl;
    cout<<"3"<<'\t'<<hours3<<'\t'<<charge3<<endl;
    cout<<"TOTAL"<<'\t'<<thours<<'\t'<<tcharge<<endl;
}
