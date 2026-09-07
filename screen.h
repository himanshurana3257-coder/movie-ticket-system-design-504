#ifndef SCREEN_H
#define SCREEN_H

#include<vector>
#include "Seat.h"


class Screen
{

private:

int screenNumber;

vector<Seat> seats;


public:


Screen(int);

void addSeat(Seat);

int getScreenNumber();


};


#endif
