#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void main()
{
	setlocale(0, "");

	char word[10];
	printf("Введите слово: ");
	fgets(word, 10, stdin);//\n
	int len=strlen(word);
	printf("Последний символ: %c", word[len-2]);
	int k = 5;
	printf("\nk-символ: %c", word[len-k]);
	
	/*char fcountry[30];
	char scountry[30];
	printf("Введите название первой страны: ");
	fgets(fcountry, 30, stdin);
	printf("Введите название второй страны: ");
	fgets(scountry, 30, stdin);

	printf("\nПервая страна: %s", fcountry);
	printf("Вторая страна: %s", scountry);

	printf("\nT1- %s", fcountry);
	printf("T2- %s",scountry);
	*/
	/*char name[20];
	char roman[20];
	printf("Введите имя автора: ");
	fgets(name, 20, stdin);
	printf("Введите название произведение: ");
	fgets(roman, 20, stdin);
	
	printf("\nАвтор произведение: %s", name);
	printf("\nНазвание произведение: %s", roman);
	*/
}