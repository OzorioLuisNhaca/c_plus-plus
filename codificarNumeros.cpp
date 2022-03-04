#include <iostream>
using namespace std;

void numeroCifrado(int);
void numeroDecifrado(int);

void menu(int n){
	int res;
	cout<<"          Menu Principal "<<endl<<endl;
	cout<<"[1]. Cifrar Numero;"<<endl;
	cout<<"[2]. Decifrar Numero;"<<endl;
	cin>>res;
	
	switch(res){
		case 1:
			numeroCifrado(n);
		break;
		
		case 2:
			numeroDecifrado(n);
		break;
		
		default:
			cout<<"\nOPS. Esta opcao nao existe :( ";	
	}
}

int main(){
	
	int num;
	cout<<"Digita um numero: ";
	cin>>num;
	menu(num);
	
	return 0;	
}

//1 - Funcoes;

//1.1 - funcao (Recebe um numero inteiro decimal e cifra-o);

void numeroCifrado(int numero){
	double num, tes;
	int i, alg, dez = 1, cont, no, c=1, cif;
	num = numero;
	tes = num;
	
	while(num >=10){
		num/=10;
		
		i++;
	}
	alg = i + 1;
	int sum=0;
	cout<<"Numero cifrado: ";
	while(alg>0){
		sum+=(int) num;
		cif = ((int) num + 8)%10;
		cout<<cif<<" ";
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
}

//1.2 - funcao (Recebe um numero inteiro decimal e decifra-o);
void numeroDecifrado(int numero){
	double num, tes;
	int i, alg, dez = 1, cont, no, c=1, decif;
	num = numero;
	tes = num;
	
	while(num >=10){
		num/=10;
		
		i++;
	}
	alg = i + 1;
	int sum=0;
	cout<<"Numero decifrado: ";
	while(alg>0){
		sum+=(int) num;
		decif = ((int) num + 8);
		cout<<decif<<" ";
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
}

	