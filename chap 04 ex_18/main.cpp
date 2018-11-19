#include<iostream>
using namespace std;
int main()
{
    int a=1,b,c,d;
    cout<<"N"<<'\t'<<"10*N"<<'\t'<<"100*N"<<'\t'<<"1000*N"<<endl;
    while(a<=5)
    {

        b=10*a;
        c=100*a;
        d=1000*a;
        cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<endl;
        a++;


    }
    return 0;
}
