// Purpose: Header file for reserve.c
// reserve.h
#ifndef RESERVE_H
#define RESERVE_H

const int MAX_SEATS = 60;

struct reservation
{
    char movies[30];
    char name[40];
    int seats[MAX_SEATS];
    int num_seats;
    int balance;
};

extern struct reservation reserve[100];

#endif // RESERVE_H