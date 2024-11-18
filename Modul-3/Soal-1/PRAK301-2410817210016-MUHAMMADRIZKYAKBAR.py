def sort (a, b, c):
    num = [a, b, c]
    num.sort()
    return num

a, b, c = map(int, input("Masukkan 3 Bilangan: ").split()) 

sortednum = sort(a, b, c)
print("Output", *sortednum)