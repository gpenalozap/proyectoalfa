#include <iostream>
#include <stdio.h>

int main(){
    int i;
    float total = 0;
    float n;
    for ( i = 0 ; i < 12 ; i++){
        std::cin >> n;
        total = total + n;
    }
    total = total / 12;
    printf("$%.2f",total);
}
