#include <iostream>
#include <locale.h>
using namespace std;
int main(){

	setlocale(LC_ALL, "Portuguese");//Comando para o cmd ler caracteres em português
	
	comecoAll://Ponto de partida que está sendo usado para recomeçar o cálculo
	int answer0;
	cout << "Bem vindo à minha interface, você deseja usar qual calculadora?\nEnergia Potencial Gravitacional (digite 1)\nArea do Losango(digite 2)\n";
	cin >> answer0;
	
	
	if(answer0 == 1){
		double massa, gravidade, altura, ep;
		int answer1Ep, answer2Ep, answer3Ep;
		gravidade = 10;
	

		cout << "\n\nEssa calculadora foi feita para calcular a Energia potencial gravitacional: Ep = m(massa) . g(gravidade) . h(altura)";
		cout << "\nSe deseja utilizá-la ";
		system("pause");
	
		massaLoop:
		cout << "\nDigite o valor da massa do objeto(kg): " << endl;//Recolhendo valor para var 'massa'
		cin >> massa;
		if(massa <= 0){
			cout << "\nNúmero inválido. Para valores de massa, é necessário utilizar valores maiores que 0.\nPortanto, digite novamente.\n";
			goto massaLoop;
		}
	
		gravidadeLoop:
		cout << "\nA gravidade 'padrão' é a de 10m/s^2 (arrendondamento da força de aceleração da terra).Dessa forma, usaremos essa medida.\Porém caso queira inserir outro valor, digite 1, se não, digite qualquer outro número."<< endl;//Recolhendo valor para var 'massa'
		cin >> answer1Ep;
		if(answer1Ep == 1){
			cout << "Insira o novo valor de gravidade(em m/s^2):\n";
			cin >> gravidade;
			if(gravidade <= 0){
			cout << "\nNúmero inválido. Para calcular satisfatoriamente, nesse caso, vamos utilizar valores positivos.\nPortanto, digite novamente.\n";
			goto gravidadeLoop;
			}
		}

		alturaLoop:
		cout << "\nDigite o valor da altura(m): " << endl;//Recolhendo valor para var 'altura'
		cin >> altura;
		if(massa <= 0){
			cout << "\nNúmero inválido. Para valores de comprimento(altura), é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
			goto alturaLoop;
		}
	
		//confirmando valores
		cout << "\nOs valores inseridos foram:\n" << endl;
		cout << "Massa:" << massa << endl;
		cout << "Aceleração(gravidade):" << gravidade << endl;
		cout << "Altura:" << altura << endl;
	
		cout << "Deseja alterar algum valor? Se sim, digite 1, caso contrário, digite qualquer outro número\n";
		cin >> answer2Ep;
		if (answer2Ep == 1){
		
			cout << "\nPara alterar a massa digite 1. Para alterar a gravidade digite 2. Para alterar Altura digite 3.\n";
			cin >> answer3Ep;
		
			loopIfNovoValorEp:
			
			//NOVO VALOR PARA MASSA
			if(answer3Ep == 1){
				massaNovo:
				cout << "\nDigite o NOVO valor para massa(kg): " << endl;//Recolhendo novo valor para var 'diag1'
				cin >> massa;
				if(massa <= 0){
					cout << "\nNúmero inválido. Para valores de massa, é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
				goto massaNovo;
				}		
			
			//NOVO VALOR PARA GRAVIDADE
			} else if(answer3Ep == 2){
				gravidadeNovo:
				cout << "\nDigite o NOVO valor para gravidade(m/s^2): " << endl;//Recolhendo novo valor para var 'diag2'
				cin >> gravidade;
				if(gravidade <= 0){
					cout << "\nNúmero inválido. Para calcular satisfatoriamente, nesse caso, vamos utilizar valores positivos.\nPortanto, digite novamente.\n";
				goto gravidadeNovo;
				}
			}
			//NOVO VALOR PARA ALTURA
			else if(answer3Ep == 3){
				alturaNovo:
				cout << "\nDigite o NOVO valor para altura(m): " << endl;//Recolhendo novo valor para var 'diag2'
				cin >> altura;
				if(altura <= 0){
					cout << "\nNúmero inválido. Para valores de comprimento(altura), é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
					goto alturaNovo;
				}
			
			} else {
				cout << "\nNúmero inválido. Digite 1, 2 ou 3.";
				goto loopIfNovoValorEp;
			}
		}
		
		ep = massa*gravidade*altura;
	
		cout << "A energia potencial gravitacional é de: " << ep <<"J\n\n\n\n\n" << endl;
	
		system("pause");
	
	}
	
	
	else if (answer0 == 2){//Calculadora Area-Losango
		
	//Variáveis sendo criadas para recolher valores
	double diag1, diag2, resultado;
	int answer1, answer2;
	bool answer1Bool;
	
	cout << "\n\nEssa calculadora foi feita para calcular a Área de um losango = (D . d)/2 ";
	cout << "\nSe deseja utilizá-la ";
	system("pause");
	
	
	diagUm://Diagonal 1 retorno, caso numero invalido
	cout << "\nDigite o valor da primeira diagonal do losango: " << endl;//Recolhendo valor para var 'diag1'
	cin >> diag1;
	if(diag1 <= 0){
		cout << "\nNúmero inválido. Para valores de comprimento, é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
		goto diagUm;
	}
	
	ladoDois://Diagonal 1 retorno, caso numero invalido
	cout << "\nDigite o valor da segunda diagonal do losango: " << endl;//Recolhendo valor para var 'diag2'
	cin >> diag2;
	if(diag2 <= 0){
		cout << "\nNúmero inválido. Para valores de comprimento, é necessário utilizar valores positivos:\nPortanto, digite novamente.\n";
		goto ladoDois;
	}
	
	
	//confirmando valores
	cout << "\nOs valores inseridos foram:\n" << endl;
	cout << "Comprimento da primeira diagonal:" << diag1 << endl;
	cout << "Comprimento da segunda diagonal:" << diag2 << endl;
	
	cout << "\nDeseja alterar os valores inseridos? Se sim, digite 1, caso contrário, digite 2" << endl;
	cin >> answer1;//O valor inserido pelo usuário é atribuido a var 'answer1'
	answer1Bool = answer1<2;//Se 'answer1' é maior que 1, 'true'
	
	if(answer1Bool)//Se answer1Bool é 'true', aplicar a sentença
	{
		loopIfNovoValor:
		
		cout << endl << "Para alterar a primeira diagonal, digite 1. Para alterar a segunda diagonal, digite 2:" << endl;
		cin >> answer2;
		
			
		if(answer2 == 1){
			ladoUmNovo:
			cout << "\nDigite o NOVO valor da primeira diagonal do losango: " << endl;//Recolhendo novo valor para var 'diag1'
			cin >> diag1;
			if(diag1 <= 0){
				cout << "\nNúmero inválido. Para valores de comprimento, é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
			goto ladoUmNovo;
			}		
			
		} else if(answer2 == 2){
			ladoDoisNovo:
			cout << "\nDigite o NOVO valor da segunda diagonal do losango: " << endl;//Recolhendo novo valor para var 'diag2'
			cin >> diag2;
			if(diag2 <= 0){
				cout << "\nNúmero inválido. Para valores de comprimento, é necessário utilizar valores positivos.\nPortanto, digite novamente.\n";
			goto ladoDoisNovo;
			}
			
		} else {
			cout << "\nNúmero inválido. Digite 1 ou 2.";
			goto loopIfNovoValor;
		}
		
	}
	
	resultado = (diag1*diag2)/2;
	cout << endl << "A área do losango é: "<< resultado << "\n\n\n\n\n";//imprimir resultado
	
	}
	
	goto comecoAll;
	system("pause");
}

