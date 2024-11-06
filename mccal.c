#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int (*operator)( int a, int b );

#define DEFINE_FUNC(op,symbol) int op( int a, int b ) {return a symbol b;}

DEFINE_FUNC(add,+)
DEFINE_FUNC(sub,-)
DEFINE_FUNC(mul,*)
DEFINE_FUNC(divv,/)
DEFINE_FUNC(mod,%)
#undef DEFINE_FUNC
#define LEGAL_OPERATORS "+-*/%"

int main( int argc, char *argv[] )
{
    if ( argc != 4 ){
        fprintf( stderr, "usage: %s <operand> <operator> <operand>\n\n"
                "where <operand> in an integer number\n"
                " and <operator> is one of the arithmetic operators '%s'\n", argv[0], LEGAL_OPERATORS );
        return -1;
    }
    
    int a = atoi( argv[1] );
    int b = atoi( argv[3] );

    const char op = argv[2][0];
    if( strchr( LEGAL_OPERATORS, op ) == NULL ){
        fprintf(stderr, "Invalid operator: %c\n", op);
        return -1;
    }

    printf("%d %c %d = %d\n", a, op, b,
           (operator[]){ ['+'] = add, ['-'] = sub, ['*'] = mul, ['/'] = divv, ['%'] = mod }[(int)op](a,b) );
    return 0;
}
