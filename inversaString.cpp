#include <iostream>
#include <cstdlib>
using namespace std;
//Funcao para string inversa;

#define MAX  20
bool funcaoInversa(char string1[], char string2[]);
int main(){
	char string1[MAX], string2[MAX];
	
	cout<<"Digite a primeira string: ";
	cin.getline(string1, MAX);
	cout<<"Digite a segunda string: ";
	cin.getline(string2, MAX);
	system("cls");
	
	if (funcaoInversa(string1, string2) == true){
		cout<<"A string "<<string2<<" eh inversa da string "<<string1;
	}else{
		cout<<"A string "<<string2<<" nao eh inversa da string "<<string1;
	}
	return 0;
}

bool funcaoInversa(char string1[], char string2[]){
	bool res = false;
	int cont = 0;
	
	if ((strlen(string1) == strlen(string2))){
		for (int i = 0; i < strlen(string1); i++){
			if (string1[i] == string2[strlen(string2) - (i + 1)]){
				cont++;
			}
		}
		
		if (cont == strlen(string1)){
			res = true;
		}
	}else{
		res = false;
	}
	
	return res;
}