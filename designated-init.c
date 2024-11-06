#include <stdio.h>
#if 0
int main()
{
    int myarray[] = { [4] = -1, -3, [3] = -2 };

    size_t len = sizeof(myarray)/sizeof(myarray[0]); 
    printf("The array contains %ld elements.\n", len);
    for ( size_t i = 0; i < len; i++ )
        printf("Element %ld: %d\n", i, myarray[i] );

    return 0;
}
#endif
struct mystruct {
    int x;
    int y;
    char *str;
};

int main()
{
    struct mystruct temp = { .x=5, .y=4, .str="Hello, world!" };

    printf("x: %d y: %d str: %s\n", temp.x, temp.y, temp.str );
    return 0;
}

