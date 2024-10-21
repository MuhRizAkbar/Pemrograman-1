import math

a = 5
t = 12
m = math.sqrt ((a*a)+(t*t))

print("Diketahui :")
print(f"Alas = {a}")
print(f"Tinggi = {t}\n")
print("Jawab:")
print(f"Sisi A  = {a} cm")
print(f"Sisi B  = {t} cm")
print(f"Sisi C = {m : .0f} cm")
print(f"Keliling ={ a+t+m : .0f} cm")
print(f"Luas = {a*t/2 : .0f} cm")
