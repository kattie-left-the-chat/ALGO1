#sablona pro programovani tridicich algoritmu v Pythonu
#ALGO1 2024/2025

# pouzivame knihovnu pro nahodne generovani cisel
from random import randint


# vytvori pole zadane velikosti s nahodnymi hodnotami v rozsahu dolni_limit az horni_limit         
def vytvor_nahodne_pole(velikost, dolni_limit, horni_limit):
    pole = []
    while velikost > 0:
        pole.append(randint(dolni_limit, horni_limit))
        velikost = velikost - 1
    return pole



#nastavte si, jak velke chcete pole (kolik cisle budete tridit)
VELIKOST = 10             #TADY UPRAVIT

#nastavte si rozsah cisel ke trideni
CISLA_OD = 0              #TADY UPRAVIT
CISLA_DO = 1000           #TADY UPRAVIT



# vytvori a vypise nahodne pole se zadanymi parametry
moje_pole = vytvor_nahodne_pole(VELIKOST, CISLA_OD, CISLA_DO)
print("Nesetrizene vstupni pole s", VELIKOST,"prvky:", moje_pole)


#ODSUD DALE PISTE SVUJ KOD

#funkce provadejici trideni pomoci algoritmu insert sort
def insert_sort(pole):
    print("INSERT SORT: Zatim nic nedelam")
    # TADY UPRAVIT (implementujte insert sort. Delka pole je v konstante VELIKOST.)

        
#zavolani funkce na pripravene pole
insert_sort(moje_pole)

#vypis pole
print("Setridene pole:", moje_pole)