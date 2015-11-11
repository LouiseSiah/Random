#ifndef Random_H
#define Random_H

#include <time.h>
                                //NULL in time indicate current time
#define seedRandomGenerator() srand(time(NULL))
#define getRandomNum()        (rand() | (rand() << 16))

#endif // Random_H
