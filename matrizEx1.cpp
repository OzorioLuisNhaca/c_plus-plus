#include <iostream>
#include <cstdlib>
using namespace std;

#define COLUNAS 4
#define LINHAS 4
int main(){
	int matriz[LINHAS][COLUNAS], cont;
	for (int i = 0; i < LINHAS; i++){
		for (int j = 0; j < COLUNAS; j++){
			cout<<"matriz["<<i<<" , "<<j<<"] = ";
			cin>>matriz[i][j];
			system("cls");
		}
	}
	cout<<endl<<endl<<"             Matriz obtida"<<endl<<endl;
	for(int i = 0; i < LINHAS; i++){
		cout<<"\t\t";
		for (int j = 0; j < COLUNAS; j++){
			cout<<matriz[i][j]<<"    ";
		}
		cout<<endl<<endl;
	}
	cout<<endl<<endl<<"             Maximos Locais"<<endl<<endl;
	for (int i = 0; i < LINHAS; i++){
		cout<<"\t\t";
		for (int j = 0; j < COLUNAS; j++){
			if ((i != 0 && i != LINHAS - 1) && (j != 0 && j != COLUNAS -1)){
				if (matriz[i-1][j] < matriz[i][j] && matriz[i][j-1] < matriz[i][j] && matriz[i+1][j] < matriz[i][j] && matriz[i][j+1] < matriz[i][j] ){
					if (matriz[i-1][j-1] < matriz[i][j] && matriz[i-1][j+1] < matriz[i][j] && matriz[i+1][j-1] < matriz[i][j] && matriz[i+1][j+1] < matriz[i][j]){
						cout<<"Maximo local matriz["<<i+1<<" , "<<j+1<<"] = "<< matriz[i][j]<<endl<<endl;
						cont++;
					}
				}	
			}	
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	
	if (cont > 0){
		cout<<"Foram obtidos "<<cont<<" maximos locais";
	}else{
		cout<<"Nenhum maximo local foi obtido";
	}
	return 0;
}