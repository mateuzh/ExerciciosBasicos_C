#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char codigo;
	printf("Selecione o codigo do produto para ver o nome do produto e seu preco.\n\n");
	printf("A\n");	
	printf("B\n");
	printf("C\n");
	printf("D\n\n");
	printf("Digite sua escolha: \n");
	scanf("%c", &codigo);
	
	switch (codigo)
	{
	case 'A':
		printf("Lampada 60W - R$2,50");
		break;
	case 'B':
		printf("Lampada 120W - R$8,90");
		break;
	case 'C':
		printf("Reator - R$36,00");
		break;
	case 'D':
		printf("Cabo 2,5mm - R$1,23");
		break;
	}
	
	return 0;
}
