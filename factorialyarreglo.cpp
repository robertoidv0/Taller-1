#include<stdio.h>
#include<stdlib.h>

#define tam 500

/*int factorial(int n){
	if(n==1){
		return(1);
		}
	else{
		return(n*factorial(n-1));
	}
}*/

int imprimir(int resultado[]){
	printf("\n\nfuncion imprimir: \n\n el arreglo es: ");
    for(int e=0;e<=tam-2; e++){
		printf("[%d]->",resultado[e]);
	}
	printf("\n\n");
}

int factorial(int n,int resultado[tam]){
	int factorial=1;
	int pos=0;
	for(int i=2;i<=n;i++){
		factorial=factorial*i;
		resultado[pos]=factorial;
	//	printf("posicion es %d\n",pos);
	//	printf("el valor de resultado es: %d \n\n",factorial);
		pos++;

	}
//	for(int e=0;e<=n-2;e++){
//            printf("[%d]",resultado[e]);
//		}
	return (factorial);
	return (resultado[factorial]);
}
int main(){
	int n;
	printf("valor n: ");
	scanf("%i",&n);
//	int tam=n;
	int resultado[tam];
	int valor=factorial(n,resultado);
    printf("\nel valor es: %d \n",valor);
   // printf("\n arreglo es: %d-> %d-> %d-> %d  \n\n",resultado[0],resultado[1],resultado[2],resultado[3]);
    //imprimir(resultado);
	system("pause");
}
