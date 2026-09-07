#ifndef PAYMENT_H
#define PAYMENT_H


class Payment
{

protected:

double amount;


public:

virtual bool processPayment()=0;


};


#endif
