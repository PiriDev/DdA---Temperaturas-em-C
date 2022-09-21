//Escreva um algoritmo que apresente ao usuário um menu de opções para conversão de temperaturas
// Celsius para Fahrenheit v
// Celsius para Kelvin v
// Fahrenheit para Celsius
// Fahrenheit para Kelvin
// Kelvin para Celsius
// Kelvin para Fahrenheit
// Cel > Fah == F = C * 1.8 +32
// Fah > Cel == C = (F - 32) / 1.8
// Cel > Kel == K = C + 273,15
// Kel > Cel == c = K - 273,15
// Fah > Kel == K = (F + 459,67) * 5/9
// Kel > Fah == F = K * 9/5 - 459,67

#include <stdio.h>

int main () 
{
	int menu;
	//------ MENU ------
	printf("\n =-=-=-=-=-=-=-=-= TEMPERATURAS =-=-=-=-=-=-=-=-=");
	printf("\n | Escolha como deseja converter seu valor?     |");
	printf("\n | -------                                      |");
	printf("\n | [1]: Celsius para Fahrenheit                 |");
	printf("\n | [2]: Celsius para Kelvin                     |");
	printf("\n | [3]: Fahrenheit para Celsius                 |");
	printf("\n | [4]: Fahrenheit para Kelvin                  |");
	printf("\n | [5]: Kelvin para Celsius                     |");
	printf("\n | [6]: Kelvin para Fahrenheit                  |");
	printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	printf("\n Escolha de 1 a 6 a opcao desejada: ");
	scanf("%d" , &menu);
	
	if (menu > 0 & menu <= 6)
	{
		switch (menu)
		{
			case 1: { //------ CELSIUS PARA FAHRENHEIT ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-= Celsius >> Fahrenheit =-=-=-=-=-=-=");
				printf("\n |                                               |");
				printf("\n | Digite seu valor EM CELSIUS a ser convertido: ");
				scanf("%f" , &temperatura);
				printf("\n |                                               |");
				
				resultado = temperatura * 1.8 +32;
				
				printf("\n |                                               |");
				printf("\n | --------------------------------------------- |");
				printf("\n |    %.2f C  em FAHRENHEIT fica: %.2f F       |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				break;
			}
			
			case 2: { //------ CELSIUS PARA KELVIN ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-=-= Celsius >> Kelvin =-=-=-=-=-=-=-=");
				printf("\n |                                               |");
				printf("\n | Digite seu valor EM CELSIUS a ser convertido: ");
				scanf("%f" , &temperatura);
				
				resultado = temperatura + 273.15;
				
				printf("\n |                                               |");
				printf("\n | --------------------------------------------- |");
				printf("\n |    %.2f C  em KELVIN fica: %.2f K          |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				break;
			}
			
			case 3: { //------ FAHRENHEIT PARA CELSIUS ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-=-= Fahrenheit >> Celsius =-=-=-=-=-=-=-=");
				printf("\n |                                                   |");
				printf("\n | Digite seu valor em Fahrenheit a ser convertido: ");
				scanf("%f" , &temperatura);
				
				resultado = (temperatura - 32) / 1.8;
				
				printf("\n |                                                   |");
				printf("\n | ------------------------------------------------- |");
				printf("\n |    %.2f F  em CELSIUS fica: %.2f C              |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				break;
			}
			
			case 4: { //------ FAHRENHEIT PARA KELVIN ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-=-= Fahrenheit >> Kelvin =-=-=-=-=-=-=-=");
				printf("\n | Digite seu valor em Fahrenheit a ser convertido: ");
				scanf("%f" , &temperatura);
				
				resultado = (temperatura + 459.67) * 5/9;
				
				printf("\n |                                                  |");
				printf("\n | ------------------------------------------------ |");
				printf("\n | -  %.2f F  em KELVIN fica: %.2f K             |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
				break;
			}
			
			case 5: { //------ KELVIN PARA CELSIUS ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-=-= Kelvin >> Celsius =-=-=-=-=-=-=-=");
				printf("\n |                                               |");
				printf("\n | Digite seu valor em Kelvin a ser convertido: ");
				scanf("%f" , &temperatura);
				
				resultado = temperatura - 273.15;
				
				printf("\n |                                               |");
				printf("\n | --------------------------------------------- |");
				printf("\n | -  %.2f K  em CELSIUS fica: %.2f C        |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
				break;
			}
			
			default: { //------ KELVIN PARA FAHRENHEIT ------
				float temperatura;
				float resultado;
				
				printf("\n =-=-=-=-=-=-=-= Kelvin >> Fahrenheit =-=-=-=-=-=-=-=");
				printf("\n |                                                  |");
				printf("\n | Digite seu valor em Kelvin a ser convertido: ");
				scanf("%f" , &temperatura);
				
				resultado = temperatura * 9/5 - 459.67;
				
				printf("\n |                                                  |");
				printf("\n | ------------------------------------------------ |");
				printf("\n | -  %.2f K  em FAHRENHEIT fica: %.2f F        |" , temperatura , resultado);
				printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
				break;
			}
		}
	}
	else
	{
		printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
		printf("\n | Indique um valor de 1 a 6 referente a opcoes do Menu |");
		printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	}
} 
