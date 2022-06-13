#include "colorCoding.h"


/************Variable declerations********************/

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
//const int MAX_COLORPAIR_NAME_CHARS = 16;

/***********Function definition**********************/

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

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
		coloPair.minorColor = minorCount;
		printf("%d\t\t",GetPairNumberFromColor(&colorPair));
		printf("%s\t\t",MajorColorNames[majorCount]);
		printf("%s\t\t\n",MinorColorNames[minorCount]);

	}
}

}
