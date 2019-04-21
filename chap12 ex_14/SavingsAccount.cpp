#include<iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance )
{
   interestRate = ( rate < 0.0 ) ? 0.0 : rate;
}

double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
}
