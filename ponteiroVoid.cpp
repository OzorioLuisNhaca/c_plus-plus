#include <iostream>
using namespace std;
//Ponteiros tipo void;

#define DF 1
#define DI 2
#define DC 3

void incrementoDado(void *dad, int tipo){
	switch(tipo){
		case 1:
			cout<<++(*((float *)dad))<<endl;
		break;
		case 2:
			cout<<++(*((int *)dad))<<endl;
		break;
		case 3:
			cout<<++(*((char *)dad));
		break;
	}
}
int main(){
	int num1;
	float num2;
	char let;
	
	cout<<"Digite um numero inteiro: ";
	cin>>num1;
	cout<<endl<<"Digite um numero real: ";
	cin>>num2;
	cout<<endl<<"Digite um caracter: ";
	cin>>let;
	
	incrementoDado(&num1, DI); 
	incrementoDado(&num2, DF);
	incrementoDado(&let, DC);  
	
	//cout<<num1<<endl<<num2<<endl<<let;
	return 0;
}