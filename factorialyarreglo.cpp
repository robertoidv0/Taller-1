#include<stdio.h>
#include<stdlib.h>

#define tam 500

int factorial_rec(int n){
	if(n==1){
		return(1);
		}
	else{
		return(n*factorial_rec(n-1));
	}//algo serio
}

int imprimir(int resultado[],int n){
	printf("\n\nfuncion imprimir: \n\n el arreglo es: ");
    for(int e=0; e<=n-2; e++){
		printf("[%d]->",resultado[e]);
	}
	printf("\n\n");
}

int factorial_it(int n,int resultado[tam]){
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
	int valor=factorial_it(n,resultado);
	int valor2=factorial_rec(n);
    printf("\nel valor iterativo es: %d \n",valor);
    printf("\nel valor recursivo es: %d \n",valor2);
   // printf("\n arreglo es: %d-> %d-> %d-> %d  \n\n",resultado[0],resultado[1],resultado[2],resultado[3]);
    imprimir(resultado,n);
	system("pause");
}
