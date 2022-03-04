#include <iostream>
#include <cstdlib>
using namespace std;
//Exercicio 1;

int ocorenciaString(char string[], char string1[]);
#define MAX 50
int main(){
	char string[MAX], string1[MAX];
	int numOc = 0;
	
	cout<<"Digite a prim eira string: ";
	cin.getline(string, MAX);
	cout<<endl<<"Digite a segunda String: ";
	cin.getline(string1, MAX);
	system("cls");
	
	numOc = ocorenciaString(string, string1);
	
	cout<<"A string "<<string<<" ocorre "<<numOc<<" vezes na string "<<string1;
	return 0;
}

int ocorenciaString(char string[], char string1[]){
	int cont = 0, j = 0, c = 0;
		for (int i = 0; i < strlen(string1); i++){
			if ((string[j] == string1[i]) && (c == j)){
				
				c++;
			}else{
				if (string[0] == string1[i]){
					j = 0;
					c = 1;
				}else{
					j = -1;
					c = 0;
				}
			}
			
			if (c == strlen(string)){
				j = -1;
				c = 0;
				cont++;
			}
			
			j++;
		}
	return cont;
}

