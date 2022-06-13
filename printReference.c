#include <stdio.h>
#include "colorCoding.h"
#include "printReference.h"

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
   printf("Pair No.\tmajor color\tminor color\n");
   for(; majorCount<numberOfMajorColors; majorCount++)
   {
      colorPair.major = majorCount;
      for(minorCount=0; minorCount<numberOfMinorColors; minorCount++)
      {
         colorPair.minor = minorCount;
         printf("%d\t\t",GetPairNumberFromColor(&colorPair));
         printf("%s\t\t",MajorColorNames[majorCount]);
         printf("%s\t\t\n",MinorColorNames[minorCount]);

      }
   }
   printf("==================================================================\n");
}
