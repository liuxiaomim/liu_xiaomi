#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int hours;
    double rate,salary;
    cout<<"Enter hours worked(-1 to end):";
    cin>>hours;
    while(hours!=-1)
    {
        cout<<"Enter hourly rate of the employee($00.00):";
        cin>>rate;
        if(hours<=40)salary=hours*rate;
        else salary=400+(hours-40)*1.5*rate;
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<"Salary is $"<<salary<<endl;
        cout<<endl;
        cout<<"Enter hours worked(-1 to end):";
        cin>>hours;
    }
    return 0;
}
