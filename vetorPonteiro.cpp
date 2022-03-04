#include <iostream>
using namespace std;

int main(){
	int vec[10] = {2, 8, 9, 0, 4};
	int *p = NULL;
	
	cout<<vec<<endl;
	p = vec;
	//cout<<vec[0]<<" = "<<*p;
	cout<<"teste: "<<*p<<endl;
	for (int i = 0; i < 5; i++)
		cout<<p[i]<<endl;
	return 0;
}