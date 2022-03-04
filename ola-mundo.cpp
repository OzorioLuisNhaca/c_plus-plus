#include <iostream>
using namespace std;
int n1, n2, n3;
float media;
int main(){
	cout<<"Digite a Primeira nota: ";
	cin>>n1;
	
	cout<<"Digite a Segunda nota: ";
	cin>>n2;
	
	cout<<"Digite a Terceira nota: ";
	cin>>n3;
	
	media = (n1 + n2 + n3)/3;
	
	cout<<"A media calculada e: "<<media;
	
	return 0;
}

