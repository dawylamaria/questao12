#include <iostream>

/* Q12*/
using namespace std;
int main(int argc, char** argv) {
	double altura , pesoIdeal;
	char genero;
	
	cout <<"Digite seu genero (M para masculino e F para feminino):" << endl;
	
	cin >> genero;
	
	cout <<"Digite a sua altura:" << endl;
	
	cin >> altura;
	
	if (genero == 'M' || genero == 'm'){
		pesoIdeal = (72.7 * altura) + 58;
		
		cout << "Peso ideal para homens com esta altura eh: " << pesoIdeal << " kg" <<endl;
	}else if (genero == 'F' || genero == 'f'){
		pesoIdeal = (62.1 * altura) - 44.7;
		cout <<"Peso ideal para mulheres com esta altura eh: " << pesoIdeal << " kg" <<endl;

	} else{
		cout << "genero nao encontrado!" << endl;
	}
	system("pause");
	return 0;
}
