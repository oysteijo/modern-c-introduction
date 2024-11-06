#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>
typedef struct string_t {
    size_t capacity;
    size_t length;
    char *string;
} string_t;

string_t *string_new( const char str[static 1], size_t cap )
{
    string_t *s = malloc( sizeof( string_t ));
    if ( !s )
        return nullptr;
    size_t len = strlen( str );
    assert( len+1 < cap ); /*  Increase the cap? */
    *s = (string_t){ .length = len, .capacity=cap, .string=strdup(str)};

    if( !s->string ){
        free( s );
        return nullptr; 
    }
    return s;
}
