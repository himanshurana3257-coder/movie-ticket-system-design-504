#include "Seat.h"


Seat::Seat(string n,SeatType t)
{
number=n;
type=t;
}


string Seat::getSeatNumber()
{
return number;
}


SeatType Seat::getType()
{
return type;
}


int Seat::getPrice()
{

if(type==SILVER)
return 150;

else if(type==GOLD)
return 250;

return 400;

}
