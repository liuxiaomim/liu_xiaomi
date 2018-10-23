#include<iostream>

using namespace std;

int main()
{
    int base=200;

    double sales,salary;

    while(sales!=-1)
    {
    cout<<"Enter sales in dollars(-1 to end):$";

    cin>>sales;

    if(sales==-1)break;

    salary=base+0.09*sales;

    cout<<"Salary is:$"<<salary<<endl;

    cout<<endl;

    }
    return 0;
}

