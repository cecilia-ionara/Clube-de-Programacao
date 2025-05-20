import math


a = int(input("Informe o lado a: "))
b = int(input("Informe o lado b: "))
c = int(input("Informe o lado c: "))

#Regra da desigualdade triangular
if a + b > c and a + c > b and b + c > a:
    if a == b and b == c:
        print("É equilátero")
    elif a == b or b == c or a == c:
        print("É isósceles")
    else:
        print("É escaleno")
        
    # Cálculo do perímetro
    perimetro = a + b + c

    # Cálculo da área usando a fórmula de Heron
    s = perimetro / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))

    print(f"Área: {area:.2f}")
    print(f"Perímetro: {perimetro}")
else:
    print("Os valores informados não formam um triângulo.")
