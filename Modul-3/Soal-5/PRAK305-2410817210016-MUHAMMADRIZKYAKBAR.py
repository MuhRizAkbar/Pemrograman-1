Input = int(input("Masukkan Nilai: "))

hr = Input // 3600
min = (Input % 3600) // 60
sec = Input & 60

print(f"Jam: {hr:02}:{min:02}:{sec:02} ")
