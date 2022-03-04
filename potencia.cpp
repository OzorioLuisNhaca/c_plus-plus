#include <iostream>
using namespace std;

int main(){
	//Potencia por multiplicacao sucessiva;
	int base, exp, sol = 1;
	cout<<"Introduz a base: ";
	cin>>base;
	
	cout<<"\nIntroduz o expoente: ";
	cin>>exp;
	
	cout<<base<<"^"<<exp<<" = ";
	for (int i = 1; i <= exp; i++){
		sol *= base;
		
		if(i == exp){
			continue;	
		}
		cout<<base<<" X ";
	}
	
	cout<<base<<" = "<<sol;
	
	return 0;
}