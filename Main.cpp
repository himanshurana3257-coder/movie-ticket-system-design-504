#include<iostream>
#include "Movie.h"
#include "Seat.h"

using namespace std;

int main()
{
    Movie movie("Avengers","English",180);

    cout<<"===== Movie Ticket Booking System ====="<<endl;

    cout<<"Movie Name : "
        <<movie.getTitle()<<endl;

    cout<<"Language : "
        <<movie.getLanguage()<<endl;

    cout<<"Duration : "
        <<movie.getDuration()
        <<" minutes"<<endl;


    Seat s1("S1",SILVER);

    cout<<"Seat : "
        <<s1.getSeatNumber()<<endl;

    cout<<"Price : Rs."
        <<s1.getPrice()<<endl;


    return 0;
}
