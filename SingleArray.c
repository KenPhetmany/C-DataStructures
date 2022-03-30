
/*

Single Dimensional Array Structure Example

*/
#include <stdio.h>

int main()

{
    int i = 0;
    int arr[5];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'd';
    for (i = 0; i < 4; i++)
    {
        printf("%c \n", arr[i]);
    }
    return 0;
}
