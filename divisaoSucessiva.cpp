#include <iostream>
using namespace std;

int main(){
	cout<<"         Divisao sucessiva";
	
	int num, den, res, cont = 0;
	
	cout<<"\n\nIntroduz o numero que quer dividir: ";
	cin>>num;
	cout<<"\n\nIntroduz o numero que vai dividir: ";
	cin>>den;
	
	res = num;
	if (den == 0){
		cout<<"O numero nao existe em IR :(";
	}else{
		while (res >= den){
		res = res - den;
		
		cont++;
	}
	
		cout<<"\nA divisao dos dois numeros foi: "<<cont;
		cout<<"\n\nO resto da diviso foi: "<<res;	
	}
}