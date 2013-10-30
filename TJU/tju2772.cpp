#include <stdio.h>

int main(){
	int c;
	int x[4], y[4];
	scanf("%d", &c);
	while(c--){
		scanf("%d %d %d %d", &x[0], &y[0], &x[1],&y[1]);
		scanf("%d %d %d %d", &x[2], &y[2], &x[3],&y[3]);
		if (x[0]+x[1]==x[3]+x[2] && y[0]+y[1]==y[3]+y[2])
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
