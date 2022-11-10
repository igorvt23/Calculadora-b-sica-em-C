#import <stdio.h>

int num1, num2, soma, subtracao, multiplicacao, opcao2=0, opcao=0;
float divisao;


int main(){
  printf(" ____________________________________________\n");
	printf("|          BEM VINDO A CALCULADORA!          |\n");
	printf("|____________________________________________|\n\n\n");
	for(int a = 0; a < 10; a--){
		printf(" ____________________________________________\n");
		printf("|    Insira os numeros a serem calculados    |\n");
		printf("|                                            |\n");
		printf("| Primeiro numero:                           |\n");
		scanf("%d", &num1);
		printf("| Segundo numero:                            |\n");
		scanf("%d", &num2);
		printf("|____________________________________________|\n");

		soma = num1 + num2;
		subtracao = num1 - num2;
		multiplicacao = num1 * num2;
		divisao = num1 / num2;
		system("clear");
		printf(" ____________________________________________\n");
		printf("|    Digite uma operacao para prosseguir:    |\n");
		printf("|                                            |\n");
		printf("|   1 - Soma                                 |\n");
		printf("|   2 - Subtracao                            |\n");
		printf("|   3 - Multiplicacao                        |\n");
		printf("|   4 - Divisao                              |\n");
		printf("|   5 - Sair                                 |\n");
		printf("|                                            |\n");
		printf("|____________________________________________|\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1: 
				system("clear");
				printf(" _________________________________\n");
				printf("|      A soma resulta em:  %d     |\n", soma);
				printf("|_________________________________|\n");
				system("pause");
				printf(" ______________________________________\n");
				printf("|     Deseja fazer outra operacao?     |\n");
				printf("|                                      |\n");
				printf("| 1 - Sim!                             |\n");
				printf("| 2 - Nao!                             |\n");
				printf("|______________________________________|\n");
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:
						break;
					case 2:
						system("clear");
						printf(" ____________________________________________\n");
						printf("|                    TCHAU                   |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                   ATE MAIS!                |\n");
						printf("|____________________________________________|\n");
						system("pause");
						a == 11;
						break;
				}
			break;

			case 2:
				system("clear");
				printf(" _________________________________\n");
				printf("|   A subtracao resulta em:  %d   |\n", subtracao);
				printf("|_________________________________|\n");
				system("pause");
				printf(" ______________________________________\n");
				printf("|     Deseja fazer outra operacao?     |\n");
				printf("|                                      |\n");
				printf("| 1 - Sim!                             |\n");
				printf("| 2 - Nao!                             |\n");
				printf("|______________________________________|\n");
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:
						break;
					case 2:
						system("clear");
						printf(" ____________________________________________\n");
						printf("|                    TCHAU                   |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                   ATE MAIS!                |\n");
						printf("|____________________________________________|\n");
						system("pause");
						a == 11;
						break;
					default:
						printf("opcao invalida!");
						break;
				}
			break;
			
			case 3: 
				system("clear");
				printf(" _________________________________\n");
				printf("| A multiplicacao resulta em:  %d |\n", multiplicacao);
				printf("|_________________________________|\n");
				system("pause");
				printf(" ______________________________________\n");
				printf("|     Deseja fazer outra operacao?     |\n");
				printf("|                                      |\n");
				printf("| 1 - Sim!                             |\n");
				printf("| 2 - Nao!                             |\n");
				printf("|______________________________________|\n");
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:
						break;
					case 2:
						system("clear");
						printf(" ____________________________________________\n");
						printf("|                    TCHAU                   |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                   ATE MAIS!                |\n");
						printf("|____________________________________________|\n");
						system("pause");
						a == 11;
						break;
					default:
						printf("opcao invalida!");
						break;
				}
			break;
			
			case 4: 
				system("clear");
				printf(" _________________________________\n");
				printf("|    A divisao resulta em:  %f    |\n", divisao);
				printf("|_________________________________|\n");
				system("pause");
				printf(" ______________________________________\n");
				printf("|     Deseja fazer outra operacao?     |\n");
				printf("|                                      |\n");
				printf("| 1 - Sim!                             |\n");
				printf("| 2 - Nao!                             |\n");
				printf("|______________________________________|\n");
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:
						break;
					case 2:
						system("clear");
						printf(" ____________________________________________\n");
						printf("|                    TCHAU                   |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                                            |\n");
						printf("|                   ATE MAIS!                |\n");
						printf("|____________________________________________|\n");
						system("pause");
						a == 11;
						break;
					default:
						printf("opcao invalida!");
						break;
				}
			break;

        case 5: 
          system("clear");
          printf(" ____________________________________________\n");
          printf("|                    TCHAU                   |\n");
          printf("|                                            |\n");
          printf("|                                            |\n");
          printf("|                                            |\n");
          printf("|                   ATE MAIS!                |\n");
          printf("|____________________________________________|\n");
          system("pause");
          a == 11;
        break;

        default:
            printf("Opcao invalida!");
		
		}
	}
}
