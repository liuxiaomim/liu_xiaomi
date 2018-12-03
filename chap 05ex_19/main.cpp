#include <iostream>

using namespace std;

int main()
{
    double pi=0,n=0,s=-1,number;

    for(n=0;n<1000;n++)
    {
        s=s*(-1);

        pi=pi+s*(4/(2*n+1));

        number=n+1;

        cout<<number<<'\t'<<pi<<endl;
    }
}
