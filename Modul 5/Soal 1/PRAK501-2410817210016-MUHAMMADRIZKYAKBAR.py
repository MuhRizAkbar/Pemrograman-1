def MaxBil(a, b, c, d):
    return max(a, b, c, d)

a, b, c, d = map(int, input("Bilangan: ").split())

hasil = MaxBil(a, b, c, d)

print(f"Terbesar: {hasil}")