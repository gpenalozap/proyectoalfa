#include<deque>
#include<stdio.h>

int main(){
    int n;
    while(1){
        scanf("%d", &n);
        if (n == 0)
            break;
        std::deque<int> cartas;
        for ( int i= 1; i <= n ; ++i){
            cartas.push_back(i);
        }
        printf("Discarded cards:");
        for ( int i= 0; i < n-1 ; ++i){
            printf(" %d%s",cartas.front(), (i+1 == n-1 ? "" : ","));
            cartas.pop_front();
            cartas.push_back(cartas.front());
            cartas.pop_front();
        }
        printf("\nRemaining card: %d\n",cartas.front());
    }
    return 0;
}
