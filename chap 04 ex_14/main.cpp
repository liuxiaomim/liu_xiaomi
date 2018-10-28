

#include <iostream>

using namespace std;

int main()
{
    int account;
    double beginning_balance,total_charges,total_credits,credit_limit,new_balance;


    while(account!=-1)
    {
         cout<<"Enter account number(or -1 to quit):";
         cin>>account;
         if(account==-1)break;
        cout<<"Enter beginning balance:";
        cin>>beginning_balance;
        cout<<"Enter total charges:";
        cin>>total_charges;
        cout<<"Enter total credits:";
        cin>>total_credits;
        cout<<"Enter credit limit:";
        cin>>credit_limit;
        new_balance=beginning_balance+total_charges-total_credits;


        if(new_balance<=credit_limit)
            {cout<<"New balance is "<<new_balance<<endl;
            cout<<endl;
            }
           else
            {cout<<"New balance is "<<new_balance<<endl;
            cout<<"Account:"<<account<<endl;
        cout<<"Credit Limit:"<<credit_limit<<endl;
        cout<<"Balance:"<<new_balance<<endl;
        cout<<"Credit Limit Exceeded."<<endl;
        cout<<endl;}

    }
    return 0;
}













































