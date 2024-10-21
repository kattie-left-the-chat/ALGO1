#include <stdio.h>

void JeKladne(int n)
{
	if (n > 0)
	{
		printf("ano \n");
	}
	else
	{
		printf("nie \n");
	}
}

void SudeNeboLiche(int n)
{
	if (n % 2 == 0)
	{
		printf("sude \n");
	}
	else
	{
		printf("liche \n");
	}
}

int Signum(int n)
{
	if (n > 0)
	{
		return 1;
	}
	else if (n == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int Sucet(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	return sum;
}

void Nasobilka(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int sucin = i * j;
			printf("%d * %d = %d \n", i, j, sucin);
		}
	}
}

int SucetPole(int A[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + A[i];
	}

	return sum;
}

float AritmetickyPrumer(int A[], int n)
{
	float sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = sum + A[i];
	}

	return sum / n;
}

void Znamka(n)
{
	if (n >= 90 && n <= 100)
	{
		printf("znamka: A \n");
	}
	else if (n >= 80 && n <= 89)
	{
		printf("znamka: B \n");
	}	
	else if (n >= 70 && n <= 79)
	{
		printf("znamka: C \n");
	}	
	else if (n >= 60 && n <= 69)
	{
		printf("znamka: D \n");
	}	
	else if (n >= 50 && n <= 59)
	{
		printf("znamka: E \n");
	}	
	else
	{
		printf("znamka: F \n");
	}	
}

void PocetLichychASudych(int A[], int n)
{
	int liche = 0;
	int sude = 0;

	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			sude = sude + 1;
		}
		else 
		{
			liche = liche + 1;
		}
	}

	printf("Pocet sudych: %d \n", sude);
	printf("Pocet lichych: %d \n",liche);
}

int MinMaxRozdiel(int A[], int n)
{
	int min = A[0];
	int max = A[0];

	for (int i = 1; i < n; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
		else if (A[i] > max)
		{
			max = A[i];
		}
	}

	int rozdiel = max - min;
	return rozdiel;
}


int main()
{
	// Priklad 1
	JeKladne(20);		// ocakavam "ano"

	// Priklad 2
	SudeNeboLiche(13);	// ocakavam "liche"

	// Priklad 3
	int sign = Signum(-5);
	printf("vysledok Signum: %d \n", sign);	// ocakavam -1

	// Priklad 4
	int sucet = Sucet(6);
	printf("vysledok Sucet: %d \n", sucet);	// ocakavam 21

	// Priklad 5
	Nasobilka(5);	// ocakavam vypis nasobilky (moze byt pod seba): 1 * 1 = 1, 1 * 2 = 2 ... 5 * 5 = 25


	// Priklad 6
	int pole1[] = { 2, 4, 6, 8, 10, 12 };
	int velkost1 = 6;

	int sucet_p = SucetPole(pole1, velkost1);
	printf("vysledok SucetPole: %d \n", sucet_p);	// ocakavam 42


	// Priklad 7
	int pole2[] = { 1, 5, 3, 7, 9, 4, 8, 2 };
	int velkost2 = 8;

	float aritmeticky = AritmetickyPrumer(pole2, velkost2);
	printf("vysledok AritmetickyPrumer: %f \n", aritmeticky);	// ocakavam 4.875000


	// Dobrovolny 1
	int body = 75;
	Znamka(body);	// ocakavam C


	// Dobrovolny 2
	int pole3[] = { 1, 4, 3, 2, 9};
	int velkost3 = 5;

	PocetLichychASudych(pole3, velkost3);	// ocakavam 2 sude, 3 liche


	// Dobrovolny 3
	int pole4[] = { 3, 4, 5, 2, 8 };
	int velkost4 = 5;

	int rozdiel = MinMaxRozdiel(pole4, velkost4);
	printf("vysledok MinMaxRozdiel: %d \n", rozdiel);	// ocakavam 6


	return 0;
}