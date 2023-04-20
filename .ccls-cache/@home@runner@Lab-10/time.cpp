#include <iostream> 
#include "time.h"

int minutesSinceMidnight(Time time)
{
  int minutes;
  double to_min = (time.h * 60); //accessing hours and multiplying to conver to min
  minutes = to_min + time.m;
  return minutes;
}

int minutesUntil(Time earlier, Time later)
{
  int until;
  int minE = minutesSinceMidnight(earlier);
  int minL = minutesSinceMidnight(later);
  until = minL - minE;

  return until;
}

Time addMinutes(Time time0, int min)
{
  int minutes_now = minutesSinceMidnight(time0);
  int new_minutes = minutes_now + min;
  int newHour = new_minutes/60;
  int newMin = new_minutes % 60;
  Time newT = {newHour, newMin};
  
  return newT;
}

void printTime(Time time)
{
	std::cout << time.h << ":" << time.m;
}

  
