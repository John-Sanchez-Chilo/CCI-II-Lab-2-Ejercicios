#include <iostream>
#include <string.h>
using namespace std;
void swap_string(string &n,string &m){
    string apoyo=n;
    n=m;
    m=apoyo;
}

void burbujaString(string lista[],int n){
    string aux;
    for(int i=0; i<n; i++){
	for(int j=0; j<n-i; j++){
	    if(lista[j] > lista[j+1]){
            swap_string(lista[j],lista[j+1]);
		}
	}
}
}
int main(){
    int base=5;
    string lista[]={"fdf","asd","das","asdsd","dfd",};
    cout<<"Antes"<<endl;
    for(int i=0;i<base;i++){
        cout<<lista[i]<<endl;
    }
    burbujaString(lista,base);
    cout<<"Despues"<<endl;
    for(int i=0;i<base;i++){
        cout<<lista[i]<<endl;
    }
    return 0;
}