# Pseudokódy
### Časová zložitosť v najhoršom prípade - RIEŠENIE
viz Pseudokody - Casova Slozitost.pptx/.pdf


---
### Programovanie - RIEŠENIE
- riešenie v C - viz PseudocodeSolution.c
- riešenie v Pythone - viz PseudocodeSolution.py


---
### :grey_question: Doporučený úkol
1. Zapíšte algoritmus PocetDelitelnych5(A[0..n-1], n) pomocou pseudokódu:
   - vstup: A[0..n-1] - pole prirodzených čísel, n - počet prvkov poľa
   - výstup: počet čísel z poľa, ktoré sú celočíselne deliteľných 5 (return nie print)
   - príklad:
     - vstup: A = [2, 5, 8, 1, 20, 10, 11, 6], n = 8
     - výstup: 3 (lebo 5, 20, 10 sú čísla deliteľné 5)
     - ---

2. Zapíšte algoritmus PostupnePricitanie(A[0..n-1], n) pomocou pseudokódu:
   - vstup: A[0..n-1] - pole prirodzených čísel, n - počet prvkov poľa
   - výstup: pole B, ktoré obsahuje rovnaké čísla ako pole A ku ktorým ale postupne pričítame 0, 2, 4, 6... (return nie print)
   - pole B môžete inicializovať ako: B = []
   - príklad:
     - vstup: A = [3, 5, 2, 9, 1, 4], n = 6
     - výstup: B = [3, 7, 6, 15, 9, 14] (lebo [3 + 0, 5 + 2, 2 + 4, 9 + 6, 1 + 8, 4 + 10])
     - ---

3. Zapíšte algoritmus IndexMax(A[0..n-1], n) pomocou pseudokódu:
   - vstup: A[0..n-1] - pole prirodzených čísel, n - počet prvkov poľa
   - výstup: index maximálneho prvku v poli (ak ich je viac tak jeho prvý výskyt) (return nie print)
   - príklad:
     - vstup: A = [4, 5, 9, 8, 1, 9, 3], n = 7
     - výstup: 2 (maximum je 9, jeho prvý výskyt je na indexe 2)
     - ---

4. Zapíšte algoritmus PosunDoprava(A[0..n-1], n) pomocou pseudokódu:
   - vstup: A[0..n-1] - pole prirodzených čísel, n - počet prvkov poľa
   - výstup: pole B, ktoré obsahuje rovnaké čísla ako pole A, ktoré sú posunuté o jednu pozíciu doprava (return nie print)
   - pole B môžete inicializovať ako: B = []
   - príklad:
     - vstup: A = [1, 3, 5, 7, 8, 4], n = 6
     - výstup: B = [4, 1, 3, 5, 7, 8] (na prvú pozíciu sa posunie posledný prvok z A)
     - ---

5. Zapíšte algoritmus PrvySudyPoslednyLichy (A[0..n-1], n) pomocou pseudokódu:
   - vstup: A[0..n-1] - pole prirodzených čísel, n - počet prvkov poľa
   - výstup: súčet prvého sudého a posledného lichého čísla v poli (return nie print)
   - príklad:
     - vstup: A = [1, 3, 4, 6, 8, 9, 3, 2], n = 8
     - výstup: 7 (prvý sudý = 4, posledný lichý = 3, 4 + 3 = 7)

---
### :envelope: Spôsob odovzdávania úkolov
V prípade, že by ste chceli feedback k vašemu riešeniu doporučeného úkolu, môžete svoje riešenie zaslať v tejto podobe:

- Email: katarina.olejkova01@upol.cz
- Predmet: ALGO1 - Pseudokody

- Prílohy:
  - Pre odovzdanie pseudokódov a časovej zložitosti môžete poslať napr. fotku s riešením, texťák atď..
  - Pre odovzdanie kódu posielajte iba zdrojové súbory s príponou .c/.py (neodovzdávajte celé projekty) 
