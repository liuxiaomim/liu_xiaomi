#ifndef TWODAY_H
#define TWODAY_H

#include <iostream>

class TwoDayPackage : public Package
{
public:
   TwoDayPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double);

   void setFlatFee( double );
   double getFlatFee() const;

   double calculateCost() const;
private:
   double flatFee;
};

#endif
