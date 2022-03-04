#include <iostream>
using namespace std;

int main(){
	//Apresentacao grafica das temperaturas;
	string res, nome;
	int temp;
	while ((res != "N") && (res != "n")){
		cout<<"\nDigite o nome da cidade: ";
		cin>>nome;
		cout<<"\nDigite a temperatura desta cidade: ";
		cin>>temp;
		
		cout<<"\nQuer continuar? [S/N]";
		cin>>res;
		
		cout<<nome<<" ";
		for (int i = 1; i <= temp; i+=2){
			cout<<"*";
		}
	}
	return 0;
}