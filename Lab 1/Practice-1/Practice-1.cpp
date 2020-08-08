#include "math.h"
#include <conio.h>
#include <iostream>

int main()
{
    float spotx;
    float spoty;

    printf("Write X");
    scanf_s("%f", &spotx);
    printf("Write Y\n");
    scanf_s("%f", &spoty);

    if (((0 <= spotx) && (spotx <= 1)) && ((0 <= spoty) && (spoty <= 1))) {

        printf("True/n");

    }
    else if (spotx < 0 && ((spotx + spoty) >= 0)) {

        printf("True/n");

    }
    else if (spoty < 0 && ((spotx + spoty) >= 0)) {

        printf("True/n");
    }
    else {
        printf("False/n");
    }
    _getch();
    return 0;
}

