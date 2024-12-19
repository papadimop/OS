#include <stdio.h>

int main(void){
    int x = 10;
    int *p;

    p = &x;

    printf("value of x: %d\n", x);
    printf("Adress of x: %p\n", (void*)&x);
    printf("value pointed to by p: %d\n", *p);

    *p = 20;
    printf("New value of x: %d\n", x);


    return 0;
}
