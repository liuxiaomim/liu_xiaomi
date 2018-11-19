


#include <iostream>

using namespace std;

int main()
{
    int a,s=1,i=1,n;
    cin>>n;
    a=n-1;
    if((n==0)||(n==1))cout<<"s=1"<<endl;
        else
        {

            while(i<=a)
    {
       s= s*n;
       n=n-1;
       i++;
    }
    cout<<"s="<<s<<endl;
        }
   return 0;

}










