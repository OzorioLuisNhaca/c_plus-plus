#include <iostream>
using namespace std;

int main(){
	//Aquantidade de numeros primos na sequencia;
	int cont, conta;
	for (int i = 1; i<=100; i++){
		cont = 0;
		for(int num = 1; num<=i; num++){
			if(i%num == 0){
				cont += 1;
			}else{
				cont += 0;
			}
		}
		
		if (cont == 2){
			cout<<"O numero "<<i<<" e primo\n\n";
			
			conta += 1;
		}
	}
	
	cout<<"Foram encontrados "<<conta<<" numeros primos na sequencia";
	
	return 0;
}