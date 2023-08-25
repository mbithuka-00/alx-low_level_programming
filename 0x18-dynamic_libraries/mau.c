#include <unistd.h>
#include <string.h>

int rand()
{
    static int mn = -1;

    mn++;
    if (mn <= 5)
    {
        int values[] = {8, 8, 7, 9, 23, 74};
        return values[mn];
    }
    return mn * mn % 30000;
}

