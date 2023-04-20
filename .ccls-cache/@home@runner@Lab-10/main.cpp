#include <iostream>
#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

int main()
{
  std::cout << "minutes since midnight tests" << std::endl;

  Time sinceMid = {10,30};
  std::cout << minutesSinceMidnight(sinceMid) << std::endl;

  Time sinceMid2 = {13, 40};
  std::cout << minutesSinceMidnight(sinceMid2) << std::endl;

  std::cout <<"minutes between" << std::endl;

  std::cout << minutesUntil(sinceMid, sinceMid2) << std::endl;

  std::cout <<"add minutes" << std::endl;

  Time sinceMid3 = {8,10};

  Time sinceMid4 = addMinutes(sinceMid3, 75);

  printTime(sinceMid4);
  
	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	TimeSlot morning = {movie1, {9,15}};
	TimeSlot daytime = {movie2, {12,15}};
	TimeSlot evening = {movie2, {16,45}};
  std::cout << getTimeSlot(morning) << std::endl;
	std::cout << getTimeSlot(daytime) << std::endl;
	std::cout << getTimeSlot(evening) << std::endl;
  
  Movie movie3 = {"Tangled", ROMANCE, 120};
  TimeSlot morning2 ={movie3,{10,45}};
  std::cout << getTimeSlot(morning2) << std::endl;

  Movie movie4 = {"Everything Everywhere All At Once", ACTION, 120};
  TimeSlot evening2 ={movie4,{10,45}};
  std::cout << getTimeSlot(evening2) << std::endl;

  TimeSlot next = scheduleAfter(morning,movie1);
	std::cout << "morning: " << getTimeSlot(morning) << std::endl;
	std::cout << "after morning: " << getTimeSlot(next) << std::endl;

  std::cout<<"does Time overlap morning and morning2: "<< std::boolalpha << timeOverlap(morning, morning2);
  std::cout<<std::endl;

  std::cout<<"does Time overlap morning and evening: " << std::boolalpha << timeOverlap(morning, evening);

  std::cout<<std::endl;
  

  return 0;
}


