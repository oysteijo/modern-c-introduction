#include <stdlib.h>
typedef struct point_t 
{
    int x;
    int y;
} point_t;

point_t * makepoint( int x, int y)
{
    point_t *p = malloc( sizeof(point_t) );
    if( p == NULL )
        return NULL;
    p->x = x;
    p->y = y;
    return p;
}
