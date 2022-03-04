#include <iostream>
using namespace std;

int main(){
	//cin.get
	char c;
	int tot = 0;
	cout<<"Digite uma letra: ";
	//c = cin.get();
	while (!cin.eof()){
		c = cin.get();
		tot++;
	}
	
	cout<<endl<<"Foram digitadas "<<tot<<" caracteres";
	return 0;
}