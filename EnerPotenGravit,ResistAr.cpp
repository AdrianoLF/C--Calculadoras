#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");//Alfabeto em portugu�s
	
	iniciar://Goto do escopo principal
	char tipoCalculadora;//Escolhendo qual formula usar
	cout << "Insira o n�mero de acordo com sua prefer�ncia:" << endl;//Lendo numero que foi inserido pelo usuario
	cout << "Para calcular a Resist�ncia do ar. Insira o n�mero 1." << endl;//Resistencia do ar = velocidade^2 . k
	cout << "Para calcular a Energia Potencial Gravitacional. Insira o n�mero 2." << endl;//Energia Potencial Gravitacional = m . g . h
	cin >> tipoCalculadora;//Resposta sendo atribuida � vari�vel 'tipoCalculadora'
	
	if(tipoCalculadora == '1'){//Se 'TipoCalculadora' � igual a '1'
		double forcaResistencia, k, velocidade, velocidadequadrado;//Criando nomes de vari�veis
		cout << "\nVoc� escolheu Resist�ncia do ar" << endl;//Imprimindo na tela que o usu�rio escolheu op��o 1
		kErro://Goto de erro de 'k'
		cout << "\nInsira o valor de K (constante ligada � natureza do fluido), em N.s^2/m^2:" << endl;//Imprimindo na tela para o usu�rio inserir valor especificado
		cin >> k;//Atribuindo valor � vari�vel de acordo com o valor que o usu�rio inseriu no programa
		if(k<=0){//Se k menor igual a 0, fazer:
			cout << "\nERRO! Por favor, insira valores positivos\n";//Imprimindo que o valor deve ser maior que 0
			goto kErro;
		}
		
		velocidadeErro:
		cout << "\nAgora insira o valor da velocidade, em m/s:" << endl;//Imprimindo na tela para o usu�rio inserir valor especificado
		cin >> velocidade;//Atribuindo valor � vari�vel de acordo com o valor que o usu�rio inseriu no programa
		if(velocidade<=0){
			cout << "\nERRO! Por favor, insira valores positivos\n";//Imprimindo que o valor deve ser maior que 0
			goto velocidadeErro;
		}
		
		velocidadequadrado=velocidade*velocidade;
		forcaResistencia=k*velocidadequadrado;//For�a de resistencia do ar � igual a 'k' multiplicado pelo quadrado da velocidade
		
		cout << "A for�a de resist�ncia do ar � de: " << forcaResistencia << "N" << endl;
		
	} 
	else if(tipoCalculadora == '2'){
		double energiaPG, m, g, h;
		
		cout << "\nVoc� escolheu Energia Potencial Gravitacional" << endl;
		
		massaErro:
		cout << "Insira o valor da massa, em kg:" << endl;//Imprimindo na tela para o usu�rio inserir valor especificado
		cin >> m;//Atribuindo valor � vari�vel de acordo com o valor que o usu�rio inseriu no programa
		if(m<=0){
			cout << "\nERRO! Por favor, insira valores positivos\n";//Imprimindo que o valor deve ser maior que 0
			goto massaErro;
		}
		
		gravidadeErro:
		cout << "Insira o valor da gravidade, em m/s^2:\n";//Imprimindo na tela para o usu�rio inserir valor especificado
		cin >> g;//Atribuindo valor � vari�vel de acordo com o valor que o usu�rio inseriu no programa
		if(g<=0){
			cout << "\nERRO! Por favor, insira valores positivos\n";//Imprimindo que o valor deve ser maior que 0
			goto gravidadeErro;
		}
		
		alturaErro:
		cout << "Insira o valor da altura, em metros:\n";//Imprimindo na tela para o usu�rio inserir valor especificado
		cin >> h;//Atribuindo valor � vari�vel de acordo com o valor que o usu�rio inseriu no programa
		if(h<=0){
			cout << "\nERRO! Por favor, insira valores positivos\n";//Imprimindo que o valor deve ser maior que 0
			goto alturaErro;
		}
		
		energiaPG=m*g*h;//Dando valor para 'energiaPG' a partir do valor de outras vari�veis
		cout << "A Energia Potencial Gravitacional � de: " << energiaPG << "N";//Imprimindo resultado final na tela
		
		
		
	}
	 else {
		cout << "\nERRO! Por favor, insira os valores: 1 ou 2\n";
	}
	
	cout << "\n\n";
	goto iniciar;
}
