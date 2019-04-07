#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

class PACKAGE_H
{
public:
    Package(const std::string &,const std::string &,const std::string &,double=0.0);

    void setNameOfSender(const std::string);
    std::string getNameOfSender()const;

    void setRecipientName(const std::string);
    std::string getRecipientName()const;

    void setDirection(const std::string);
    std::string getDirection()const;

    void setRecipientAddress(const std::string);
    std::string getRecipientAddress()const;

    void setSenderCity(const std::string);
    std::string getSenderCity()const;

    void setRecipientCity(const std::string);
    std::string getRecipientCity()const;

    void setSenderState(const std::string);
    std::string getSenderState()const;

    void setRecipientState(const std::string);
    std::string getRecipientState()const;

    void setSenderP.C(const std::string);
    std::string getSenderP.C()const;

    void setRecipientP.C(const std::string);
    std::string getRecipientP.C()const;

    void setWeight(double);
    double getWeight()const;

    double CalculateCost()const;



private:
    std::string nameOfSender;
    std::string recipientName;
    std::string direction;
    std::string recipientAddress;
    std::string senderCity;
    std::string recipientCity;
    std::string senderState;
    std::string recipientState;
    std::string senderP.C;
    std::string recipientP.C;
    double weight;

};
#endif
