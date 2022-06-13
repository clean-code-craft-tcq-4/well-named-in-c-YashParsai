#include "colorCoding.h"

extern int numberOfMajorColors;
extern int numberOfMinorColors;
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

void printReference(void)
{

int majorCount = 0;
int minorCount = 0;
ColorPair colorPair;

printf("==================color coding reference manual====================\n");
printf("Pair No.\t\tmajor color\t\tminor color\n");
for(; majorCount<=numberOfMajorColors; majorCount++)
{
   colorPair.majorColor = majorCount;
   for(; minorCount<=numberOfMinorColors; minorCount++)
   {
      colorPair.minorColor = minorCount;
      printf("%d\t\t",GetPairNumberFromColor(&colorPair));
      printf("%s\t\t",MajorColorNames[majorCount]);
      printf("%s\t\t\n",MinorColorNames[minorCount]);

   }
}
}
