#include <iostream>
#include <cstdlib>
using namespace std;

#define QTNOM 5
#define QTLET 50
int main(){
	char nomes[QTNOM][QTLET];
	cout<<"          Array de Strings "<<endl<<endl;
	for (int i = 0; i < QTNOM; i++){
		cout<<"Digite o "<<i+1<<" nome: ";
		cin.getline(nomes[i], QTLET);
		system("cls");
	}
	
	for (int i = 0; i < QTNOM; i++){
		cout<<"Nome"<<i+1<<": "<<nomes[i]<<endl;
	}
}