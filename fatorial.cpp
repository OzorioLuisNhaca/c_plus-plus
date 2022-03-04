#include <iostream>
using namespace std;

int main(){
	int fat = 1, num;
	
	cout<<"Introduz o numero que queres calcular o fatorial: ";
	cin>>num;
	
	for (int i = num; i>=2; i--){
		
		fat *= i;
		
		cout<<i<<" X ";
	}
	
	cout<<"1 = "<<fat;
	
	return 0;
}