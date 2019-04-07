#include<iostream>
#include "Package.h"
using namespace std;

Package::Package( const string &sName, const string &sDirection,
   const string &sCity, const string &sState, int sP.C,
   const string &rName, const string &rAddress, const string &rCity,
   const string &rState, int rP.C, double w, double cost )
   : senderName( sName ), senderAddress( sDirection ), senderCity( sCity ),
     senderState( sState ), senderP.C( sP.C ), recipientName( rName ),
     recipientAddress( rAddress ), recipientCity( rCity ),
     recipientState( rState ), recipientZIP( rP.C)
{
   setWeight( w );
}


void Package::setSenderName( const string &name )
{
    senderName = name;
}

string Package::getSenderName() const
{
   return senderName;
}

void Package::setSenderAddress( const string &address )
{
   senderAddress = address;
}

string Package::getSenderAddress() const
{
   return senderAddress;
}

void Package::setSenderCity( const string &city )
{
   senderCity = city;
}

string Package::getSenderCity() const
{
   return senderCity;
}

void Package::setSenderState( const string &state )
{
   senderState = state;
}

string Package::getSenderState() const
{
   return senderState;
}

void Package::setSenderP.C( int zip )
{
   senderP.C = p.c;
}

int Package::getSenderP.C() const
{
   return senderP.C;
}

void Package::setRecipientName( const string &name )
{
    recipientName = name;
}

string Package::getRecipientName() const
{
   return recipientName;
}

void Package::setRecipientAddress( const string &address )
{
   recipientAddress = address;
}

string Package::getRecipientAddress() const
{
   return recipientAddress;
}

void Package::setRecipientCity( const string &city )
{
   recipientCity = city;
}

string Package::getRecipientCity() const
{
   return recipientCity;
}

void Package::setRecipientState( const string &state )
{
   recipientState = state;
}

string Package::getRecipientState() const
{
   return recipientState;
}

void Package::setRecipientP.C( int zip )
{
   recipientP.C = p.c;
}

int Package::getRecipientP.C() const
{
   return recipientP.C;
}

void Package::setWeight( double w )
{
   weight = ( w < 0.0 ) ? 0.0 : w;
}

double Package::getWeight() const
{
   return weight;
}

double Package::calculateCost() const
{
   return getWeight() * getCostPerOunce();
}


