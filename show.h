#ifndef SHOW_H
#define SHOW_H

#include<string>
#include "Movie.h"
#include "Screen.h"


class Show
{

private:

Movie movie;

Screen screen;

string time;


public:

Show(Movie,Screen,string);


};


#endif
