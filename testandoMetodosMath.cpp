#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main(){
	int vet[4][4][4];
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for(int k = 0; k < 4; k++){
				vet[i][j][k] = i + j + k;
			}
		}
	}
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for(int k = 0; k < 4; k++){
				cout<<vet[i][j][k]<<"  ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
}