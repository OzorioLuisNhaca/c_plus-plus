#include <iostream>
using namespace std;

int main(){
	cout<<"Maximo e minimo numero digitado\n\n";
	int max, min;
	
	for (int i = 0; i<=100; i++){
		if (i > max){
			max = i;
		}else if(i < min){
			min = i;
		}
	}
	
	cout<<"\nO maior numero que foi digitado eh: "<<max;
	cout<<"\nO menor numero que foi digitado eh: "<<min;
	return 0;
}