#include <iostream>
#include <locale.h>
using namespace std;
int main(){
//O programa a seguir foi feito para calcular:
//Modulo da elasticidade - E (módulo de Young) = Q (tensão) / e (deformação)
//Resistência do concreto - FCK (resistencia do concreto) = força / área;

	setlocale(LC_ALL, "Portuguese");//Leitura de caracteres especiais em português
	
	calculadora:
	
	char resposta1, fckChar, meChar;
	cout << "Bem vindo à minha calculadora. Aqui podemos calcular:\nFCK (Resistência Característica do Concreto à Compressão)\nModulo da elasticidade (Módulo de Young)";
	respostaInvalida:
	cout << "\n\nPara calcular o FCK, digite f. Para calcular o Módulo da Elasticidade, digite m.\n";
	cin >> resposta1;
	fckChar = 'f';
	meChar = 'm';
	
		
	//Calculadora FCK
	if (resposta1 == fckChar){
		
		//Dando nome à variáveis
		double forca, area, fckResultado;
	
		cout << "\nVocê escolheu a calculadora de FCK. ";
		system("pause");
		
		//Recolhendo valor para 'força'
		forcaRecolherInfo:
		cout << "\nInsira o valor de força (em Newtons):" << endl;
		cin >> forca;		
		if (forca <= 0){
			cout << "Nesse caso os valores de força têm de ser um número maior que 0. Digite novamente:" << endl;
			goto forcaRecolherInfo;
		}
	
		//Recolhendo valor para 'area'
		areaRecolherInfo:
		cout << "\nInsira o valor de area (em mm^2):" << endl;
		cin >> area;
		if (area <= 0){
			cout << "O valor de área tem de ser maior que 0. Digite outro número:" << endl;
			goto areaRecolherInfo;
		}
	
		//Calculando e imprimindo FCK
		fckResultado = forca/area;
		cout << "\nA Resistência Característica do Concreto à Compressão (FCK) é de:\n" << fckResultado << " MPa\n\n\n";
	}
	
	
	//Calculadora Modulo de Young
	else if (resposta1 == meChar){
		cout << "\nVocê escolheu a calculadora 'Módulo de Elasticidade'. ";
		system("pause");
		double tensao, deformacao, meResultado;
		
	//Recolhendo valor para 'tensao'
		tensaoRecolherInfo:
		cout << "\nInsira o valor de tensao (em MPa):" << endl;
		cin >> tensao;
		if (tensao <= 0){
			cout << "Nesse caso os valores de tensao têm de ser maior que 0. Digite outro número:" << endl;
			goto tensaoRecolherInfo;
		}	
		
		deformacaoRecolherInfo:
		cout << "\nInsira o valor de deformação:" << endl;
		cin >> deformacao;
		if (deformacao <= 0){
			cout << "Nesse caso os valores de deformacao têm de ser maior que 0. Digite outro número:" << endl;
			goto deformacaoRecolherInfo;
		}	
		
		meResultado = tensao/deformacao;
		cout << "\nO Módulo da Elasticidade é de:\n" << meResultado << " MPa\n\n\n"; 
	}
	
	//Quando o usuário não responder nem um, nem outro
	else {
		cout << "Resposta inválida. Insira um dos caracteres especificados.";
		goto respostaInvalida;
	}
	
	
	system("pause");
	goto calculadora;
	
}
