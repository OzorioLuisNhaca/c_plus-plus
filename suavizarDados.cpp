#include <iostream>
#include <cstdlib> //directiva para a limpacao da tela;
using namespace std;

double suavizarNumero(double, double, double, int, int);

int n, cont; 
int main(){
	//Suavizacao
	cout<<"Numero de ensaios a realizar: ";
	cin>>n;
	
	system("cls");
	
	int dado[n];
	double dados[n];
	
	for (int i = 0; i < n; i++){
		cont++;
		cout<<"dado["<<cont<<"] = ";
		cin>>dado[i];
	}
	
	system("cls");
	
	cont = 0;
	cout<<"                     Dados nao suavizados"<<endl<<endl;
	for (int i = 0; i < n; i++){
		cont++;
		cout<<endl<<"dado["<<cont<<"] = "<<dado[i];
	}
	
	cont = 0;
	
	cout<<"                        Dados suavizados"<<endl<<endl;
	for (int i = 0; i < n; i++){
			cont++;
			dados[i] = suavizarNumero(dado[i], dado[i+1], dado[i-1], cont, n);
			cout<<endl<<"dado["<<cont<<"] = "<<dados[i];
	}
	return 0;
}

//funcao para suavizacao de dados

double suavizarNumero(double n1, double n2, double n3, int i, int num){
	double dado;
	if (i == 1){
		dado = (n1 + n2)/2;
	}else{
		if (i == num){
			dado = (n1 + n3)/2;
		}else{
			dado = (n1 + n2 + n3)/3;
		}
	}
	
	return dado;
}
	