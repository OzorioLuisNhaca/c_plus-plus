#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char nome1[100];
	char nome2[100];
	int res;
	
	cout<<"Digite o seu nome1: ";
	cin.getline(nome1, 100);
	cout<<"Digite o seu nome2: ";
	cin.getline(nome2, 100);
	
	cout<<endl<<"O seu nome eh: "<<nome1<<endl;
	cout<<"O comprimento do seu nome e: "<<strlen(nome1)<<endl;
	
	res = strcmp(nome1, nome2);
	
	if (res == 0){
		cout<<"Os nomes sao iguais";
	}else{
		if (res < 0){
			cout<<"O segundo nome eh maior";
		}else{
			cout<<"O primeiro nome eh maior";
		}
	}
	return 0;
}