#include <iostream>
#include <cstdlib>
using namespace std;


struct dados{
	char nome[50];
	char categoria[100];
	double vencimento;
	int dia, mes, ano, numero;
};

#define MAX 100
void lerDados(dados func[], int &num);
void mostraDados(dados func[], int &num);

int main(void){
	dados funcionario[MAX];
	int num;
	
	lerDados(funcionario, num);
	mostraDados(funcionario, num);
	return 0;
}

void lerDados(dados func[], int &num){
	char buffer[10];

	cout<<"Quntos funcionarios queres cadastrar?";
	cin>>num;
	system("cls");
	for (int i = 0; i < num; i++){
		cout<<"Digite o nome do funcionario: ";
		cin>>func[i].nome;
		cout<<"Digite o numero do funcionario: ";
		cin>>func[i].numero;
		cout<<"Categoria do funcionario: ";
		cin>>func[i].categoria;
		cout<<"Vencimento: ";
		cin>>func[i].vencimento;
		cout<<"Data de entrada (dia / mes / ano): "<<endl;
		cin>>func[i].dia>>func[i].mes>>func[i].ano;
		cout<<endl<<endl;	
	}
	system("cls");
}

void mostraDados(dados func[], int &num){
	for (int i = 0; i < num; i++){
		cout<<"Funcionario "<<i+1<<endl<<endl;
		cout<<"Nome: "<<func[i].nome<<endl;
		cout<<"Numero: "<<func[i].numero<<endl;
		cout<<"Categoria: "<<func[i].categoria<<endl;
		cout<<"Vencimento: "<<func[i].vencimento<<" MZN"<<endl;
		cout<<"Data de Entrada: "<<func[i].dia<<" / "<<func[i].mes<<" / "<<func[i].ano<<endl;
		cout<<endl<<"---------------------------------------"<<endl<<endl;	
	}
}