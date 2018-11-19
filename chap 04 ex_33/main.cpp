#include<iostream>
using namespace std;
int main()
{
double a,b,c;
cin>>a>>b>>c;
if(a+b>c^a+c>b^b+c>a)
{
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c||a*a))
        cout<<"This is a right angled triangle."<<endl;
    else
        cout<<"This is not a right angled triangle."<<endl;
}
else
    cout<<"This is not a triangle."<<endl;
return 0;
}
