#include <iostream>
#include <locale.h>
using namespace std;
int main(){
//O programa a seguir foi feito para calcular:
//Modulo da elasticidade - E (m�dulo de Young) = Q (tens�o) / e (deforma��o)
//Resist�ncia do concreto - FCK (resistencia do concreto) = for�a / �rea;

	setlocale(LC_ALL, "Portuguese");//Leitura de caracteres especiais em portugu�s
	
	calculadora:
	
	char resposta1, fckChar, meChar;
	cout << "Bem vindo � minha calculadora. Aqui podemos calcular:\nFCK (Resist�ncia Caracter�stica do Concreto � Compress�o)\nModulo da elasticidade (M�dulo de Young)";
	respostaInvalida:
	cout << "\n\nPara calcular o FCK, digite f. Para calcular o M�dulo da Elasticidade, digite m.\n";
	cin >> resposta1;
	fckChar = 'f';
	meChar = 'm';
	
		
	//Calculadora FCK
	if (resposta1 == fckChar){
		
		//Dando nome � vari�veis
		double forca, area, fckResultado;
	
		cout << "\nVoc� escolheu a calculadora de FCK. ";
		system("pause");
		
		//Recolhendo valor para 'for�a'
		forcaRecolherInfo:
		cout << "\nInsira o valor de for�a (em Newtons):" << endl;
		cin >> forca;		
		if (forca <= 0){
			cout << "Nesse caso os valores de for�a t�m de ser um n�mero maior que 0. Digite novamente:" << endl;
			goto forcaRecolherInfo;
		}
	
		//Recolhendo valor para 'area'
		areaRecolherInfo:
		cout << "\nInsira o valor de area (em mm^2):" << endl;
		cin >> area;
		if (area <= 0){
			cout << "O valor de �rea tem de ser maior que 0. Digite outro n�mero:" << endl;
			goto areaRecolherInfo;
		}
	
		//Calculando e imprimindo FCK
		fckResultado = forca/area;
		cout << "\nA Resist�ncia Caracter�stica do Concreto � Compress�o (FCK) � de:\n" << fckResultado << " MPa\n\n\n";
	}
	
	
	//Calculadora Modulo de Young
	else if (resposta1 == meChar){
		cout << "\nVoc� escolheu a calculadora 'M�dulo de Elasticidade'. ";
		system("pause");
		double tensao, deformacao, meResultado;
		
	//Recolhendo valor para 'tensao'
		tensaoRecolherInfo:
		cout << "\nInsira o valor de tensao (em MPa):" << endl;
		cin >> tensao;
		if (tensao <= 0){
			cout << "Nesse caso os valores de tensao t�m de ser maior que 0. Digite outro n�mero:" << endl;
			goto tensaoRecolherInfo;
		}	
		
		deformacaoRecolherInfo:
		cout << "\nInsira o valor de deforma��o:" << endl;
		cin >> deformacao;
		if (deformacao <= 0){
			cout << "Nesse caso os valores de deformacao t�m de ser maior que 0. Digite outro n�mero:" << endl;
			goto deformacaoRecolherInfo;
		}	
		
		meResultado = tensao/deformacao;
		cout << "\nO M�dulo da Elasticidade � de:\n" << meResultado << " MPa\n\n\n"; 
	}
	
	//Quando o usu�rio n�o responder nem um, nem outro
	else {
		cout << "Resposta inv�lida. Insira um dos caracteres especificados.";
		goto respostaInvalida;
	}
	
	
	system("pause");
	goto calculadora;
	
}
