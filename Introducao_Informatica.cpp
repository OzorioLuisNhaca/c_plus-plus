#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 30
#define MAX_T 100
#define MAX_AL 50
//Estruturas
struct aluno{
	int numero, falta;
	char nome[MAX], classi[MAX];
	float mT1, mT2, mT3, mT4, trabalho, exame;
};

struct turma{
	int num, aulas_dadas, num_alunos;
	char prof[MAX];
	aluno alun[MAX_AL];
};


//Prototipos das funcoes
void insereTurma(turma alunos[], int qtd, bool ins);
void listarTurma(bool ins, int qtd, turma alunos[]);
void funcaoMenu(bool &ins, int &qtd, turma alunos[]);
void aulasDadas(turma alunos[], int qtd, bool ins);
void listarTurmaUma(turma alunos[], int qtd, bool in);
void inserirAluno(turma alunos[], int qtd, bool ins);
void insereFaltasClass(turma alunos[], int qtd, bool ins);
void dadosAluno(turma alunos[], int qtd, bool ins);
void eliminarAluno(turma alunos[], int qtd, bool ins);
void classifiFinal(turma alunos[], int qtd, bool ins);

int main(){
	//Declaracao de variaveis
	int qtd;
	turma alunos[MAX];
	bool ins = false;
	//Programa principal
	
	funcaoMenu(ins, qtd, alunos);
	return 0;
}

void funcaoMenu(bool &ins, int &qtd, turma alunos[]){//Funcao para escolha da opcao
	int opc;
	cout<<endl<<"\t\t\t\t\tMenu Principal do aplicativo"<<endl<<endl;
	cout<<"\t************************************************************************************************************\n\n";
	cout<<endl<<"\t\t[1]. Inserir uma turma";
	cout<<endl<<"\t\t[2]. Listar Todas as turma";
	cout<<endl<<"\t\t[3]. Listar uma turma";
	cout<<endl<<"\t\t[4]. Inserir as aulas dadas"; 
	cout<<endl<<"\t\t[5]. Inserir alunos de uma turma";
	cout<<endl<<"\t\t[6]. Mostrar os dados de um aluno";   
	cout<<endl<<"\t\t[7]. Inserir faltas e classificacoes";
	cout<<endl<<"\t\t[8]. Eliminar um aluno";  
	cout<<endl<<"\t\t[9]. Calcular classificacao final do aluno"<<endl;
	cout<<endl<<"\t\t[0]. Sair"<<endl<<endl<<endl;
	cout<<"Escolha a opcao: ";
	cin>>opc;
	system("cls");
	switch (opc){
		case 1:
			ins = true;
			insereTurma(alunos, qtd, ins);
			break;
		case 2:
			listarTurma(ins, qtd, alunos);
			break;
		case 3: 
			listarTurmaUma(alunos, qtd, ins);
			break;
		case 4:
			aulasDadas(alunos, qtd, ins);
			break;
		case 5:
			inserirAluno(alunos, qtd, ins);
			break;
		case 6:
			dadosAluno(alunos, qtd, ins);
			break;
		case 7:
			insereFaltasClass(alunos, qtd, ins);
			break;
		case 8:
			eliminarAluno(alunos, qtd, ins);
			break;
		case 9:
			classifiFinal(alunos, qtd, ins);
		case 0:
			cout<<"SAIU DO APLICATIVO";
			break;
	}
}
void insereTurma(turma alunos[], int qtd, bool ins){//Funcao para inserir turmas;
	int opc, i=0;
	do{
		cout<<"\t\t\t\tCADASTRO DAS TURMAS"<<endl<<endl;
		cout<<"\t\t\t\t\tTurma "<<i+1<<endl;
		alunos[i].num = i+1;
		cout<<"Nome do professor: ";
		cin>>alunos[i].prof;
		cout<<"Numero de alunos na turma: ";
		cin>>alunos[i].num_alunos;
		system("cls");
		
		qtd++;
		i++;
		do{
			cout<<"[1]. CADASTRAR MAIS UMA TURMA"<<endl;
			cout<<"[0]. TERMINAR O CADASTRO"<<endl<<endl;
			cout<<"Escolha a opcao: ";
			cin>>opc;
			system("cls");
		}while(opc != 1  && opc != 0);
	}while(opc != 0);
	
	
	funcaoMenu(ins, qtd, alunos);
}

void listarTurma(bool ins, int qtd, turma alunos[]){
	if (ins == 1){
		cout<<"\t\t\t\tLISTA DAS TURMAS"<<endl<<endl;
		for (int i = 0; i < qtd; i++){
			cout<<"\t\t\t\t\tTurma "<<i+1<<endl<<endl;
			cout<<"Nome do professor: "<<alunos[i].prof<<endl;
			cout<<"Numero de alunos: "<<alunos[i].num_alunos<<endl;
			cout<<"Aulas dadas: "<<alunos[i].aulas_dadas<<endl;
		}
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";
	}
	
	funcaoMenu(ins, qtd, alunos);
}

void aulasDadas(turma alunos[], int qtd, bool ins){//Insere as aulas dadas
	int num;
	if (ins == 1){
		cout<<"\t\t\t\tPainel de Insercao de aulas dadas"<<endl<<endl;
		cout<<"Numero da turma: ";
		cin>>num;
		
		for (int i = 0; i < qtd; i++){
			if(num == alunos[i].num){
				cout<<endl<<"Numero de aulas dadas: ";
				cin>>alunos[i].aulas_dadas;
			}
		}
		system("cls");
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";
	}
	
	funcaoMenu(ins, qtd, alunos);
}

void listarTurmaUma(turma alunos[], int qtd, bool ins){//Lista uma turma
	int num;
	if (ins == 1){
		cout<<"Numero da turma: ";
		cin>>num;
		system("cls");
		cout<<"\t\t\t\t\t\t\tLista de uma turma"<<endl<<endl;
		
		cout<<"\t\t\tNumero da turma: "<<alunos[num-1].num<<endl;
		cout<<"\t\t\tNome do professor: "<<alunos[num-1].prof<<endl;
		cout<<"\t\t\tAulas dadas: "<<alunos[num-1].aulas_dadas<<endl;
		cout<<"\t\t\tNumero de alunos: "<<alunos[num-1].num_alunos<<endl<<endl<<endl;
		
		cout<<"\t\t\t******************************************"<<endl;
		cout<<"\t\t\t| Numero do aluno   |      Nome do Aluno |"<<endl;
		cout<<"\t\t\t******************************************"<<endl;
		for (int i = 0; i < alunos[num-1].num_alunos; i++){
			cout<<"\t\t\t|    "<<alunos[num-1].alun[i].numero<<"              |     "<<alunos[num-1].alun[i].nome<<"               "<<endl;	
		}
		cout<<"\t\t\t******************************************"<<endl;
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";
	}
	
	
	funcaoMenu(ins, qtd, alunos);
}

void inserirAluno(turma alunos[], int qtd, bool ins){//Insere os alunos

	int num;
	if (ins == 1){
		cout<<"Turma: ";
		cin>>num;
		
		for (int i = 0; i < alunos[num-1].num_alunos; i++){
			cout<<"\t\t\t\tCADASTRO DOS ALUNOS"<<endl<<endl;
			cout<<"\t\t\t\t\tALUNO NUMERO -  "<<i+1<<endl;
			alunos[num-1].alun[i].numero = i+1;
			cout<<"Nome do Aluno: ";
			cin>>alunos[num-1].alun[i].nome;
			system("cls");
		}
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";
	}	
	funcaoMenu(ins, qtd, alunos);
}

void insereFaltasClass(turma alunos[], int qtd, bool ins){//Insere as faltas e classificacoes
	int num;
	
	if (ins == 1){
		cout<<"Insira o numero da turma: ";
		cin>>num;
		system("cls");
		for(int i = 0; i < alunos[num-1].num_alunos; i++){
			cout<<"\t\tAluno "<<alunos[num-1].alun[i].nome<<endl<<endl;
			cout<<"Mini_teste 1: ";
			cin>>alunos[num-1].alun[i].mT1;
			cout<<"Mini_teste 2: ";
			cin>>alunos[num-1].alun[i].mT2;
			cout<<"Mini_teste 3: ";
			cin>>alunos[num-1].alun[i].mT3;
			cout<<"Mini_teste 4: ";
			cin>>alunos[num-1].alun[i].mT4;
			cout<<"Nota do Trabalho: ";
			cin>>alunos[num-1].alun[i].trabalho;
			cout<<"Nota do Exame: ";
			cin>>alunos[num-1].alun[i].exame;
			cout<<"Faltas: ";
			cin>>alunos[num-1].alun[i].falta;
			
			system("cls");
		}
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";	
	}
	funcaoMenu(ins, qtd, alunos);
}

void dadosAluno(turma alunos[], int qtd, bool ins){//Mostra os dados dos alunos
	int numT, numA;
	
	if (ins == 1){
		cout<<"Insira o numero da turma: ";
		cin>>numT;
		cout<<"Insira o numero do aluno: ";
		cin>>numA;
		
		if(alunos[numT-1].alun[numA-1].numero == NULL){
			cout<<"Este aluno nao existe";
		}else{
			system("cls");
			cout<<endl<<"\t\t\t\t\tInformacao do Aluno"<<endl<<endl;
			cout<<"\t************************************************************************************************************\n\n";
			cout<<"Numero: "<<alunos[numT-1].alun[numA-1].numero<<endl;
			cout<<"Nome: "<<alunos[numT-1].alun[numA-1].nome<<endl;
			cout<<"Faltas: "<<alunos[numT-1].alun[numA-1].falta<<endl;
			cout<<"Nota do Mini-Teste1: "<<alunos[numT-1].alun[numA-1].mT1<<endl;
			cout<<"Nota do Mini-Teste2: "<<alunos[numT-1].alun[numA-1].mT2<<endl;
			cout<<"Nota do Mini-Teste3: "<<alunos[numT-1].alun[numA-1].mT3<<endl;
			cout<<"Nota do Mini-Teste4: "<<alunos[numT-1].alun[numA-1].mT4<<endl;
			cout<<"Nota do Trabalho: "<<alunos[numT-1].alun[numA-1].trabalho<<endl;
			cout<<"Classificacao: "<<alunos[numT-1].alun[numA-1].classi<<endl;
			cout<<"Nota do Exame: "<<alunos[numT-1].alun[numA-1].exame<<endl;
		}
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";	
	}
	funcaoMenu(ins, qtd, alunos);
}

void eliminarAluno(turma alunos[], int qtd, bool ins){//Esta funcao elimina o aluno
	int numT, numA, aux;
	
	if (ins == 1){
		cout<<"Insira o numero da turma: ";
		cin>>numT;
		cout<<"Insira o numero do aluno: ";
		cin>>numA;
		
		alunos[numT-1].alun[numA-1].numero = NULL;
		alunos[numT-1].alun[numA-1].falta = NULL;
		alunos[numT-1].alun[numA-1].mT1 = NULL;
		alunos[numT-1].alun[numA-1].mT2 = NULL;
		alunos[numT-1].alun[numA-1].mT3 = NULL;
		alunos[numT-1].alun[numA-1].mT4 = NULL;
		alunos[numT-1].alun[numA-1].trabalho = NULL;
		alunos[numT-1].alun[numA-1].exame = NULL;
		
		
		cout<<endl<<"\t\t\t\tALUNO ELIMINADO COM SUCESSO"<<endl<<endl;
	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";	
	}
	funcaoMenu(ins, qtd, alunos);
}

void classifiFinal(turma alunos[], int qtd, bool ins){//Calcula a classificacao final
	int numT, numA, aux;
	float mMT;
	char sit1[30] = "REPROVADO";
	char sit2[30] = "APROVADO";
	float faltas, aulas;
	
	if (ins == 1){
		cout<<"Insira o numero da turma: ";
		cin>>numT;
		cout<<"Insira o numero do aluno: ";
		cin>>numA;
		 faltas = alunos[numT-1].alun[numA-1].falta;
		 aulas = alunos[numT-1].aulas_dadas;
		mMT = 0.1*alunos[numT-1].alun[numA-1].mT1 +  0.1*alunos[numT-1].alun[numA-1].mT2 +  0.1*alunos[numT-1].alun[numA-1].mT3 +  0.1*alunos[numT-1].alun[numA-1].mT4;
		
		cout<<"Media: "<<mMT<<endl<<endl;
		cout<<"Situacao: "<<sit1;
		cout<<"Situacao: "<<faltas/aulas<<endl;
		if(faltas/aulas <= 0.3){
			if (mMT >= 8 && alunos[numT-1].alun[numA-1].trabalho >= 8){
				if ((0.5*mMT + 0.5*alunos[numT-1].alun[numA-1].trabalho)>=9.5){
					for(int i = 0; i < strlen(sit1); i++){
						alunos[numT-1].alun[numA-1].classi[i] = sit1[i];	
					}
				}else{
					for(int i = 0; i < strlen(sit2); i++){
						alunos[numT-1].alun[numA-1].classi[i] = sit2[i];	
					}
				}
			}	
		}else{
			for(int i = 0; i < strlen(sit1); i++){
				alunos[numT-1].alun[numA-1].classi[i] = sit2[i];	
			}
		}
 	}else{
		cout<<"NAO EXISTE NENHUMA TURMA CADASTRADA";
	}
	funcaoMenu(ins, qtd, alunos);
}