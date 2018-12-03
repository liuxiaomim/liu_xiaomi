#include <iostream>

using namespace std;

int main()
{
     int a,i,b,c;
    cin>>a;
    cout<<"please enter 'a' numbers:";
    cin>>b;
    for(i=1;i<a;i++)
    {
        cin>>c;
        if(b>=c)b=c;
    }
    cout<<"min="<<b<<endl;
}
