#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main()
{

   vector < Account * > accounts( 4 );

   accounts[ 0 ] = new SavingsAccount( 430.0, .08 );
   accounts[ 1 ] = new CheckingAccount( 60.0, 5.0 );
   accounts[ 2 ] = new SavingsAccount( 400.0, .125);
   accounts[ 3 ] = new CheckingAccount( 700.0, .9 );

   cout << fixed << setprecision( 2 );

   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      cout << "Account " << i + 1 << " balance: $"
         << accounts[ i ]->getBalance();

      double withdrawalAmount = 0.0;
      cout << "\nEnter an amount to withdraw from Account " << i + 1
         << ": ";
      cin >> withdrawalAmount;
      accounts[ i ]->debit( withdrawalAmount );

      double depositAmount = 0.0;
      cout << "Enter an amount to deposit into Account " << i + 1
         << ": ";
      cin >> depositAmount;
      accounts[ i ]->credit( depositAmount );

      SavingsAccount *savingsAccountPtr =
         dynamic_cast < SavingsAccount * > ( accounts[ i ] );

      if ( savingsAccountPtr != 0 )
      {
         double interestEarned = savingsAccountPtr->calculateInterest();
         cout << "Adding $" << interestEarned << " interest to Account "
            << i + 1 << " (a SavingsAccount)" << endl;
         savingsAccountPtr->credit( interestEarned );
      }

      cout << "Updated Account " << i + 1 << " balance: $"
         << accounts[ i ]->getBalance() << "\n\n";
   }
}
