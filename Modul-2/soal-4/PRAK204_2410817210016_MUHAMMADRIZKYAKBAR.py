r = float(input("Masukkan jari-jari: "))
t = float(input("Masukkan tinggi: "))

pi = 22 / 7

volume = pi * r**2 * t

luas = 2 * pi * r * (r + t)

keliling = 2 * pi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
