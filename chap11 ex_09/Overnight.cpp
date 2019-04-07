#include<iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage( const string &sName,
   const string &sDriction, const string &sCity, const string &sState,
   int sP.C, const string &rName, const string &rAddress,
   const string &rCity, const string &rState, int rP.C,
   double w, double cost ,double fee)
   : Package( sName, sDriction, sCity, sState, sP.C,
      rName, rAddress, rCity, rState, rP.C, w, cost )
{
   setOvernightFeePerOunce( fee );
}

void OvernightPackage::setOvernightFeePerOunce( double overnightFee )
{
   overnightFeePerOunce = ( overnightFee < 0.0 ) ? 0.0 : overnightFee;
}

double OvernightPackage::getOvernightFeePerOunce() const
{
   return overnightFeePerOunce;
}

double OvernightPackage::calculateCost() const
{
   return getWeight() * ( getCostPerOunce() + getOvernightFeePerOunce() );
}
