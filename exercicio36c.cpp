#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	float hr, pt, din; // hora, pontos e recompensa
	
	cout << "Quantas horas de atividades físicas você fez este mês? ";
	cin >> hr;
	
	if(hr<10){
		pt = hr*2;
		din = pt*0.05;
	}
	else if(hr>10 && hr<20){
		pt = hr*5;
		din = pt*0.05;
	}
	else{
		pt = hr*10;
		din = pt*0.05;
	}	
	
	cout << "O total de pontos foi " << pt << " e você ganhou R$" << din;
	
	return 0;
}
