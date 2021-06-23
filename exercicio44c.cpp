#include <iostream>
#include <locale.h>

using namespace std;

main(int argc, char** argv){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, inc;
	
	cout << "Digite o primeiro valor: ";
	cin >> num1;
	cout << "Digite o segundo valor: ";
	cin >> num2;
	cout << "Digite o incremento: ";
	cin >> inc;
	
	if(num1<num2){
		while(num1<=num2){
			cout << num1 << "\n";
			num1 = num1 + inc;
		}
    }	
	else{
		while(num2<=num1){
			cout << num2 << "\n";
			num2 = num2 + inc;
		}
	}
	cout << "Acabou!";	
	return 0;
}
