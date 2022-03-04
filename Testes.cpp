#include <iostream>
using namespace std;
/*Declaracao de constantes definidas;
 *#define PI 3.14
 *#define NEWLINE "\n"*/
 
 const float pi = 3.14;
 const string newline = "\n";
 const double valorTaxa = 60.4;

int main(){
	
	cout<<"           Aplicacao dos conhecimentos de constantes\n";
	float raio, res;
	
	raio = 3;
	
	res = pi*raio;
	cout<< "\nA area da circunferencia e "<<res<<newline;
	
	res +=sizeof(char);
	cout<<"\nO tamanho e: "<<res<<"\n";
	
	cout<<"\n                  Conversao de tipos primitivos\n";
	
	float n = 3.14;
	cout<<"\nO numero digitado eh: "<<n<<newline;
	int i = (int) n;
	cout<<"\nO numero convertido para inteiro fica: "<<i;
	
	//Paradigma de programacao estruturada.
	/*De acordo com este paradigma de progrmacao, qualquer programa pode ser escrito utilizando-se exclusivamente as insrucoes de "Sequencia", "Decisa" e "Repeticao"*/
	
	//Instrucao de sequencia
	
	cout<<endl<<"\n     Instrucao de Sequencia"<<endl;
	float valorMetical, valorDolar;
	
	cout<<endl<<"Inroduz o valor em dolares que tens: ";
	cin>>valorDolar;
	
	valorMetical = valorTaxa*valorDolar;
	
	cout<<endl<<"O valor em metical do dinheiro que tens e: "<<valorMetical<<" MZN\n";
	cout<<"\n                  Incremento e decremento";
	int a = 4;
	int b;
	
	b = a++;
	
	cout<<"\nb =   "<<b;
	cout<<"\na =   "<<a<<endl;
	
	
	cout<<"\n Deslocamento para esquerda e direita"<<endl;
	
	int x = 0000010100;
	x>>2;
	cout<<"\nX: "<<x<<endl;
	
	
	return 0;
}