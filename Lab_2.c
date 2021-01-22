//
// Created by Дмитрий Ярошевич on 1/19/21.
//
#include <stdlib.h>
#include <stdio.h>

void squareMas(double *massive, int valueNumbers);

int main() {

    int numberOfElements;


    puts("Write a value of number you want input");
    scanf("%d", &numberOfElements);

    double *massive = (double *) malloc(numberOfElements * sizeof(double));

    for (int ctr = 0; ctr < numberOfElements; ctr++) {
        printf("Write a %d element", ctr + 1);
        scanf("%lf", massive + ctr);
    }

    squareMas(massive,numberOfElements);

    free(massive);

    return 0;
}

void squareMas(double *massive, int valueNumbers){

    int i,j;
    int sumJI;

    for (i = 0; i < valueNumbers; i++,putchar('\n')) {
        for (j = 0; j < valueNumbers; j++) {
            sumJI = i + j;
            if (sumJI >= valueNumbers) {
                sumJI = sumJI - valueNumbers;
            }
            printf(" %.1lf ", massive[sumJI]);
        }
    }
}
