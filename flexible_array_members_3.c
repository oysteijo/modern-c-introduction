#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct string_t {
    size_t capacity;
    size_t length;
    char string[];
} string_t;

string_t *string_new( const char str[static 1], size_t cap )
{
    size_t len = strlen( str );
    assert( len+1 < cap ); /*  Increase the cap? */
    string_t *s = malloc( sizeof( string_t ) + (len+1) );
    if ( s ) {
        *s = (string_t){ .length = len, .capacity=cap };
        memcpy( s->string, str, len+1);
    }
    return s;
}
