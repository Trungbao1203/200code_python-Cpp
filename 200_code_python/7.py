# Viết bằng PYTHON
# Tính diện tích hình chữ nhật: Nhập chiều dài, chiều rộng và in ra chu vi, diện tích của hình chữ nhật.

# Nhập chiều dài và chiều rộng
a = float(input("Nhap chieu dai a: "))
b = float(input("Nhap chieu rong b: "))

# Kiểm tra chiều dài và chiều rộng phải lớn hơn 0
if a > 0 and b > 0 :
    # Tính chu vi và diện tích hình chữ nhật
    C = a + b
    S = a*b
    # In kết quả
    print("Chu vi hinh chu nhat la: ", C)
    print("Dien tich hinh chu nhat la: ", S)
else:
    print("Chieu dai va chieu rong phai khac 0.")
