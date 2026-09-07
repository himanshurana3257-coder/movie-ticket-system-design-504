#ifndef SEAT_H
#define SEAT_H

#include<string>

using namespace std;


enum SeatType
{
SILVER,
GOLD,
PLATINUM
};


class Seat
{

private:

string number;

SeatType type;


public:


Seat(string,SeatType);


string getSeatNumber();

SeatType getType();

int getPrice();


};


#endif
