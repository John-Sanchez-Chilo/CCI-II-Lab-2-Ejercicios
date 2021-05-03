#include <iostream>
using namespace std;
void concatenar(char *a,int n,char *b,int m){
    for(int i=0;i<m;i++){
        b[i+n]=a[i];
    }
}
int main(){
    char a[50]="world";
    char b[50]="Hello";
    int n=5;//longitud de a
    int m=5;//longitud de b
    concatenar(a,n,b,m);
    cout<<b;
    return 0;
}