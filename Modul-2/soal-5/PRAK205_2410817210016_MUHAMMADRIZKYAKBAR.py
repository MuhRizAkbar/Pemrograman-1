import math

def pythagoras(a, b):
    
    c = math.sqrt(b**2 - a**2)
    
    keliling = a + b + c
    
    luas = (c * a) / 2
    
    return c, a, keliling, luas

nilai = input("Masukkan nilai A dan B : ")
a, b = map(int, nilai.split())

alas, tinggi, keliling, luas = pythagoras(a, b)

print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")
