#include<iostream>

using namespace std;

int main()
{
    int a=0,b,c = 1;

   cout<<"please enter a number:";

   cin>>b;

    for(b; b > 0; b)
    {
        a=(b%10)*c +a;

        b=b/10;

        c = c * 2;

    }
    cout<<a<<endl;

    return 0;
}
