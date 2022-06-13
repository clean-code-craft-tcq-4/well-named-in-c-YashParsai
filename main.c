#include <stdio.h>
#include <assert.h>
#include "colorCoding.h"
#include "testColorCode.h"
int main() {
    printReference();
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
