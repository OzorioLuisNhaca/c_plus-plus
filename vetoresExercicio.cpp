#include <iostream>
using namespace std;
int retornaVetor(int vec[10]){

	
	for (int i = 0; i < 10; i++){
		vec[i] = i;
	}
	
	for(int i = 0; i < 10; i++){
		return vec[i];
	}
}

#define dimensao 10
int main(){
	int vet[10];
	retornaVetor(vet[10]);
	return 0;
}
                  