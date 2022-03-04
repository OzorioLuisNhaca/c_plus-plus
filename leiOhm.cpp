#include <iostream>
using namespace std;
//Prototipo da funcao

float leiOhm(float res, float tensao);

int main(){
	//programa Principal;
	float intes, res, tens;
	cout<<"Introduz o valor da resistencia: ";
	cin>>res;
	cout<<"\nIntroduz o valor da tensao: ";
	cin>>tens;
	
	intes = leiOhm(res, tens);
	cout<<"\nResistencia R = "<<res<<" Ohm ";
	cout<<endl<<"Tensao  U = "<<tens<<" V ";
	cout<<"\nO valor da Intensidade da Corrente e I = "<<intes<<" A ";
	return 0;
}

//Funcao para o calculo da intensidade da corrente electrica;

float leiOhm(float res, float tensao){
	float intensidade = 0;
	
	intensidade = tensao/res;
	
	return intensidade;
}