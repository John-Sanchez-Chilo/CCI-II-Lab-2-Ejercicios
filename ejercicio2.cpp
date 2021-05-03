#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void invertirElementosIterativa(int lista[],int n){
    int apoyo;
    for(int i=0;i<n/2;i++){
        apoyo=lista[i];
        lista[i]=lista[n-i-1];
        lista[n-i-1]=apoyo;
    }
}
void invertirElementosRecursiva(int *lista,long long n,long long m){
    if(n/2==(m+1)){
        int apoyo=lista[m];
        lista[m]=lista[n-m-1];
        lista[n-m-1]=apoyo;
    }
    else{
        int apoyo=lista[m];
        lista[m]=lista[n-m-1];
        lista[n-m-1]=apoyo;
        invertirElementosRecursiva(lista,n,m+1);
    }
}
int main(){
    srand(time(NULL));
    long long Base=1000000;
    int *lista=new int[Base];
    for(int i=0;i<Base;i++){
        lista[i]=rand()%10;
    }
    invertirElementosIterativa(lista,Base);
    invertirElementosRecursiva(lista,Base,0);
    return 0;
}