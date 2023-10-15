#include <stdio.h>
using namespace std;

int add(int a, int b) {
    if (a>b) return a + b;
    return a-b;
}

int testPointer() {
        int num = 10;

        int *ptr1 = &num;
        int *ptr2;
        int *ptr3=NULL;

        if(ptr1 == 0)
            printf("ptr1: NULL\n");
        else
            printf("ptr1: NOT NULL\n");

        if(ptr2 == 0)
            printf("ptr2: NULL\n");
        else
            printf("ptr2: NOT NULL\n");

        if(ptr3 == 0)
            printf("ptr3: NULL\n");
        else
            printf("ptr3: NOT NULL\n");

        return 0;
}

int testPointer2() {
    int *ptr4=NULL;

    if(ptr4 == 0)
        printf("ptr3: NULL\n");
    else
        printf("ptr3: NOT NULL\n");
    return 3;
}

int huhu() {
    int* i = 0;
        int x = (*i);
        return x;
}

int anhlam() {
    int* p = NULL;
    *p = 10;
    return 1;
}
