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

long fun(){
    long p = getrand();
    long q = getrand();
    while(p<q){
        safe1 += safe2;
        p+=1;
        safe2 += sus1;
    }
    protect = safe1;
}

long main(){
    sus1 = getrand();
    sus2 = getrand();
    safe1  = getrand();
    safe2  = getrand();

    long x = fun();
    printf("%ld",x);
}