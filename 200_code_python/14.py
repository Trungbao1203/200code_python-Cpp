# Viết bằng Python
# Tính gia thừa của một số: Nhập một số và tính gia thừa của nó.

# Nhập một số từ bàn phím
n = int(input("Nhap mot so: "))

# Tính gia thừa
gia_thua = 1
if n < 0:
    print("Khong co giai thua cua so am.")
elif n == 0:
    print("Gia thua cua o la 1.")
else:
    for i in range(1, n + 1):
        gia_thua *= i
    print("Gia thua cua " , n , " la", gia_thua)
