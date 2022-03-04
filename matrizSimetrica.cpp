#include <iostream>
#include <cstdlib>
using namespace std;

#define LINHAS 5
#define COLUNAS 5
int main(){
	int matriz [LINHAS][COLUNAS];
	
	for (int i = 0; i < LINHAS; i++){
		for (int j = 0; j < COLUNAS; j++){
			cout<<"Matrriz ["<<i<<","<<j<<"] = ";
			cin>>matriz[i][j];
			system("cls");
		}
	}
	
	cout<<endl<<endl;
	
	for (int i = 0; i < LINHAS; i++){
		cout<<"\t\t\t";
		for (int j = 0; j < COLUNAS; j++){
			cout<<matriz[i][j] << "   ";
		}
		cout<<endl<<endl;
	}
	return 0;
}