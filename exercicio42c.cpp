#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 1, cont;
	
	cout << "Até quanto você deseja contar? ";
	cin >> cont;	
	
	while(valor<=cont){
		cout << valor << endl;
		valor = valor +1;
	}
	cout << "Acabou!";		
	return 0;
}
