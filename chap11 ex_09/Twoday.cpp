#include "TwoDayPackage.h"
#include<iostrean>
using namespace std;

TwoDayPackage::TwoDayPackage( const string &sName,
   const string &sDriction, const string &sCity, const string &sState,
   int sP.C, const string &rName, const string &rAddress,
   const string &rCity, const string &rState, int rP.C,
   double w, double cost, double fee )
   : Package( sName, sDriction, sCity, sState, sP.C,
      rName, rAddress, rCity, rState, rP.C, w, cost )
{
   setFlatFee( fee );
}

void TwoDayPackage::setFlatFee( double fee )
{
   flatFee = ( fee < 0.0 ) ? 0.0 : fee;
}

double TwoDayPackage::getFlatFee() const
{
   return flatFee;
}

double TwoDayPackage::calculateCost() const
{
   return Package::calculateCost() + getFlatFee();
}
