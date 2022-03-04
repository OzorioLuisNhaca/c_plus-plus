#include <iostream>
#include <cstdlib>
using namespace std;

void printVector(int vet[], int len, int n){
	cout<<"vet"<<n<<" = [";
	for (int i = 0; i < len; i++){
		if (i != (len - 1)){
			cout<<vet[i]<<", ";
		}else{
			cout<<vet[i];
		}
	}
	cout<<" ]";
	cout<<endl<<endl;
}

const int QTD1 =  5;
const int QTD2 = 7;

int main(){
	int vet1[QTD1]; 
	int vet2[QTD2], cont = 1;
	
	for (int i = 0; i < QTD1; i++){
		cout<<"vet1["<<cont<<"] = ";
		cin>>vet1[i];
		cont++;
		cout<<endl;
	}
	
	system("cls");
	
	cont = 1;
	
	for (int i = 0; i < QTD2; i++){
		cout<<"vet2["<<cont<<"] = ";
		cin>>vet2[i];
		cont++;
		cout<<endl;
	}
	
	system("cls");
	
	printVector(vet1, QTD1, 1);
	printVector(vet2, QTD2, 2);
	
	return 0;
}