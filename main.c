#include<math.h>
#include <assert.h>
#include "day1.h"

int main()
{
    assert(utol('A')=='a');
    assert(areaofcircle(5) == 15.706000000000000);
    assert(simpleinterest(1000,5,2) == 100);
    assert(compoundinterest(1000,5,2) == 11000);
    assert(eveorodd(10) == 1);
    assert(leap(2027) == 0);
    assert(leftie(10) == 40);

    return 0;
}
