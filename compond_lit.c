#include <stdio.h>
#include <stdbool.h>
typedef struct mystruct {
    int counter;
    struct { float f; bool b;} ss;
} mystruct_t;

int print_mystruct( const mystruct_t *s)
{
    return printf("struct: counter=%d float=%5.4f, bool=%s\n", s->counter, s->ss.f, s->ss.b ? "true" : "false" );
}
int main( )
{
    mystruct_t ms = { .counter=1, .ss.f=0.1f, .ss.b = true };
    print_mystruct( &ms );
    print_mystruct( &(mystruct_t){ .counter=2, .ss.f=0.2f, .ss.b = true });
    return 0;
}
