# Viết bằng PYTHON
# Tìm số lớn nhất trong ba số

# Nhập ba số từ bàn phím
a = float(input("Nhap so thu nhat a: "))
b = float(input("Nhap so thu hai b: "))
c = float(input("Nhap so thu ba c: "))

# Tìm số lớn nhất
"""if a >= b and a >= c:
    so_lon_nhat = a
elif b >= a and b>= c:
    so_lon_nhat = b
else :
    so_lon_nhat = c"""
so_lon_nhat = max(a, b, c)

# In kết quả
print("So lon nhat là: ", so_lon_nhat)