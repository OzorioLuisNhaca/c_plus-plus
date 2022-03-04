#include <iostream>
using namespace std;

int somaNumeros(int n1, int n2){
	int soma;
	soma = n1 + n2;
	
	return soma;
}

void imprimeMensagem(){
	cout<<"\n\nTestando funcoes sem parametros :)";
}
int main(){
	int soma, n1, n2;
	cout<<"Digite o primeiro valor: ";
	cin>>n1;
	cout<<"\nDigite o segundo valor: ";
	cin>>n2;
	
	soma = somaNumeros(n1, n2);
	
	cout<<"\nA soma dos dois numeros e: "<<soma;
	
	imprimeMensagem();
	return 0;
}