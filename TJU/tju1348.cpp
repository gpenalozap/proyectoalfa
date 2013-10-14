#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>

using namespace std;

double P[100][2];
int n;
double sum;

void dikjstra(){
    double ax,mini;
    double dist[100];
    bool intree[100];

    memset(intree,0,sizeof(intree));
    for(int i=0;i<100;i++)
        dist[i]=1000000.0;

    int v = 0;
    dist[0] = 0;
    sum = 0;

    while(!intree[v]){
        intree[v]=1;
        sum += dist[v];

        for(int i = 0 ; i < n ; i++){
            if(!intree[i]){
                ax = sqrt(pow(P[v][0]-P[i][0],2)+ pow(P[v][1]-P[i][1],2));
                if(ax < dist[i])
                    dist[i]=ax;
            }
        }

        v = 0;
        mini = 1000000.0;

        for(int i = 0 ; i < n ; i++){
            if(!intree[i]){
                if (dist[i] < mini){
                    v = i;
                    mini = dist[i];
                }
            }
        }

    }

    printf("%.2f\n",sum);
}

int main(){
    int T;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>P[j][0]>>P[j][1];
    }

    dikjstra();
    return 0;
}
