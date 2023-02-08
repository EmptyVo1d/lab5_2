#ifndef LAB5_MYLIBRARY_H
#define LAB5_MYLIBRARY_H \
list *createList();

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *brand();

char *name();

double mileage();

typedef struct car {
    char *brand;
    char *name;
    double mileage;
} car;

car *createArr(int NumEl, car *arr);

void AlgQsort(char *field, char *line, car *arr, int col);

void AlgShaker(char *field, char *line, car *arr, int col);

void PairInsertionSort(char *field, char *line, car *arr, int col);

#endif //LAB5_MYLIBRARY_H