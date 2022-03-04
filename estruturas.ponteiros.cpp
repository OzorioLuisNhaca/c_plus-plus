#include <iostream>
using namespace std;

struct alunos{
	char nome[50];
	int idade, nivel;
};
int main(){
	char buffer[50];
	alunos *p_alunos = NULL;
	alunos alu;
	
	p_alunos = &alu;
	
	cout<<"Digite o nome do aluno: ";
	cin.getline(p_alunos->nome, 50);
	
	cout<<endl<<"Digite a idade do aluno: ";
	cin.getline(buffer, 50);
	p_alunos->idade = atoi(buffer);
	
	cout<<endl<<"Digite o nivel do aluno: ";
	cin.getline(buffer, 50);
	p_alunos->nivel = atoi(buffer);
	
	cout<<"O nome do aluno e: "<<p_alunos->nome<<endl;
	cout<<endl<<"A idade do aluno e: "<<p_alunos->idade<<endl;
	cout<<"O nivel do aluno e: "<<p_alunos->nivel<<endl;
	return 0;
}