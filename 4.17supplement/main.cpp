#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"please enter a number:";
    cin>>a;
    for(a;a<2;a)
    {
       i=a%2;
       a=a/2;
       cout<<i;
    }
    return 0;
}
