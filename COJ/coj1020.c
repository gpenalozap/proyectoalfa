#include <stdio.h>

int main(){
	int n, k;
	int win[101];
	int lose[101];
	int jugadorA, jugadorB, i;
	char jugadaA[11], jugadaB[11];
	while (scanf("%d %d", &n, &k) == 2){
		/*Limpiamos los jugadores*/
		for ( i = 1 ; i <= n ; i++){
			win[i] = 0;
			lose[i] = 0;
		}
		/*Leemos las jugadas y las procesamos*/
		for (i = 0 ; i < k ; i++){
			scanf("%d %s %d %s", &jugadorA, &jugadaA, &jugadorB, &jugadaB);
			if (jugadaA[0] == jugadaB[0])
				continue;
			else{
				if (jugadaA[0] == 'r'){
					if (jugadaB[0] == 'p'){
						win[jugadorB]++;
						lose[jugadorA]++;
					}
					else{
						win[jugadorA]++;
						lose[jugadorB]++;
					}
				}
				if (jugadaA[0] == 's'){
					if (jugadaB[0] == 'r'){
						win[jugadorB]++;
						lose[jugadorA]++;
					}
					else{
						win[jugadorA]++;
						lose[jugadorB]++;
					}
				}
				if (jugadaA[0] == 'p'){
					if (jugadaB[0] == 's'){
						win[jugadorB]++;
						lose[jugadorA]++;
					}
					else{
						win[jugadorA]++;
						lose[jugadorB]++;
					}
				}
			}
		}
		for ( i = 1 ; i <= n ; i++){
			if ( (win[i]+lose[i]) > 0)
				printf("%.3f\n", (win[i]*1.0)/(win[i]+lose[i]) );
			else
                if (win[i] == 0 & lose[i] == 0)
                    printf("-\n");
                else
                    printf("0.000\n");
		}
		printf("\n");
	}
	return 0;
}

