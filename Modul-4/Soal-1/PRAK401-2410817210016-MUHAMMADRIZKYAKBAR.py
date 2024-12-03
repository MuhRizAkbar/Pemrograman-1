mtp = int(input("Kelipatan: "))
pgt = input("Pengganti: ")

for i in range (1,51):
    if i % mtp == 0:
        print(pgt, end=" ")
    else:
        print(i, end=" ")

    if i % 10 == 0:
        print()