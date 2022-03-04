#include <iostream>
using namespace std;
//Uniao
union aluno{
	int idade;
	char nome[20];
};

struct exemplo{
	union{ //Uniao anonima;
		int idade;
		char nome[20];	
	};
}teste;
int main(){
	aluno carac;
	exemplo teste;
	//cout<<"Digite a idade do aluno: ";
	//cin>>carac.idade;
	cout<<"Digite o nome do aluno: ";
	cin>>teste.nome;
	
	cout<<"Nome do aluno: "<<teste.nome<<endl;
	//cout<<"Idade do aluno: "<<carac.idade<<endl;
	
	return 0;
}