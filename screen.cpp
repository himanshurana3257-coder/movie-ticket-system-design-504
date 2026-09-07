#include "Screen.h"


Screen::Screen(int n)
{
screenNumber=n;
}


void Screen::addSeat(Seat s)
{
seats.push_back(s);
}


int Screen::getScreenNumber()
{
return screenNumber;
}
