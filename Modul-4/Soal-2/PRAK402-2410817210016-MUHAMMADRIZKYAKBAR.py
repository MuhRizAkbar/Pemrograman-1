limit = int(input("Limit: "))

odd = [str(i) for i in range(1, limit + 1, 2)]
print(" ", " ".join(odd))

even = [str(i) for i in range(limit if limit % 2 == 0 else limit - 1, 1, -2)]
print(" ", " ".join(even))