#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	string tipo;
	int km, dias;
	float valor;
	
	
	cout << "Qual o tipo de ve�culo locado? (pop ou lux) ";
	cin >> tipo;
	cout << "Por quantos dias o ve�culo foi locado? ";
	cin >> dias;
	cout << "Qual a km percorrida pelo ve�culo? ";
	cin >> km;
	
	if(tipo == "pop" && km<=100){
		valor = (km * 0.20) + (90 * dias);
	}	
	else if(tipo == "pop" && km>100){
		valor = (km + 0.10) + (90 * dias);
	}
	else if(tipo == "lux" && km<200){
		valor = (km*0.30) + (150 * dias);
	}
	else{
		valor = (km * 0.25) + (150 * dias);
	}	
	
	cout << "O valor total do aluguel do carro ser� de R$" << valor;
	
	return 0;
}
