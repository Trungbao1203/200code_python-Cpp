# Viết bằng PYTHON
# Tính thương hai số: Nhập hai số và in ra thương của chúng.

# Nhập hai số từ bàn phím
a = float(input("Nhap a: "))
b = float(input("Nhap b: "))

# Kiểm tra nếu b khác 0
if b != 0 :
    #Tính thương hai số
    T = a/b
    #In kết quả
    print("Thuong hai so: ", T)
else: 
    print("Khong chia duoc cho 0.")