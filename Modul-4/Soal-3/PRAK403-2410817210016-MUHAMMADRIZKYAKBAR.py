def Crossnum(a, b):
    step = 1 if a < b else -1
    x, y = a, b

    hasil = []
    while (step == 1 and x <= b and y >= a) or (step == -1 and x >= b and y <= a):
        hasil.append(f"{x} {y}")
        x += step
        y -= step

    print(" - ".join(hasil))


angka1, angka2 = map(int, input("Masukkan angka: ").split())
Crossnum(angka1, angka2)
