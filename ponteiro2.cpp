#include <iostream>
using namespace std;

int main(){
	int *pi, i = 19;
	cout<<"Endereco de pi: "<<&pi<<endl;
	pi = &i;
	cout<<"Conteudo de pi: "<<pi<<endl;
	cout<<"Endereco de i: "<<&i;
	//*pi = 1000;
	//cout<<i<<endl;
	return 0;
}