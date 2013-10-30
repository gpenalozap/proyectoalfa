#include<stack>
#include<cstdio>
#include<vector>

using namespace std;

struct nodo{
	int posicion;
	int deuda;
	
	nodo(int a, int b){
		posicion = a;
		deuda = b;
	}	
};

int main(){
	stack<nodo> pila;
	int dinero, distancia, i;
	int n, m;
	scanf("%d", &n);
	distancia = 0;
	i = 0;
	while(n--){
		scanf("%d", &m);
		distancia++;
		i++;
		if (m > 0)
			dinero += m;
		else
			pila.push(nodo(i,m));
		
		if (!pila.empty()){
			nodo aux = pila.top();
			if (dinero >= aux.deuda){
				
			}
		}
			
	}
	printf("%d\n", distancia);
	return 0;
}
