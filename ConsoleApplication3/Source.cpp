#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main()
{
	setlocale(0, "");

	char word[10];
	printf("������� �����: ");
	fgets(word, 10, stdin);//\n
	int len=strlen(word);
	printf("��������� ������: %c", word[len-2]);
	int k = 5;
	printf("\nk-������: %c", word[len-k]);
	
	/*char fcountry[30];
	char scountry[30];
	printf("������� �������� ������ ������: ");
	fgets(fcountry, 30, stdin);
	printf("������� �������� ������ ������: ");
	fgets(scountry, 30, stdin);

	printf("\n������ ������: %s", fcountry);
	printf("������ ������: %s", scountry);

	printf("\nT1- %s", fcountry);
	printf("T2- %s",scountry);
	*/
	/*char name[20];
	char roman[20];
	printf("������� ��� ������: ");
	fgets(name, 20, stdin);
	printf("������� �������� ������������: ");
	fgets(roman, 20, stdin);
	
	printf("\n����� ������������: %s", name);
	printf("\n�������� ������������: %s", roman);
	*/
}