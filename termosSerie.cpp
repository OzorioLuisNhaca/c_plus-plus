#include <iostream>
#include <math.h>
using namespace std;

//Prototipo da funcao;
float termosSerie(int);

int main(){
	//Funcao Principal;
	int term;
	float res, soma;
	cout<<"Quantos termos da serie queres Calcular? ";
	cin>>term;
	
	cout<<endl<<endl;
	
	for(int i = 1; i <= term; i++){
		res = termosSerie(i);
		soma += res;
		if (i != term){
			cout<<res<<" + ";
		}else{
			cout<<res<<" = ";
		}
		
	}
	
	cout<<soma;
	
	return 0;
}

//funcao para calcular os termos;

float termosSerie(int i){
	float res;
	
	res = pow(2, i)/sqrt(i);
	
	return res;
}