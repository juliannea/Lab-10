#include <iostream> 
#include "time.h"
#include "movie.h"
#include "timeslot.h"

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

void printMovie(Movie mv)
{
	std::string g;
	switch(mv.genre) {
		case ACTION : g = "ACTION"; break;
		case COMEDY : g = "COMEDY"; break;
		case DRAMA : g = "DRAMA"; break;
		case ROMANCE : g = "ROMANCE"; break;
		case THRILLER : g = "THRILLER"; break;
	}
	std::cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

std::string getTimeSlot(TimeSlot.ts)
{
  //getting movie 
  Movie data = ts.movie;

  //getting starting time 
  Time startT = ts.startTime; //assigns a Time member values to the values in timeSlot 
  //turning to string to output 
  std::string startTS = std::to_string(startT.h) + ":" + std::to_string(startT.m);
  //finding the end time 
  Time endT = addMinutes(ts.startTime,data.duration);
  //convert end time to string 
  std::string endTS = std::to_string(endT.h) + ":" + std::to_string(endT.m);

  //getting genre 
  std::string g;
	switch(data.genre) {
		case ACTION : g = "ACTION"; break;
		case COMEDY : g = "COMEDY"; break;
		case DRAMA : g = "DRAMA"; break;
		case ROMANCE : g = "ROMANCE"; break;
		case THRILLER : g = "THRILLER"; break;
    
  std::string output = data.title + " " + g + " (" + std::to_string(data.duration) + ") " + "[starts at " + startTS + ", end by " + endTS;
  return output;
}
  


  
