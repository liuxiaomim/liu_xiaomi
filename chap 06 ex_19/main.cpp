#include <iostream>
#include<cmath>

using namespace std;

double hypotenuse(double a,double b)
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}

int main()
{
    double a1,b1,a2,b2,a3,b3,c1,c2,c3;
    cin>>a1>>b1;

    c1=hypotenuse(a1,b1);
        cout<<c1<<endl;
    cin>>a2>>b2;
    c2=hypotenuse(a2,b2);
    cout<<c2<<endl;
    cin>>a3>>b3;
    c3=hypotenuse(a3,b3);

    cout<<c3<<endl;


}
