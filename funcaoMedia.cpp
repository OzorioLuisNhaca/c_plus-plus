#include <iostream>
using namespace std;
//Prototipo da funcao que calcula media
float mediaNumeros(float n1, float n2);

int main(){
	float media;
	float n1, n2, menor, maior;
	cout<<"Introduza a primeira nota: ";
	cin>>n1;
	cout<<"\nIntroduza a segunda nota: ";
	cin>>n2;
	media = mediaNumeros(n1,n2);
	
	cout<<"A media das duas notas inderidas e: "<<media;
	if(n1 < n2){
		menor = n1;
		maior = n2;
	}else{
		menor = n2;
		maior = n1;
	}
	
	cout<<"\nOrde crescente da notas: "<<menor<<", "<<maior;
	return 0;
} 

float mediaNumeros(float n1, float n2){
	//Funcao para o calculo da media;
	float media;
	media = (n1 + n2)/2;
	
	return media;
}