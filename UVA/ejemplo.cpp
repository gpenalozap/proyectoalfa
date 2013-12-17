#include <stdio.h>
#include <algorithm>

bool criterio(int a, int b){
    if ( a%2 == b%2)
        return a<b;
    return (a%2==0);
}

int main(){
    int arr[5]={0,4,5,3,2};
    std::sort(&arr[0], &arr[5]);
    for (int i = 0; i < 5 ; i++)
        printf("%d ", arr[i]);
    printf("\n");
    std::sort(&arr[0], &arr[5], criterio);
    for (int i = 0; i < 5 ; i++)
        printf("%d ", arr[i]);
    return 0;
}
