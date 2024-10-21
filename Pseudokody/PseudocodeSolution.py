def JeKladne(n):
    if n > 0:
        print("ano")
    else:
        print("nie")


def SudeNeboLiche(n):
    if n % 2 == 0:
        print("sude")
    else:
        print("liche")


def Signum(n):
    if n > 0:
        return 1
    elif n == 0:
        return 0
    else:
        return -1


def Sucet(n):
    sum = 0
    for i in range(1, n + 1):
        sum = sum + i
    return sum


def Nasobilka(n):
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            sucin = i * j
            print(i, '*', j, '=', sucin)


def SucetPole(A, n):
    sum = 0
    for i in range(n):
        sum = sum + A[i]
    return sum


def AritmetickyPrumer(A, n):
    sum = 0
    for i in range(n):
        sum = sum + A[i]
    return sum / n


def Znamka(n):
    if n >= 90 and n <= 100:
        print('A')
    elif n >= 80 and n <= 89:
        print('B')
    elif n >= 70 and n <= 79:
        print('C')
    elif n >= 60 and n <= 69:
        print('D')
    elif n >= 50 and n <= 59:
        print('E')
    else:
        print('F')


def PocetLichychASudych(A, n):
    liche = 0
    sude = 0
    for i in range(n):
        if A[i] % 2 == 0:
            sude = sude + 1
        else:
            liche = liche + 1
    print("Pocet sudych:", sude)
    print("Pocet lichych:",liche)


def MinMaxRozdiel(A, n):
    min = A[0]
    max = A[0]
    for i in range(1, n):
        if A[i] < min:
            min = A[i]
        elif A[i] > max:
            max = A[i]
    rozdiel = max - min
    return rozdiel    


# Priklad 1
JeKladne(20)		    # ocakavam "ano"

# Priklad 2
SudeNeboLiche(13)	    # ocakavam "liche"

# Priklad 3
sign = Signum(-5)
print("vysledok Signum:", sign)	# ocakavam -1

# Priklad 4
sucet = Sucet(6)
print("vysledok Sucet:", sucet) # ocakavam 21

# Priklad 5
Nasobilka(5)  # ocakavam vypis nasobilky (moze byt pod seba): 1 * 1 = 1, 1 * 2 = 2 ... 5 * 5 = 25


# Priklad 6
pole1 = [2, 4, 6, 8, 10, 12]
velkost1 = 6

sucet_p = SucetPole(pole1, velkost1)
print("vysledok SucetPole:", sucet_p)   # ocakavam 42


# Priklad 7
pole2 = [1, 5, 3, 7, 9, 4, 8, 2]
velkost2 = 8

aritmeticky = AritmetickyPrumer(pole2, velkost2)
print("vysledok AritmetickyPrumer:", aritmeticky)   # ocakavam 4.875


# Dobrovolny 1
body = 75
Znamka(body)    # ocakavam C


# Dobrovolny 2
pole3 = [ 1, 4, 3, 2, 9]
velkost3 = 5

PocetLichychASudych(pole3, velkost3);   # ocakavam 2 sude, 3 liche


# Dobrovolny 3
pole4 = [ 3, 4, 5, 2, 8 ]
velkost4 = 5

rozdiel = MinMaxRozdiel(pole4, velkost4)
print("vysledok MinMaxRozdiel:", rozdiel);    # ocakavam 6