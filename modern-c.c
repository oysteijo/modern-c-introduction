#include <stdlib.h>
typedef struct point_t 
{
    int x;
    int y;
} point_t;

point_t point_create( int x, int y)
{
    return (point_t){ x, y };
}
