/*
Standard input output
Zakladna kniznica jazyka C
Obsahuje funkciu printf(), scanf() atd..
*/
#include <stdio.h>

/*
Datovy typ bool (true/false) nie je sucastou standardneho C
Mozme ho ale naincludovat pomocou kniznice
1 (alebo hocijake cislo, ktore nie je 0) reprezentuje true
0 reprezentuje false
*/
#include <stdbool.h>


void JeKladne(int n)
{

}

void SudeNeboLiche(int n)
{
	// TO-DO
}

int Signum(int n)
{
	// TO-DO
}

int Sucet(int n)
{
	// TO-DO
}

void Nasobilka(int n)
{
	// TO-DO
}

int SucetPole(int A[], int n)
{
	
}

float AritmetickyPrumer(int A[], int n)
{
	// TO-DO
}


// Vstupny bod programu
int main()
{
	//---------Priradenie---------
	int i = 5;
	int j = i * 2;
	
	float f = 3.14;

	char a = 'f';
	char* s = "Hello";


	//---------Aritmeticke---------
	int x = 5;
	int y = 2;

	int plus = x + y;
	int minus = x - y;
	int krat = x * y;
	int deleno1 = x / y;			// Cele cislo
	float deleno2 = x / y;			// Cele cislo vyjadrene ako float
	float deleno3 = (float)x / y;	// Desatinne cislo
	float deleno4 = x / (float)y;	// Desatinne cislo
	int modulo = x % y;				// Zvysok po deleni

	/*
	Ako pouzivat printf()
	https://www.geeksforgeeks.org/printf-in-c/

	%d: for printing integers
	%f : for printing floating - point numbers
	%c : for printing characters
	%s : for printing strings
	%p : for printing memory addresses
	%x : for printing hexadecimal values
	*/

	// Jedna premenna
	printf("premenna i: %d \n", i);
	printf("premenna j: %d \n", j);
	printf("premenna f: %f \n", f);
	printf("premanna f: %.2f \n", f);
	printf("premenna a: %c \n", a);
	printf("premenna s: %s \n", s);

	printf("plus: %d \n", plus);
	printf("minus: %d \n", minus);
	printf("krat: %d \n", krat);
	printf("deleno1: %d \n", deleno1);
	printf("deleno2: %f \n", deleno2);
	printf("deleno3: %f \n", deleno3);
	printf("deleno4: %f \n", deleno4);
	printf("modulo: %d \n", modulo);

	// Viac premennych
	printf("%d plus %d sa rovna %d \n", x, y, plus);


	//---------Logicke---------
	int c = 5;

	int rovna_sa = (c == 5);						// Pouzivam zatvorky okolo vyrazu na pravej strane kvoli lepsej citelnosti
	
	bool rovna_sa_b = (c == 5);
	bool nerovna_sa = (c != 5);
	bool je_vacsie = (c > 7);
	bool je_mensie = (c < 6);
	bool je_vacsie_rovne = (c >= 5);
	bool je_mensie_rovne = (c <= 5);
	bool vyraz1 = (c == 5) && (c < 4);
	bool vyraz2 = (c > 6) || (c < 7);

	printf("rovna_sa: %d \n", rovna_sa);
	printf("rovna_sa_b: %d \n", rovna_sa_b);		// Na print bool hodnoty pouzivame format %d
	printf("nerovna_sa: %d \n", nerovna_sa);
	printf("je_vacsie: %d \n", je_vacsie);
	printf("je_mensie: %d \n", je_mensie);
	printf("je_vacsie_rovne: %d \n", je_vacsie_rovne);
	printf("je_mensie_rovne: %d \n", je_mensie_rovne);
	printf("vyraz1: %d \n", vyraz1);
	printf("vyraz2: %d \n", vyraz2);


	//---------Podmienene---------
	// if
	bool podmienka1 = (vyraz1 || vyraz2);
	
	if (podmienka1)
	{
		printf("if: podmienka1 je true \n");
	}

	// if else
	if (c != 4 && c <= 5)
	{
		printf("if else: podmienka je true \n");
	}
	else
	{
		printf("if else: podmienka je false \n");
	}

	// if else-if else

	if (false)
	{
		printf("if else-if else: podmienka1 je true \n");
	}
	else if (3)
	{
		printf("if else-if else: podmienka2 je true \n");
	}
	else
	{
		printf("if else-if else: podmienka1 a podmienka2 su false \n");
	}


	//----------Cykly---------
	// for
	int n = 10;

	for (int i = 0; i <= n; i++)
	{
		printf("for i: %d \n", i);
	}

	// while
	i = 0;

	while (i < n)
	{
		printf("while i: %d \n", i);
		i = i + 1;						// alebo mozme pouzit i++;
	}

	// do-while
	i = 0;

	do
	{
		printf("do-while i: %d \n", i);
		i++;
	} 
	while (i <= n);


	//----------Priklady---------
	
	// Priklad 1
	//JeKladne(20);		// ocakavam "ano"

	// Priklad 2
	//SudeNeboLiche(13);	// ocakavam "liche"

	// Priklad 3
	//int sign = Signum(-5);
	//printf("vysledok Signum: %d \n", sign);	// ocakavam -1

	// Priklad 4
	//int sucet = Sucet(6);
	//printf("vysledok Sucet: %d \n", sucet);	// ocakavam 21

	// Priklad 5
	//Nasobilka(5);	// ocakavam vypis nasobilky (moze byt pod seba): 1 * 1 = 1, 1 * 2 = 2 ... 5 * 5 = 25

	// Priklad 6
	/*
	int pole1[] = { 2, 4, 6, 8, 10, 12 };
	int velkost1 = 6;

	int sucet_p = SucetPole(pole1, velkost1);
	printf("vysledok SucetPole: %d \n", sucet_p);	// ocakavam 42
	*/

	// Priklad 7
	/*
	int pole2[] = { 1, 5, 3, 7, 9, 4, 8, 2};
	int velkost2 = 8;

	float aritmeticky = AritmetickyPrumer(pole2, velkost2);
	printf("vysledok AritmetickyPrumer: %f \n", aritmeticky);	// ocakavam 4.875000
	*/
}