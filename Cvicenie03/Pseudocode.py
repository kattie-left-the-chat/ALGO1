# def JeKladne(n):


# def SudeNeboLiche(n):
#     # TO-DO

# def Signum(n):
#     # TO-DO

# def Sucet(n):
#     # TO-DO

# def Nasobilka(n):
#     # TO-DO

# def SucetPole(A, n):
    

# def AritmetickyPrumer(A, n):
#     # TO-DO


#---------Priradenie----------
i = 5
j = i * 2

f = 3.14

a = 'f'
s = "Hello"


#---------Aritmeticke---------
x = 5
y = 2

plus = x + y
minus = x - y
krat = x * y
deleno1 = x / y	
deleno2 = int(x / y)    # Celociselne		
modulo = x % y;			

# Jedna premenna
print("premenna i:", i)
print("premenna j:", j)
print("premenna f:", f)
print("premanna f:", f)
print("premenna a:", a)
print("premenna s:", s)

print("plus:", plus)
print("minus:", minus)
print("krat:", krat)
print("deleno1:", deleno1)
print("deleno2:", deleno2)
print("modulo:", modulo)

# Viac premennych
print(x, "plus", y, "sa rovna", plus)

#---------Logicke---------
c = 5

rovna_sa = (c == 5)						# Pouzivam zatvorky okolo vyrazu na pravej strane kvoli lepsej citelnosti
nerovna_sa = (c != 5)
je_vacsie = (c > 7)
je_mensie = (c < 6)
je_vacsie_rovne = (c >= 5)
je_mensie_rovne = (c <= 5)
vyraz1 = (c == 5) and (c < 4)
vyraz2 = (c > 6) or (c < 7)

print("rovna_sa:", rovna_sa)
print("nerovna_sa:", nerovna_sa)
print("je_vacsie:", je_vacsie)
print("je_mensie:", je_mensie)
print("je_vacsie_rovne:", je_vacsie_rovne)
print("je_mensie_rovne:", je_mensie_rovne)
print("vyraz1:", vyraz1)
print("vyraz2:", vyraz2)


#---------Podmienene---------
# if
podmienka1 = vyraz1 or vyraz2

if podmienka1:
	print("if: podmienka1 je true")

# if else
if c != 4 and c <= 5:
	print("if else: podmienka je true")
else:
	print("if else: podmienka je false")

# if elif else
if False:
	print("if else-if else: podmienka1 je true")
elif 3:
	print("if else-if else: podmienka2 je true")
else:
	print("if else-if else: podmienka1 a podmienka2 su false")


#----------Cykly---------
# for
n = 10

for i in range (0, n):     # 0..n-1
	print("for i:", i)

# while
i = 0

while (i < n):
	print("while i:", i)
	i = i + 1			    # alebo mozme pouzit i++;

# do-while
i = 0

while(True):
    print("do-while i:", i)
    i = i + 1
    if (i <= n):
        continue
    else:
        break


#----------Priklady---------

# Priklad 1
#JeKladne(20)		    # ocakavam "ano"

# Priklad 2
#SudeNeboLiche(13)	    # ocakavam "liche"

# Priklad 3
#sign = Signum(-5)
#print("vysledok Signum:", sign)	# ocakavam -1

# Priklad 4
#sucet = Sucet(6)
#print("vysledok Sucet:", sucet) # ocakavam 21

# Priklad 5
#Nasobilka(5)  # ocakavam vypis nasobilky (moze byt pod seba): 1 * 1 = 1, 1 * 2 = 2 ... 5 * 5 = 25

# Priklad 6
#pole1 = [2, 4, 6, 8, 10, 12]
#velkost1 = 6

#sucet_p = SucetPole(pole1, velkost1)
#print("vysledok SucetPole:", sucet_p)   # ocakavam 42

# Priklad 7
#pole2 = [1, 5, 3, 7, 9, 4, 8, 2]
#velkost2 = 8

#aritmeticky = AritmetickyPrumer(pole2, velkost2)
#print("vysledok AritmetickyPrumer:", aritmeticky)   # ocakavam 4.875