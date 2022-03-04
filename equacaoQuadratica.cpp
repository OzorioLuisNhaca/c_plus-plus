#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a, b, c, del, x_1, x_2;
	cout<<"                         Equacao qudratica\n\n";
	
	cout<<"Introduz o valor de a: ";
	cin>>a;
	
	cout<<"\nIntroduz o valor de b: ";
	cin>>b;
	
	cout<<"\nIntroduz o valor de c: ";
	cin>>c;
	
	del = pow(b,2) - 4*a*c;
	
	if(del < 0){
		cout<<"\nA equacao nao tem solucao em IR :(";
	}	
		else{
			x_1 = (-b + sqrt(del))/(2*a);
			x_2 = (-b - sqrt(del))/(2*a);
			
			if(del == 0){
				cout<<"\nA equacao tem duas solucoes iguais\n";
			}else{
				cout<<"\nA equacao tem duas solucoes diferentes\n";
			}
			
			cout<<"X1 = "<<x_1;
			cout<<"\nX2 = "<<x_2;
		}
	
	return 0;
}