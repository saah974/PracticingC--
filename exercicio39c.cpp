#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	cont = 10;
	
	while(cont>=3){
		cout << cont << endl;
		cont = cont-1;
	}			
	return 0;
}
