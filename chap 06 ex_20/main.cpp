#include <iostream>

using namespace std;

int multiple(int a,int b)
{
    char c;
    if(b%a==0)cout<<"true";
    else cout<<"false";

}

int main()
{
    int a,b;
    cout<<"please enter two numbers:";
    cin>>a>>b;
    multiple(a,b);
}
