#include <stdio.h>
#define tamanhovetor 6

void soma1 (double array[], int n){
    for (int i = 0; i<n; i++){
        array[i] = array[i] + 1;
    }
    return 0;
}

void soma2 (double array[], int n){
    for (int i = 0; i<n; i++){
        array[i] = array[i] + 2;
    }
    return 0;
}

void printvetor (double array[], int n){
    for (int i = 0; i<n; i++){
        printf ("%lf ", array[i]);
    }
    return 0;
}

int main() {

    double vetordenumeros[tamanhovetor] = {1.00, 2.00, 3.00, 4.00, 5.00, 6.00};

    soma1 (vetordenumeros, tamanhovetor);
    soma2 (vetordenumeros, tamanhovetor);
    printvetor (vetordenumeros, tamanhovetor);

    return 0;
}
