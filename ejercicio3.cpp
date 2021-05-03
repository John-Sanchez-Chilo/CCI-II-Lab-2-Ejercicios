#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void printLista(int lista[],int n){
    for(int i=0;i<n;i++){
        cout<<lista[i]<<endl;
    }
}

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main(){
    srand(time(NULL));
    long long Base=1000000;
    int *lista=new int[Base];
    for(long long i=0;i<Base;i++){
        lista[i]=rand()%5;
    }
    //printLista(lista,Base);
    quickSort(lista,0,Base);
    //printLista(lista,Base);
    return 0;
}