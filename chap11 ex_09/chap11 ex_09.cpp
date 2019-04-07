#include <iostream>
#include "Package.h"
#include "Twoday.h"
#include "Overnight.h"
using namespace std;

int main()
{
   Package package1( "Liu Xizomi", "1 Main St", "QingDao",  266510,
      "Song Rui", "7 Elm St", "LinYi", 265475, 8.7, .8 );
   TwoDayPackage package2( "Zhang San", "5 Broadway", "BeiJing",
      345678, "LiSi", "21 Pine Rd", "ShangHai",  234567,
      25.34, .55, 2.3 );
   OvernightPackage package3( "WangLi", "2 Oak St", "HeZe", 
      587964, "FangLi", "9 Main St", "HeBei", 324567,
      13.24, .75, .63 );

   cout << fixed << setprecision( 2 );

   cout << "Package 1:\n\nSender:\n" << package1.getSenderName()
      << '\n' << package1.getDriction() << '\n'
      << package1.getSenderCity() << ", " << package1.getSenderState()
      << ' ' << package1.getSenderP.C();
   cout << "\n\nRecipient:\n" << package1.getRecipientName()
      << '\n' << package1.getRecipientAddress() << '\n'
      << package1.getRecipientCity() << ", "
      << package1.getRecipientState() << ' '
      << package1.getRecipientP.C();
   cout << "\n\nCost: $" << package1.calculateCost() << endl;

   cout << "\nPackage 2:\n\nSender:\n" << package2.getSenderName()
      << '\n' << package2.getDriction() << '\n'
      << package2.getSenderCity() << ", " << package2.getSenderState()
      << ' ' << package2.getSenderP.C();
   cout << "\n\nRecipient:\n" << package2.getRecipientName()
      << '\n' << package2.getRecipientAddress() << '\n'
      << package2.getRecipientCity() << ", "
      << package2.getRecipientState() << ' '
      << package2.getRecipientP.C();
   cout << "\n\nCost: $" << package2.calculateCost() << endl;

   cout << "\nPackage 3:\n\nSender:\n" << package3.getSenderName()
      << '\n' << package3.getDriction() << '\n'
      << package3.getSenderCity() << ", " << package3.getSenderState()
      << ' ' << package3.getSenderP.C();
   cout << "\n\nRecipient:\n" << package3.getRecipientName()
      << '\n' << package3.getRecipientAddress() << '\n'
      << package3.getRecipientCity() << ", "
      << package3.getRecipientState() << ' '
      << package3.getRecipientP.C();
   cout << "\n\nCost: $" << package3.calculateCost() << endl;
}
