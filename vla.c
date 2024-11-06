#include <stdio.h>
void create_and_process_array( int size ){
    float array[size];
    for ( int i = 0; i < size; i++)
        array[i] = (float) i;

    for ( int i = 0; i < size; i++)
        printf("%f\n", array[i]);
}
int main()
{
    int some_size=10;
    create_and_process_array( some_size );
    return some_size;
}
