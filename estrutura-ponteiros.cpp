#include <iostream>
using namespace std;
//Estruturas usando ponteiros;

struct alunos{
	char nome[20];
	int idade, nivel;
};
int main(){
	char buffer[4];
	alunos *palunos;
	alunos ealunos[3];
	
	palunos = ealunos;
	
	//cout<<ealunos<<endl;
	
	cout<<"Digite o nome do aluno: ";
	cin>>palunos[0].nome;
	
	cout<<endl<<"Digite a idade do aluno: ";
	cin>>palunos[0].idade;
	
	cout<<palunos[0].nome<<endl;
	cout<<palunos[0].idade<<endl;
	return 0;
}