#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
   vector < Package * > packages( 3 );

   packages[ 0 ] = new Package( "Li Xiaomi", "1 Main St", "Qingdao", "MA",
      12345, "Li Si", "7 Elm St", "Beijing", "NY", 23456, 8.8, .6 );
   packages[ 1 ] = new TwoDayPackage( "Zhang San", "5 Broadway",
      "Shanghai", "MA", 34567, "Xue Lu", "21 Pine Rd", "Jiangsu",
      "MA", 45678, 10.9, .98, 3.0 );
   packages[ 2 ] = new OvernightPackage( "Songrui", "2 Oak St", "Hebei",
      "MA", 56789, "Song Zhenglian", "9 Main St", "Heilongjiang", "CO", 68957,
      18.25, .2, .56 );

   double totalShippingCost = 0.0;

   cout << fixed << setprecision( 2 );

   for ( size_t i = 0; i < packages.size(); i++ )
   {
      cout << "Package " << i + 1 << "\n\nSender:\n"
         << packages[ i ]->getSenderName() << '\n'
         << packages[ i ]->getSenderAddress() << '\n'
         << packages[ i ]->getSenderCity() << ", "
         << packages[ i ]->getSenderState() << ' '
         << packages[ i ]->getSenderZIP();
      cout << "\n\nRecipient:\n" << packages[ i ]->getRecipientName()
         << '\n' << packages[ i ]->getRecipientAddress() << '\n'
         << packages[ i ]->getRecipientCity() << ", "
         << packages[ i ]->getRecipientState() << ' '
         << packages[ i ]->getRecipientZIP();

      double cost = packages[ i ]->calculateCost();
      cout << "\n\nCost: $" << cost << "\n\n";
      totalShippingCost += cost;
   }

   cout << "Total shipping cost: $" << totalShippingCost << endl;
}
