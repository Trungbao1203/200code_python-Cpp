# Viết bằng PYTHON
# Kiểm tra chuỗi đối xứng: Nhập một chuỗi và kiểm tra xem nó có phải là chuỗi đối xứng không.

# Nhập chuỗi từ bàn phím
chuoi = input("Nhap mot chuoi: ")

# Kiểm tra chuỗi đối xứng

if chuoi == chuoi[::-1]: # [::-1] sẽ đảo ngược chuỗi
    print("Chuoi nay la chuoi doi xung.")
else:
    print("Chuoi nay khong phai la chuoi doi xung.")
