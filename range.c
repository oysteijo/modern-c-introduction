#include <stdio.h>
int main(){
#if OLD_STYLE
    int my_array[10];
    for( int i = 0; i < 10; i++)
        my_array[i] = 5;
#endif
    int my_array[10] = { [0 ... 9] = 5 };
    printf("elem idx 5: %d\n", my_array[5]);
    return 0;
}
