#include "Movie.h"


Movie::Movie(string t,string l,int d)
{
title=t;
language=l;
duration=d;
}


string Movie::getTitle()
{
return title;
}


string Movie::getLanguage()
{
return language;
}


int Movie::getDuration()
{
return duration;
}
