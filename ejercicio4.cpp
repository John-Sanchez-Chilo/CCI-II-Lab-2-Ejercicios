#include <iostream>
using namespace std;
int longitudCadenaIterativa(string cadena){
    int i=0;
    while (cadena[i]!='\0'){
        i++;
    }
    return i;
}
int longitudCadenaRecursiva(string cadena,int n){
    if(cadena[n]=='\0'){
        return 0;
    }
    return 1+longitudCadenaRecursiva(cadena,n+1);
}
int main(){
    string name="hasta";
    cout<<longitudCadenaIterativa(name)<<endl;
    cout<<longitudCadenaRecursiva(name,0)<<endl;
    return 0;
}