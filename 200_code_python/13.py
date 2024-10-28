# Viết bằng PYTHON
# Kiểm tra một số nhập vào từ bàn phím là số chẵn hay số lẻ.

# Nhập số từ bàn phím
a = int(input("Nhap mot so: "))

# Kiểm tra chẵn hay lẻ
if a % 2 == 0:
    print("So " + str(a) + " la so chan.")
else:
    print("So " + str(a) + " la so le.")