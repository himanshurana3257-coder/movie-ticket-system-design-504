#include "Cinema.h"


Cinema::Cinema(string n)
{
name=n;
}


void Cinema::addScreen(Screen s)
{
screens.push_back(s);
}
