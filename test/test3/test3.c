#include <stdio.h>
#include <stdlib.h>

long sus1;
long sus2;

long safe1;
long safe2;

long protect = 100;

long getrand(){
    return rand();
}

long fun1(long x){
    long p = getrand();
    long q = getrand();
    p = p + q + x;
    sus2 = p+x;
}

long fun2(long x){
    long p;
    long q;
    if (x>100){
        p = getrand();
        q = getrand();
    }
    protect = p + q + x;
}

long fun(){
    fun1(sus1);
    fun2(safe1);
}

long main(){
    sus1 = getrand();
    sus2 = getrand();
    safe1  = getrand();
    safe2  = getrand();

    long x = fun();
    printf("%ld",x);
}