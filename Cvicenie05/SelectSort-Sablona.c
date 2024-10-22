//sablona pro programovani tridicich algoritmu v C
//ALGO1 2024/2025

// pouzivame zakladni knihovny 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//nastavte si, jak velke chcete pole (kolik cisel budete tridit)
#define VELIKOST 10             //TADY UPRAVIT
//nastavte si rozsah cisel ke trideni
#define CISLA_OD 0             //TADY UPRAVIT
#define CISLA_DO 1000          //TADY UPRAVIT

//nahodne naplni pole nachystane pro VELIKOST prvku hodnotami v zadanem rozsahu
void napln_pole(int pole[]) {
    time_t t;
    srand((unsigned)time(&t));
    for (int i = 0; i < VELIKOST; i++) {
        pole[i] = CISLA_OD + rand() % CISLA_DO;
    }
}

//vypise pole obshaujici VELIKOST prvku
void vypis_pole(char* sorted, int pole[]) {
    printf("%s \n", sorted);
    for (int i = 0; i < VELIKOST; i++) {
        printf("%d, ", pole[i]);
    }

    printf("\n");
}

//funkce provadejici trideni pomoci algoritmu select sort
void select_sort(int pole[]) {
    printf("\nSELECT SORT: Zatim nic nedelam\n");  // TADY UPRAVIT (implementujte select sort. Delka pole je v konstante VELIKOST.)
}

int main(void) {
    //vytvorime, naplnime a vypiseme pole
    int pole[VELIKOST];
    napln_pole(pole);
    vypis_pole("nesetrizene:", pole);

    //---> zde provadejte sve pokusy s polem

    select_sort(pole);


    //<--- dale kod nemente

    //vypiseme pole po vykonani sortu
    printf("\n");
    vypis_pole("setrizene:", pole);

    getchar(); //pockame na "enter" a skoncime
    return 0;
}