#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>

using namespace std;
class Account
{
public:
   Account( double );
   virtual void credit( double );
   virtual bool debit( double );
   void setBalance( double );
   double getBalance();
private:
   double balance;
};

#endif
