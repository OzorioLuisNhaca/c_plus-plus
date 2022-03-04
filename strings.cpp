#include <iostream>
using namespace std;

int main(){
	char nome[100];
	
	cout<<"Digite o Seu nome: ";
	cin.getline(nome, 100);
	cout<<"O seu nome e: "<<nome<<endl;
	
	return 0;	
}