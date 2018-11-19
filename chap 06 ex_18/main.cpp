#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int s=1,i=1;
    while(i<=exponent)
    {
        s=s*base;
        i++;
    }
    return s;
}

int main()
{
    int a,b,y;
    cout<<"please enter two numbers:";
    cin>>a>>b;
    y=integerPower(a,b);
    cout<<y<<endl;
    return 0;
}
