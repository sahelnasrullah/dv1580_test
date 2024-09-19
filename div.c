#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    double a1 = atoi(argv[1]);
    double a2 = atoi(argv[2]);

    if (a2 == 0.0) {
        printf("DIV ZERO NOT ALLOWED!\n");
        exit(1);
    }

    double division = a1 / a2;
    printf("Answer: %f\n", division);

    return 0;
}
