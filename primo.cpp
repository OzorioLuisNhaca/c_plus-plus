#include <iostream>
using namespace std;

int main(){
	cout<<"          Primo ou nao? \n\n";
	
	int num, cont;
	
	cout<<"\nDigite um numero: ";
	cin>>num;
	
	for (int i = 1; i<=num; i++){
		if (num%i == 0){
			cont++;
		}else{
			cont +=0;
		}
	}
	
	cout<<"\nO numero de divisores foi: "<<cont;
	
	if(cont == 2){
		cout<<"\n\nO numero digitado eh primo.";
	}else{
		cout<<"\n\nO numero digitado nao eh primo.";
	}
	return 0;
}