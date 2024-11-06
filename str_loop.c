#include <stdlib.h>
#include <stdio.h>

#define STR_ARRAY(...) (char*[]){__VA_ARGS__,NULL}

int main( int argc, char *argv[])
{
    for ( char **str = STR_ARRAY("Hello", "World", "This", "is", "argv[0]", argv[0]) ; *str; str++ ){
        printf("%s\n", *str);
    }
    return 0;
}

