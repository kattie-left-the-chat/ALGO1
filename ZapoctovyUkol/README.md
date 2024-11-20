# Zápočtový úkol
- Prevzaté z [Tomáš Urbanec - Algoritmy 1 Zápočtový úkol](https://apollo.inf.upol.cz/~urbanec/teaching/2024/algo1/algorithm-design-1.html)
- Zá úkol lze získat maximálně 10 bodů - **1. úkol** max 7 bodů, **2. úkol** max 3 body
- Termín odevzdání: **18.12.2024, 23:59 CET**
- Pozdní odevzdání bude penalizováno

---
### :envelope: Spôsob odovzdávania úkolov
- Email: katarina.olejkova01@upol.cz
- Predmet: ALGO1 - Zapocet
- Predmet emailu dodržujte pro automatické zpracování

---
### :grey_question: Zadání
**1. úkol** (7 bodů) V jazyce C nebo Pythonu implementujte funkce s hlavičkami:
   #### pro C:
     - int insertion_sort_with_counting(int pole[], int velikost, int poradi)
     - int merge_sort_with_counting(int pole[], int velikost, int poradi)
     - int merge_insertion_sort_with_counting(int pole[], int velikost, int poradi, int mezni_velikost)
   #### pro Python:
     - insertion_sort_with_counting(pole, poradi)
     - merge_sort_with_counting(pole, poradi)
     - merge_insertion_sort_with_counting(pole, poradi, mezni_velikost)
 
- Funkce **setřídí** dodané pole odpovídajícím algoritmem a přitom **spočítají, kolik porovnání dvou prvků** z pole algoritmus provedl.
- Výslednou hodnotu funkce vrátí volajícímu. 
- Třetí funkce (merge_insertion_sort_with_counting) implementuje myšlenku kombinování merge a insertion sortu popsanou na slidu 86 z druhé části prezentací prof. Bělohlávka (tj. slidy z přednášek).

#### Význam a typ argumentů:
- `pole` je pole celých čísel k setřídění (v Pythonu seznam)
- `velikost` je přirozené číslo vyjadřující počet prvků v poli pole (v Pythonu nepotřebujeme)
- `poradi` určuje, jak má být pole setřízeno, je-li poradi záporné číslo, tak sestupně, v jiném případě vzestupně
- `mezni_velikost` u kombinace merge a insertion sortu je maximální velikost pole (přirozené číslo), pro kterou se použije insertion sort
- Poznámka: přirozená i celá čísla stačí uvažovat z rozsahu typu integer

#### Za pomocí těchto funkcí poté napište malý program, který provede následující:
- Vygeneruje náhodné pole s 100 000 prvky.
- Setřídí jej každou z dodaných funkcí vzestupně.
- Na standardní výstup vypíše informaci o tom, kolik porovnání mezi prvky z pole každá z funkcí provedla.
- Pro kombinaci merge a insertion sortu zkuste nalézt optimální nastavení pro mezni_velikost.
- **Pozor** - každá z funkcí musí mít stejné výchozí pole (tj. stejné prvky ve stejném pořadí), aby výsledky mělo smysl porovnávat.
- - ---


**2. úkol** (3 body) Nalezněte a dokažte **alespoň pět** asymptotických vztahů mezi těmito funkcemi:
- vztahy k dokázaní si vyberte sami
- vztah funkce k sobě samé se nepočítá
  
   - log(log(n))
   - n!
   - n<sup>4</sup>
   - n<sup>1/4</sup>
   - 4<sup>n</sup>
   - n<sup>n</sup>
- ---


### :mailbox: Kontakt
V prípade akýchkoľvek dotazov ohľadom zápočtového úkolu ma neváhajte kontaktovať na katarina.olejkova01@upol.cz
