#include<cstring>
#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(){
	string cadena;
	cin >> cadena;
	while (cadena != "end"){
		int l = cadena.size();
		int vocales = 0, v = 0, c = 0, error = 0;

		if (cadena[0] == 'a' || cadena[0] == 'e' || cadena[0] == 'i' || cadena[0] == 'o' || cadena[0] == 'u'){
            vocales++;
            v++;
		}
		else{
            c++;
		}

		for (int i = 1 ; i < l ; i++){
            switch(cadena[i]){
                case 'a':
                case 'i':
                case 'u':vocales++;
                         v++;
                         c = 0;
                         if (v == 2 && cadena[i] == cadena[i-1]){
                            error = 1;
                         }
                         if (v == 3)
                            error++;
                         break;
                case 'e':
                case 'o':vocales++;
                         v++;
                         c = 0;
                         if (v == 3)
                            error++;
                         break;
                default: c++;
                         v = 0;
                         if (c == 2 && cadena[i] == cadena[i-1]){
                            error = 1;
                         }
                         if (c == 3)
                            error++;
            }
            if (error)
                break;
		}
        if (vocales == 0 || error == 1 )
            cout<<"<"<<cadena<<">"<<" is not acceptable.\n";
        else
		    cout<<"<"<<cadena<<">"<<" is acceptable.\n";
        cin >> cadena;
	}
	return 0;
}
