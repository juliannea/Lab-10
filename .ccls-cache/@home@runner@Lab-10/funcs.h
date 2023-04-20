#pragma once 
#include "movie.h"
#include "time.h"
#include "timeslot.h"
#include <string>

int minutesSinceMidnight(Time time);

int minutesUntil(Time earlier, Time later);

Time addMinutes(Time time0, int min);

void printTime(Time time);

std::string getTimeSlot(TimeSlot ts);

void printMovie(Movie mv);

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

bool timeOverlap(TimeSlot ts1, TimeSlot ts2);