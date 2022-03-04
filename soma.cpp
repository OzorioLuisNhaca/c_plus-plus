#include <iostream>
using namespace std;

int main(){
	int max, min, num1, num2, soma;
	
	cout<<"Introduz o primeiro numero: ";
	cin>>num1;
	
	cout<<"\n\nIntroduz o segundo numero: ";
	cin>>num2;
	
	if(num1 < num2){
		min = num1;
		max = num2;
	}else{
		min = num2;
		max = num1;
	}
	
	for(int i = min; i <= max; i++){
		soma += i;
	}
	
	cout<<"A soma de todos os numeros no intervalo de "<<min<<" a "<<max<<" e: "<<soma;
	return 0;
}