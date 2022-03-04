#include <iostream>
using namespace std;

int main(){
	int *p1 = NULL, *p2 = NULL;
	int v1 = 100, v2 = 300;
	
	p1 = p2 = &v1;
	
	cout<<"Valor apotando por p1: "<<*p1<<endl;
	cout<<"Valor apotando por p2: "<<*p2<<endl;
	
	*p1 += 300;
	*p2 += 300;
	cout<<"Valor1: "<<v1<<endl;
	cout<<"Novo p2: "<<*p2<<endl;
	
	
	return 0;
}