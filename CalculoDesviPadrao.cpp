#include <iostream>
#include <math.h>
using namespace std;
//Desvio Padrao;

//Prototipo da funcao media;

float funcaoMedia(int soma, int cont);

int qtd;
int main(){
	cout<<"Quantos numeros queres calcular o seu desvio padrao: ";
	cin>>qtd;
	
	int valores[qtd], soma, cont;
	float media, somaL;
	double desvioPadrao;
	
	for (int i = 0; i < qtd; i++){
		cout<<"valores["<<i<<"] = ";
		cin>>valores[i];
		
		soma += valores[i];
		
		cont++;
	}
	
	media = funcaoMedia(soma, cont);
	
	cout<<endl<<"Media = "<<media<<endl;
	
	for (int i = 0; i < qtd; i++){
		somaL += (valores[i] - media);
	}
	
	desvioPadrao = sqrt(somaL/(cont - 1));
	
	cout<<endl<<"O desvio padrao dos numeros inseridos eh: "<<desvioPadrao;
	return 0;
}

float funcaoMedia(int soma, int cont){
	int media;
	
	media = soma/cont;
	
	return media;
}