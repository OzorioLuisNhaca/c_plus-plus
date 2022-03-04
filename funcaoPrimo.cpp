#include <iostream>
using namespace std;

int numeroPrimo(int);

void primoNumero(int num) {
	int contado;
	contado = numeroPrimo(num);

	if (contado == 2) {
		cout<<endl<<"O numero "<<num<<" eh primo"<<endl;
	}
}

int main() {
	int aux, max, min; 
	cout<<"Minimo: ";
	cin>>min;
	cout<<"Maximo: ";
	cin>>max;

	if (min > max) {
		aux = min;
		min = max;
		max = aux;
	}

	for (int i = min; i <= max; i++) {
		primoNumero(i);
	}
}

int numeroPrimo(int num) {
	int cont = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cont++;
		}
	}

	return cont;
}