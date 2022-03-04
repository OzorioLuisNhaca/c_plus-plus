#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//Constantes
#define MAX 20
#define NUM_NOM 11
#define N 1
//Prototipos das Funcoes
void nomeJogo(); //Nome do jogo

void menuJogo(int &opca); //Prototipo da funcao para o menu;

void cadastroJogadores(char nome1[], char nome2[]); //Cadastro dos jogadores;

void dadosComputador(char frutas[NUM_NOM][MAX], int num);

bool pesquisaString(char nom[], char fruta[][MAX], int num);

int main() {
	char nome[MAX], aux1[MAX], aux2[MAX]; // Vai guardar o nome digitado;
	char nomeAd[MAX], no1[MAX], no2[MAX] = "Computador"; //Vai guardar o nome da fruta a se adivinhar
	char frutas[NUM_NOM][MAX] = {"Banana", "Maracuja", "Manga", "Maca", "Perabacate",
								"Laranja", "Massala", "Mafura", "Peramaca", "Caju" 
								};
	
	char no[N][MAX];						
	char comp[MAX] = "Computador";
	char let, res;
	bool cp, pesq;
	int opc = 0, computa = 0, n = 0;
	int cont = 0, conta = 0, cot, nu = 0;
	cadastroJogadores(no1, no2);
	system("cls");
	strcpy(aux1, no1);
	strcpy(aux2, no2);
	strcpy(no[0], no2); 
	
	//Comparacoes de Strings;
	pesq = pesquisaString(nome, frutas, NUM_NOM);
	cp = pesquisaString(comp, no, N);
	system("cls");
	//dadosComputador(frutas, 2);
	do{	
		nomeJogo();
		cout<<"\t\t\t\t"<<aux1<<" Joga agora"<<endl<<endl;
		
		if (cp != 1){
			cout<<"Digite o nome da fruta: ";
			cin>>nome;	
		}else{ //Ainda sera programado devidamente
			res = 'n';
			break;
		}

			
		for (int i = 0; i < strlen(nome); i++){
			nomeAd[i] = '_';
		}
		
		system("cls");
		cont = strlen(nome)*2;
		
		for (int i = 0; i < cont; i++){
			cout<<endl<<"\t\t\t\t\tRestaram "<<cont<<" chances!"<<endl<<endl;
			//cout<<no[0];
			cout<<"\t\t\t\t\t";
			for (int i = 0; i < strlen(nome); i++) {
				cout<<nomeAd[i];
				cout<<" ";
			}
			cout<<endl<<endl;
			cout<<"\t\t\t\t\t"<<aux2<<" Adivinha a letra: ";
			cin>>let;
			for (int i = 0; i < strlen(nome); i++) {
				if (nome[i] == let) {
					nomeAd[i] = let;

					conta++;
				}
			}
			system("cls");
			
			if (conta == strlen(nome)) {
				cont = 1;
				nomeJogo();
				cout<<endl<<endl<<"\t\t\tJogo terminado, o "<<aux2<<" acertou o nome, que e: "<<nome;
			}
			
			cont--;
		}
		cout<<endl<<"Quer continuar? [S/N]: ";
		cin>>res;
		conta = 0;
		cout<<endl;
		strcpy(no1, aux2);
		strcpy(no2, aux1);
		strcpy(aux1, no1);
		strcpy(aux2, no2);
		system("cls");
		
	} while(res == 's' || res == 'S');
	cout<<endl<<"Saiu do jogo, ou talvez ainda nao foi programado o que queria :(!!!";
	return 0;
}

//Funcoes  e procedimentos;

void nomeJogo() {
	cout<<"\t\t\t\t\tJogo da forca"<<endl<<endl;
}

void menuJogo(int & opca){//Funcao para a escolha do tipo de jogadores;
	nomeJogo();
	int res;
	cout<<endl;
	
	cout<<"\t\t\t\t\tEscolha a opcao"<<endl<<endl;
	cout<<"\t\t\t\t\t[1]. Jogar com o computador"<<endl;
	cout<<"\t\t\t\t\t[2]. Jogar entre duas pessoas"<<endl;
	cin>>opca;
}

void cadastroJogadores(char nome1[], char nome2[]){//Funcao para o cadastro de jogadores;
	int opcao;
	menuJogo(opcao);
	system("cls");
	nomeJogo();
	if (opcao == 2){
		cout<<"Digite o nome do primeiro Jogador: ";
		cin>>nome1;
		cout<<endl<<"Digite o nome do segundo Jogador: ";
		cin>>nome2;
	}else{
		cout<<"Digite o seu nome: ";
		cin>>nome1;
	}
}


void dadosComputador(char frutas[][MAX], int num){ //Programando o robo :);							
	cout<<frutas[num];
}


bool pesquisaString(char nom[], char fruta[][MAX], int num){//Compara as Strings!! :);
	bool respo = false;
	int cot = 0, nu;
	for (int i = 0; i < num; i++){
		for(int j = 0; j < strlen(fruta[i]); j++){
			if (fruta[i][j] == nom[j]){
				cot++;
			}
		}
				
		if (cot == strlen(fruta[i])){
			//cout<<endl<<endl<<"Fruta encontrada com sucesso:) - "<<fruta[i]<<endl;
			nu++;
			respo = true;
			break;
		}
		cot = 0;
	}
			
	if (nu == 0){
		//cout<<endl<<endl<<"Nenhuma futa foi encontrada na pesquisa :("<<endl;
		respo = false;
	}
		
	return respo;
}