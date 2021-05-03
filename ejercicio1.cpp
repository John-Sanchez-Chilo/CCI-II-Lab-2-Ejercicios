#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
long long sumaIterativa(int lista[],int n){
    long long con=0;
    for(int i=0;i<n;i++){
        con+=lista[i];
    }
    return con;
}
long long sumaRecursiva(int *lista,int n){
    if(n==1){
        return lista[0];
    }
    return lista[n-1]+sumaRecursiva(lista,n-1);
}
int main(){
    srand(time(NULL));
    long long Base=1000000;
    int *lista=new int[Base];
    for(long long i=0;i<Base;i++){
        lista[i]=1+rand()%5;
    }
    cout<<sumaIterativa(lista,Base)<<endl;
    cout<<sumaRecursiva(lista,Base)<<endl;
    return 0;
}