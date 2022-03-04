#include <iostream>
using namespace std;

#define pi 3

int main(){
	int vet[pi];
	
	vet[0] = 4;
	vet[1] = 4;
	vet[2] = 6;
	
	for (int i = 0; i < 3; i++){
		cout<<"vet["<<i<<"] = "<<vet[i]<<endl;
	}
	return 0;
}