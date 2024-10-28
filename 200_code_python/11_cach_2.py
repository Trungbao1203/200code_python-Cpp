# Viết bằng PYTHON
# Tìm số nhỏ nhất tỏng ba số

# Nhập ba số từ bàn phím
list = []
for i in range (3):
    so = float(input(f"Nhap so thu {i + 1}: "))
    list.append(so) #không có gán cho so
    
# Tìm số nhỏ nhất
so_nho_nhat = list [0]
for so in list:
    if so < so_nho_nhat:
        so_nho_nhat = so

# In kết quả
print("So nho nhat la: ", so_nho_nhat)