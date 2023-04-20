#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string> 
#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

TEST_CASE("Tests for minutesSinceMidnight(Time time)")
{
  Time sinceMid = {10,30};
  CHECK(minutesSinceMidnight(sinceMid) == 630);

}

TEST_CASE("Tests for minutesUntil(Time earlier, Time later)")
{
  Time sinceMid = {10,30};
  Time sinceMid2 = {13, 40};
  CHECK(minutesUntil(sinceMid, sinceMid2) == 190);
}

TEST_CASE("Tests for std::string getTimeSlot(TimeSlot ts)")
{
  Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	TimeSlot morning = {movie1, {9,15}};
	TimeSlot daytime = {movie2, {12,15}};
	TimeSlot evening = {movie2, {16,45}};
  Movie movie3 = {"Tangled", ROMANCE, 120};
  TimeSlot morning2 ={movie3,{10,45}};
  Movie movie4 = {"Everything Everywhere All At Once", ACTION, 120};
  TimeSlot evening2 ={movie4,{10,45}};

  CHECK(getTimeSlot(morning) == "Back to the Future COMEDY (116) [starts at 9:15, end by 11:11 ]");

  CHECK(getTimeSlot(daytime) == "Black Panther ACTION (134) [starts at 12:15, end by 14:29 ]");

  CHECK(getTimeSlot(evening) == "Black Panther ACTION (134) [starts at 16:45, end by 18:59 ]");

  CHECK(getTimeSlot(morning2) == "Tangled ROMANCE (120) [starts at 10:45, end by 12:45 ]");

  CHECK(getTimeSlot(evening2) == "Everything Everywhere All At Once ACTION (120) [starts at 10:45, end by 12:45 ]");
}

TEST_CASE("Tests for TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)")
{
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  TimeSlot morning = {movie1, {9,15}};
  TimeSlot next = scheduleAfter(morning,movie1);
  CHECK(getTimeSlot(next) == "Back to the Future COMEDY (116) [starts at 11:11, end by 13:7 ]");
}

TEST_CASE("Tests for bool timeOverlap(TimeSlot ts1, TimeSlot ts2) ")
{
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  TimeSlot morning = {movie1, {9,15}};
  Movie movie3 = {"Tangled", ROMANCE, 120};
  TimeSlot morning2 ={movie3,{10,45}};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot evening = {movie2, {16,45}};
  CHECK(timeOverlap(morning, morning2) == true);
  CHECK(timeOverlap(morning, evening) == false);

  
  
}