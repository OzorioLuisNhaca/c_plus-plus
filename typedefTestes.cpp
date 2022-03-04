#include <iostream>
using namespace std;
typedef char STRING[40];
int main(){
	STRING nome;
	cout<<"Digite o seu nome: ";
	cin.getline(nome, 50);
	cout<<"O seu nome eh: "<<nome;
	return 0;
}