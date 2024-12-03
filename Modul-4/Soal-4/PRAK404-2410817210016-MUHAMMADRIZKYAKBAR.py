def kalkulator():
    while True:
        print("\nPilih operasi:")
        print("1. Penjumlahan (+)")
        print("2. Pengurangan (-)")
        print("3. Perkalian (*)")
        print("4. Pembagian (/)")
        print("5. Keluar")

        OP= input("Masukkan pilihan Anda (1-5): ")

        if OP == '5':
            print("Terimakasih, telah menggunakan kalkulator Akbar!")
            break

        if OP in ['1', '2', '3', '4']:
            try:
                num1 = float(input("Angka pertama: "))
                num2 = float(input("Angka kedua: "))

                if OP == '1':
                    print(f"Hasilnya adalah: {num1 + num2}")
                elif OP == '2':
                    print(f"Hasilnya adalah: {num1 - num2}")
                elif OP == '3':
                    print(f"Hasilnya adalah: {num1 * num2}")
                elif OP == '4':
                    if num2 != 0:
                        print(f"Hasilnya adalah: {num1 / num2}")
                    else:
                        print("Error: Tidak bisa dibagi 0")
            except ValueError:
                print("Kesalahan: Harap masukkan Angka yang valid.")
        else:
            print("Input anda salah, silahkan coba lagi")

kalkulator()
