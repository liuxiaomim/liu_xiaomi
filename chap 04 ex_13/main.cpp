#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double md,gu,mgp,tmgp,s=0,p=0;
    cout<<"Enter miles driven(-1 to quit):";
    cin>>md;
    while(md!=-1)
    {
        cout<<"Enter gallons used:";
        cin>>gu;
        mgp=md/gu;
        cout<<setiosflags(ios::fixed)<<setprecision(6);
        cout<<"MPG this trip:"<<mgp<<endl;
        s=md+s;
        p=gu+p;
        tmgp=s/p;
        cout<<setiosflags(ios::fixed)<<setprecision(6);
        cout<<"Total MPG:"<<tmgp<<endl;
        cout<<endl;
        cout<<"Enter miles driven(-1 to quit):";
        cin>>md;

    }
    return 0;
}
