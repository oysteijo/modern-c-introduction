#include <stdio.h>
#include <string.h>
int main(){
    float my_array[10];
    memset( my_array, 0, 10 * sizeof(float));

    /* float my_array[10] = { 0 }; */
    struct { int x; int y; char *str; } my_struct = { 0 };

    printf("x: %d, y: %d, str: %s\n", my_struct.x, my_struct.y, my_struct.str );
}

