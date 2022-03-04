#include <iostream>
using namespace std;

int main(){
	//Triangulo;
	int coluna, linha, linh;
	
	//for(int i = 1; i <= 3; i++){
		coluna = 1;
		while(coluna <= 30){
			for(int i = 1; i <= 2; i++){
				linha = 1;
				cout<<"\t\t\t\t";
				while(linha<= coluna){
					cout<<"*";
					linha++;
				}
			}
		
			cout<<endl;
			coluna++;
		}		
	//}
}