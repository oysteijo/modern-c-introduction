#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct string_t {
    size_t capacity;
    size_t length;
    char *string;
} string_t;

string_t *string_new( char *str, size_t cap )
{
    string_t *s = malloc( sizeof( string_t ));
    if ( s == NULL )
        return NULL;
    s->capacity = cap;
    s->length = strlen( str ); /* This requiers the string to be NULL-terminated - Hmmm :-( */
    assert( s->length+1 < cap ); /*  Increase the cap? */
    s->string = malloc( (s->length + 1) * sizeof(char) );
    if( s->string == NULL){
        free( s );
        return NULL;
    }
    memcpy( s->string, str, s->length );
    return s;
}
