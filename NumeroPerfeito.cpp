#include <iostream>
using namespace std;

int main(){
	//Numero perfeito;
	int num, soma;
	string res;
	while((res != "N") && (res != "n")){
		cout<<"\nDigite um numero: ";
		cin>>num;
		
		soma = 0;
		for(int i = 1; i <= num; i++){
			if((num % i == 0) && (i != num)){
				soma += i;
				
				cout<<i<<" , ";
			}
		}
		
		if(soma == num){
			cout<<"\n\nO numero digitado eh pefeito e eh: "<<num<<" :)";
		}else{
			cout<<"\n\nO numero digitado nao eh pefeito e eh: "<<num<<" :(";
		}
		
		
		cout<<"\n\nQuer continuar? [S/N]";
		cin>>res;
	}
	return 0;
}