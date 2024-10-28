#Viết bằng PYTHON
# Tính số lượng chữ cái trong chuỗi: Nhập một chuỗi và đếm số lượng chữ cái trong chuỗi.

# Nhập chuỗi từ bàn phím
chuoi = input("Nhap mot chuoi: ")

# Đếm số lượng chữ cái trong chuỗi
so_luong_chu_cai = 0
for ky_tu in chuoi:
    if ky_tu.isalpha(): #kiểm tra nếu ký tự là chữ cái
        so_luong_chu_cai += 1 # tăng biến lên 1

# In kết quả
print(f"So luong chu cai trong chuoi la: {so_luong_chu_cai}")