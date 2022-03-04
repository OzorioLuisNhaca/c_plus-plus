#include <iostream>
#include <cstdlib>
using namespace std;


int contaPalavra(char string[]);
#define MAX 100
int main(){
	char strin[MAX] = "Ozorio Nhaca";
	cout<<"Digite uma frase: ";
	cin.getline(strin, MAX);
	
	cout<<"A String tem "<<contaPalavra(strin)<<" palavras.";
	return 0;
}

int contaPalavra(char string[]){
	int c = 0, cont = 1, conta = 0;
	for (int i = 0; i < strlen(string); i++){
		if (string[i] == ' ' && c > 1){
			cont++;
			c = 0;
		}else{
			c++;
		}
		
		conta++;
	}
	
	if (conta <= 1){
		cont = 0;
	}
	
	return cont;
}