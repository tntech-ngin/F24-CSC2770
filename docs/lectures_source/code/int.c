#include<stdio.h>

typedef struct {
int a[2];
double d;
} struct_t;

double fun(int i) {
volatile struct_t s;
s.d = 3.14;
s.a[i] = 1073741824; /* Possibly out of bounds */
return s.d;
}


int main() {
    int i = 0;
    for(i = 0; i < 6; i++) {
        printf("fun(%d) is %f\n", i, fun(i));
    }
    return 0;
}

