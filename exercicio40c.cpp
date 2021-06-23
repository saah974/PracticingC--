#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	cont = 0;
	
	while(cont<=18){
		
		cout << cont << endl;
		cont = cont +3;
	}
	
	cout << "Acabou!";
			
	return 0;
}
