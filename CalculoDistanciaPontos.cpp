#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14
int main(){
	/*int x1, y1, x2, y2, dis;
	cout<<"               Este prgrana vai calcular a distancia euclidiana entre dois pontos\n\n";
	
	cout<<"Digite as coordenadas do primeiro ponto: \n";
	cin>>x1>>y1;
	
	cout<<"Digite as coordenadas do segundo ponto: \n";
	cin>>x2>>y2;
	
	cout<<"\nPonto 1: P1("<<x1<<" , "<<y1<<")\n";
	cout<<"\nPonto 2: P2("<<x2<<" , "<<y2<<")\n";
	
	double res;
	
	res = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	
	cout<<"A distancia entre os dois pontos eh: "<<res;
	return 0;*/
	
	cout<<"              Determinacao do perimetro e da area da circunferencia\n\n";
	
	float raio, area, perimetro;
	
	cout<<"Digite o raio da circunferencia: ";
	cin>>raio;
	
	area = PI*pow(raio, 2);
	perimetro = 2*PI*raio;
	
	cout<<"\nA area da circunferencia e: "<<area<<"\n\n";
	cout<<"O perimetro da circunferencia e: "<<perimetro<<"\n";
	
}