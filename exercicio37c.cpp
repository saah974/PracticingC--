#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nsal;
	string gen;
	int anos, sal;
	
	cout << "Qual o sal�rio atual do funcion�rio? ";
	cin >> sal;
	cout << "Qual o g�nero do funcion�rio? [M/H] ";
	cin >> gen;
	cout << "H� quantos anos o funcion�rio trabalha na empresa? ";
	cin >> anos;
	
	if(gen == "M" && anos < 15){
		nsal = sal + (sal*0.05);
	}
	else if(gen == "M" && anos >= 15 && anos <= 20){
		nsal = sal + (sal*0.12);
	}
	else if(gen == "M" && anos > 20){
		nsal = sal + (sal*0.23);
	}
	else if(gen == "H" && anos < 20){
		nsal = sal + (sal*0.03);
	}
	else if(gen == "H" && anos >= 20 && anos <= 30){
		nsal = sal + (sal*0.13);
	}
	else{
		nsal = sal + (sal*0.25);	
	}
	
	cout << "O novo sal�rio do funcion�rio � R$" << nsal;
	
	return 0;
}
