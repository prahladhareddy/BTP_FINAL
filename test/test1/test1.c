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

int fun(){
    int p = safe1 + sus1;
    int q  = safe2;
    safe2  = sus2+100;
    if(p>q){
        protect = p;
    } else {
        protect = q;
    }
}

int main(){
    sus1 = getrand();
    sus2 = getrand();
    safe1  = getrand();
    safe2  = getrand();

    int x = fun();
    printf("%d",x);
}