// movie.h
#ifndef MOVIE_H
#define MOVIE_H

#define MAX_SEATS 60

struct movie
{
    char name[30];
    int starting_time;
    int length;
    int screening_day;
    char screening_month[8];
    char genre[40];
    char director[50];
    int seats[MAX_SEATS];
    int num_seats;
};

extern struct movie film[5];

#endif // MOVIE_H