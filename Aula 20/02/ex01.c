fgc#include <stdio.h>

int mult(int a, int b){
    if (b == 1) return a;
    else return multi(a, b-1) + a; //FUNÇAO RECURSIVA
}

int main() {
    printf("2x3 = %d"mult(2,3));
    return 0;
}