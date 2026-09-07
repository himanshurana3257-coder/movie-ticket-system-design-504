#include "ShowSeat.h"


ShowSeat::ShowSeat(Seat s):seat(s)
{
status=AVAILABLE;
}


void ShowSeat::book()
{
status=BOOKED;
}


void ShowSeat::release()
{
status=AVAILABLE;
}
