#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont=30;
	
	while(cont>=1){
		if(cont%4 == 0){
			cout << "[" << cont << "]\n";
		}
		else
			cout << cont << "\n";
		cont = cont - 1;
	}
	cout << "Acabou!";		
	return 0;
}
