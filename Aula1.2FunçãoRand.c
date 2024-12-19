#include <stdio.h>

int main(){
	
	float vetor[5];
	int i=0;

	srand (time(NULL));
	
	for(i=0; i<=5; i++){
		vetor[i] = rand();
	}
	for(i=0; i<=5; i++){
		printf("\nVetor %d: ", i+1);
		printf("%.2f", vetor[i]);
	}
	
	return 0; 
}
