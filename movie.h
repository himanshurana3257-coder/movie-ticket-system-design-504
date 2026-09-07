#ifndef MOVIE_H
#define MOVIE_H

#include<string>
using namespace std;


class Movie
{

private:

string title;
string language;
int duration;


public:

Movie(string,string,int);

string getTitle();

string getLanguage();

int getDuration();


};


#endif
