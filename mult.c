#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);
    int product = a1 * a2;

    printf("Produkt: %d\n", product);

    return 0;
}
