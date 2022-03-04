#include <iostream>
using namespace std;

int main(){
	//Maior numero impar;
	int i, maior = 1, num, pos;
	do{
		i++;
		cout<<i<<" - Digite um numero: ";
		cin>>num;
		
		if(num > maior && num%2 == 1){
			maior = num;
			pos = i;
		}
		
	}while(num != 0);	
	
	cout<<"\nO maior numero impar na sequencia e "<<maior<<" e esta na "<<pos<<"o. Posicao";
	
	return 0;
}