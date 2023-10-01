#include <stdio.h>
#define tamanhovetor 6
#include funcs.h

int main() {

    double vetordenumeros[tamanhovetor] = {1.00, 2.00, 3.00, 4.00, 5.00, 6.00};

    soma1 (vetordenumeros, tamanhovetor);
    soma2 (vetordenumeros, tamanhovetor);
    printvetor (vetordenumeros, tamanhovetor);

    return 0;
}
