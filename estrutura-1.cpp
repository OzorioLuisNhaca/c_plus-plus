#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

#define MAX 20
struct alunos{
	char nome[MAX] = "Ozorio";
	int idade, senha;
	float mediaT;
	
};

int main(){
	alunos cadastro[10];
	int opc, num, sen, cont = 0;
	bool res = false;
	
	do{
		cout<<"Escolha a accao que quer realizar "<<endl<<endl;
		cout<<"[1]. Cadastrar alunos; "<<endl;
		cout<<"[2]. Consultar registro do aluno; "<<endl;
		cout<<"[0]. Sair;"<<endl;
		cin>>opc;
		system("cls");
		switch(opc){
			case 1:
				cout<<"Numero de alunos na turma: ";
				cin>>num;
				system("cls");
				for (int i = 0; i < num; i++){
					cout<<"Nome do aluno: ";
					cin>>cadastro[i].nome;
					cout<<endl<<"Idade do aluno: ";
					cin>>cadastro[i].idade;
					cout<<endl<<"Senha do aluno: ";
					cin>>cadastro[i].senha;
					cout<<endl<<"Media do aluno: ";
					cin>>cadastro[i].mediaT;
					
					system("cls");
				}
			break;
			
			case 2: 
				cout<<"Digite a senha do aluno: ";
				cin>>sen;
				system("cls");
				
				for (int i = 0; i < num; i++){
					if (sen == cadastro[i].senha){
						cout<<"Dados encontrados com Sucesso"<<endl;
						cout<<"Nome: "<<cadastro[i].nome<<endl;
						cout<<"Idade: "<<cadastro[i].idade<<endl;
						cout<<"Senha: "<<cadastro[i].senha<<endl;
						cout<<"Media do aluno: "<<cadastro[i].mediaT<<endl<<endl;
						
						cont = 1;
					}
				}
				
				if (cont == 0){
					cout<<"Nenhu resultado encontrado."<<endl<<endl;
				}
				
			break;
			
			case 0: 
				res = true;
		}
		cont = 0;
	}while (res == false);
	cout<<"Saiu do sistema!";
	return 0;
}