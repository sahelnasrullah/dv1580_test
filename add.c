#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);

    int sum = a1 + a2;
    
    printf("Sum: %d\n", sum);

    return 0;
}