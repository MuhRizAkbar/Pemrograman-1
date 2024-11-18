Value = int(input("Masukkan Nilai: "))

if Value >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif Value == 0:
    print("Nol")
elif Value >= 20:
    print("Puluhan")
elif Value >= 10:
    print("Belasan")
elif Value >= 1:
    print("Satuan")
else:
    print("Invalid")