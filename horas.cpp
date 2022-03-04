#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int hh, min, seg;
	
	cout<<"Introduz o tempo em segundos: ";
	cin>>seg;
	
	hh =  seg/3600;
	min =  (seg%3600)/60;
	seg = ((seg%3600)%60);
	
	cout<<"Hora em hh, min e seg: "<<hh<<"h : "<<min<<"min : "<<seg<<"seg";
	return 0;
}