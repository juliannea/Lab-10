#pragma once 

class Time{
public:
  int h; //hour
  int m; //minutes
};

int minutesSinceMidnight(Time time);

int minutesUntil(Time earlier, Time later);

Time addMinutes(Time time0, int min);

void printTime(Time time);