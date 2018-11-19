#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,s;
    cin>>f;
    e=f%10;
    d=((f-e)/10)%10;
    s=f/1000;
    b=s%10;
    a=((s-b)/10)%10;
    if(a==e^b==d)cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
        return 0;


}
