#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "time.h"

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