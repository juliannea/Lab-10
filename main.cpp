#include <iostream>
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
  
  

  return 0;
}


