#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	cont = 100;
	
	while(cont>=0){
		cout << cont <<endl;
		cont = cont -5;		
	}
	cout << "Acabou!";			
	return 0;
}
