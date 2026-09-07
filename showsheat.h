#ifndef SHOWSEAT_H
#define SHOWSEAT_H


#include "Seat.h"


enum Status
{
AVAILABLE,
BOOKED
};


class ShowSeat
{

private:

Seat seat;

Status status;


public:


ShowSeat(Seat);


void book();

void release();


};


#endif
