#include <iostream>

using namespace std;

int main()
{
    int i,v=1;
    for(i=1;i<=15;++i)
    {
        if(i%2!=0)
            v=v*i;

    }
    cout<<"v="<<v<<endl;
}
