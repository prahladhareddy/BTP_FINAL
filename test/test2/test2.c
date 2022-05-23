#include <stdio.h>
#include <stdlib.h>

int sus1;
int sus2;

int safe1;
int safe2;

int protect = 100;

int getrand(){
    return rand();
}

int fun1(int x){
    x = x*x + 10000;
    x += safe1;
    safe1 += safe2;
    return x;
}

int fun(){
    sus2 = sus1 + safe2;
    int x = safe1 + sus2;
    int y = fun1(x);
    protect = y;
}

int main(){
    sus1 = getrand();
    sus2 = getrand();
    safe1  = getrand();
    safe2  = getrand();

    int x = fun();
    printf("%d",x);
}