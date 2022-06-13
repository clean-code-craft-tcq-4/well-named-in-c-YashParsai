#define MAX_COLORPAIR_NAME_CHARS  16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct 
{
    enum MajorColor major;
    enum MinorColor minor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);
