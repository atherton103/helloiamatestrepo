#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("boi enter some numbers here: ");
    scanf("%f", &x); // this is the input, Apparently %d formats an integer or so
    y = (x+2)/(x-1);
    printf("y: %f\n", y);

    return 0;


}
