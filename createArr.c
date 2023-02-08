#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyLibrary.h"
#include <math.h>
char *brand() {
    const char alf[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ- ";
    int len = 1 + rand() % (13) + 3;
    char *str = calloc((len + 1), sizeof(char));
    for (int i = 0; i < len; i++) {
        int flag = rand() % (int) (sizeof alf);
        str[i] = alf[flag];
    }
    str[len] = '\0';
    return str;
}

char *name() {
    const char alf1[] = "abcdefghijklmnopqrstuvwxyz";
    const char alf2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *str = calloc(1, sizeof(char));
    int flag = 0;
    int point = 1;
    for (int i = 0; i < 3; i++) {
        int len = rand() % (10) + 1;
        point = point + len;
        char *name1 = calloc(len + 1, sizeof(char));
        for (int j = 0; j < len; j++) {
            if (j == 0) {
                flag = rand() % (int) (sizeof alf2 - 1);
                name1[j] = alf2[flag];
            }
            else {
                flag = rand() % (int) (sizeof alf1 - 1);
                name1[j] = alf1[flag];
            }
        }
        str = realloc(str, (point+1) * sizeof(char));
        str = strcat(str, name1);
        if (i != 2) {
            point++;
            str = realloc(str, (point) * sizeof(char));
            str = strcat(str, " ");
        }
        if (i == 2) str[point] = '\0';
        if (name1 != NULL) free(name1);
    }
    return str;
}

double mileage() {
    double mileage = (rand() * rand() / 10000 + (float) rand() / (float) (RAND_MAX / 100));
    fabs(mileage);
    return mileage;
}

car* createArr(int NumEl, car *arr){
    for(int i = 0; i < NumEl; i++){
        arr = (car *) realloc(arr, sizeof(car) * (NumEl + 1));
        arr[i].brand = brand();
        arr[i].name = name();
        arr[i].mileage = mileage();
    }
    return arr;
}