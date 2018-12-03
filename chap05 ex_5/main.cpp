#include <iostream>

using namespace std;

int main()
{
    int a,i,n,s=0;
    cin>>a;
    cout<<"please enter 'a' numbers:";
    for(i=0;i<a;i++)
    {
        cin>>n;
        s=s+n;
    }
    cout<<"s="<<s<<endl;
    return 0;
}
