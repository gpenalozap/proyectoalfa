#include<cstdio>
#include<iostream>
#include<string>
#include<bitset>

using namespace std;

bitset<400000> bn;

int main(){
    string hx;
    int bits;
    int i, aux;
    getline(cin,hx);
    if (hx == "0"){
        printf("0\n");
        return 0;
    }
    aux = hx.size();
    bits = aux*4;
    bn.reset();
    aux--;
    for (i = 0 ; i < bits ; i+=4){
          switch(hx[aux]){
            case '0':   break;
            case '1':
                        bn[i]=1;;
                        break;
            case '2':
                        bn[i+1]=1;
                        break;
            case '3':
                        bn[i]=1;
                        bn[i+1]=1;
                        break;
            case '4':
                        bn[i+2]=1;
                        break;
            case '5':
                        bn[i]=1;
                        bn[i+2]=1;
                        break;
            case '6':
                        bn[i+1]=1;
                        bn[i+2]=1;
                        break;
            case '7':
                        bn[i]=1;
                        bn[i+1]=1;
                        bn[i+2]=1;
                        break;
            case '8':
                        bn[i+3]=1;
                        break;
            case '9':
                        bn[i]=1;
                        bn[i+3]=1;
                        break;
            case 'A':
                        bn[i+1]=1;
                        bn[i+3]=1;
                        break;
            case 'B':
                        bn[i]=1;
                        bn[i+1]=1;
                        bn[i+3]=1;
                        break;
            case 'C':
                        bn[i+2]=1;
                        bn[i+3]=1;
                        break;
            case 'D':
                        bn[i]=1;
                        bn[i+2]=1;
                        bn[i+3]=1;
                        break;
            case 'E':
                        bn[i+1]=1;
                        bn[i+2]=1;
                        bn[i+3]=1;
                        break;
            case 'F':
                        bn[i+0]=1;
                        bn[i+1]=1;
                        bn[i+2]=1;
                        bn[i+3]=1;
                        break;
        }
        aux--;
    }
    while (bits%3 != 0)
        bits++;

    int flag = 0;
    for(i = bits-1 ; i>0 ; i=i-3){
        aux =4*bn[i]+2*bn[i-1]+bn[i-2];
        if (aux != 0)
            flag++;
        if (flag)
            cout<<aux;
    }
    printf("\n");
    return 0;
}
