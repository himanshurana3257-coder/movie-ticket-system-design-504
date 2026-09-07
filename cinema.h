#ifndef CINEMA_H
#define CINEMA_H

#include<string>
#include<vector>
#include "Screen.h"

using namespace std;


class Cinema
{

private:

string name;

vector<Screen> screens;


public:

Cinema(string);

void addScreen(Screen);


};


#endif
