#include <iostream>
using namespace std;
//Prototipos da funcoes;

int somaNota(int juiz, int &soma); //funcao para somar os numeros;
double mediaNota(double soma, double cont); //funcao para calcular a media;
double perMaior(double cont, double contP);

int main(){
	int juiz[5], cont, soma, pior = 9, melhor = 0, contP = 0, pos;
	double media, per;

	
	for (int i = 0; i < 5; i++){
		cont++;
		cout<<"Nota do juiz["<<cont<<"] = ";
		cin>>juiz[i];	
		soma = somaNota(juiz[i], soma);	
		
		if (juiz[i] > melhor){
			melhor = juiz[i];
			pos = cont;
		}else{
			if (juiz[i] < pior){
				pior = juiz[i];
			}
		}
	
		if (juiz[i] >= 8){
			contP += 1;
		}else{
			contP += 0;
		}
	}
	
	per = perMaior(cont, contP);
	
	media = mediaNota(soma, cont);
	
	cout<<endl<<"A media obtida e: "<<media<<endl;
	cout<<endl<<"A melhor nota obtida foi "<<melhor<<endl;
	cout<<"A pior nota obtida foi "<<pior<<endl;
	cout<<"A percentagem das notas maiores ou iguais a 8 e de: "<<per<<"%"<<endl;
	cout<<"A melhor nota foi atribuida pelo juiz numero "<<pos;
	
	return 0;
}

double perMaior(double cont, double contP){
	double perc = 0;
	
	perc = (contP/cont)*100;
	
	return perc;
}

int somaNota(int juiz, int &soma){
	soma += juiz;
	return soma;
}

double mediaNota(double soma, double cont){
	double media;
	media = soma/cont;
	
	return media;
}