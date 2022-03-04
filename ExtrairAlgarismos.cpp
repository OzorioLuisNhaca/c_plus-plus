#include <iostream>
using namespace std;

int main(){
	//Extraccao de algarismos de um numero;
	double num, tes;
	int i, alg, dez = 1, cont, no, c=1;
	cout<<"Digite um numero: ";
	cin>>num;
	
	tes = num;
	
	while(num >=10){
		num/=10;
		
		i++;
	}
	alg = i + 1;
	cout<<"\nO numero tem "<<alg<<" algarismos.\n";
	int sum=0;
	while(alg>0){
		sum+=(int) num;
		cout<<c<<"o. Algarismo: "<<(int) num<<"\n\n";
		dez = 1;
		//Achar a potencia de 10;
		for(int k = 1; k <= i; k++){
			dez *=10;
		}
		
		
		no = ((int) num)*dez; //Numero a subtrair
		
		num = num*dez - no; // Novo numero
		//cout<<num<<"\n";
		alg--;
		
		i = 0;
		
		while(num >= 10){
			num/=10;
			
			i++;
		}
		
		c++;	
	}
	
	cout<<"\n\nA soma de todos os algarismos do numero foi: "<<sum;
	
	
	
}