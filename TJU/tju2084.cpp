#include <stdio.h>

#define PI 3.1415927

int main(){
	int rev;
	float diam, t;
	float per, dis, mph;
	int i = 1;
	while (1){
		scanf("%f %d %f", &diam, &rev, &t);
		if (rev == 0)
			break;
		per = PI * diam;
		dis = (per * rev)/(5280*12);
		mph = (dis *3600)/t;
		printf("Trip #%d: %.2f %.2f\n", i, dis, mph);
		i++;
	}
	return 0;
}
