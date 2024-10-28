# Viết bằng PYTHON
# Tính diện tích hình tam giác

# Nhập chiều cao và đáy từ bàn phím
h = float(input("Nhap chieu cao h cua hinh chu nhat: "))
d = float(input("Nhap do dai day d cua hinh chu nhat: "))

# Kiểm tra điều kiện chiều cao và độ dày đáy > 0
if h > 0 and d > 0 :
    # Tính diện tích hình chữ nhật
    S = 0.5 * h * d
    # In kết quả
    print("Dien tich hinh chu nhat la: ", S)
else: 
    print("Chieu cao và do dai day phai lon hon 0.")