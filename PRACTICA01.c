#include <stdio.h>
#include <stdlib.h>

//ordena el vector de menor a mayor con metodo de la burbúja

int main() {
	int arreglo[20]={6,2,9,6,4,65,87,21,45,90,7,31,53,7,5,2,3,8,4,12}; //declaracion del vector de 20 elementos
	int i, j, aux;
	for(i=0; i<20; i++){
		for(j=1; j<20; j++){
			if(arreglo[j]<arreglo[j-1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j-1];
				arreglo[j-1]=aux;
			}
		}
	}
	
	for(i=0; i<20; i++){
		printf("%d\n", arreglo[i]);
	}
	return 0;
}
