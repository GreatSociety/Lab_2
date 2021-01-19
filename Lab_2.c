//
// Created by Great_Society on 14.11.2020.
//
//Даны действительные числа a1,...,an. Получить квадратную матрицу
//порядка n следующего вида:
//a1 a2 a3 ... an-2 an-1 an
//a2 a3 a4 ... an-1 an   a1
//a3 a4 a5 ... an   a1   a2
//. . . . . . . . . . . . ...
//an a1 a2 ... an-3 an-2 an-1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    time_t timeForSees;
    srand(time(&timeForSees));
    int numberOfElements; //numberOfElements = 10;
    int j,i;
    int sumJI;
    printf("How many elements you want?\n");
    scanf("%d",&numberOfElements);
    double RandomMatrix[numberOfElements];  //double RandomMatrix [10] = {1,2,3,4,5,6,7,8,9,10} - Это до 9 индекса;
    double squareMatrix[numberOfElements][numberOfElements];
    for (int x = 0; x < numberOfElements; x++){
        RandomMatrix[x]= ((rand()%(1000 - (-1000)+1) + (-1000))/ 10.0); //(High - low + 1) + low
    }

    for (int x = 0; x< numberOfElements; x++){
        printf(" %.1lf is [%d] ", RandomMatrix[x], x);
    }

    for (i = 0; i < numberOfElements; i++){
        for(j = 0; j < numberOfElements; j++){
            sumJI = i + j;
            if(sumJI >= numberOfElements){
                sumJI = sumJI - numberOfElements;
            }
            squareMatrix[i][j] = RandomMatrix[sumJI];
        }
    }
    putchar('\n');

    for (int n = 0; n < numberOfElements; n++, putchar('\n')){
        printf("%d : ", n);
        for (int m=0; m < numberOfElements; m++){
            printf (" %.1lf   ", squareMatrix[n][m]);
        }
    }

    return 0;
}
