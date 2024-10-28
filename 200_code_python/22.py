# Viết bằng PYTHON
# In các ký tự riêng biệt của chuỗi: Nhập một chuỗi và in các ký tự riêng biệt.

# Nhập chuỗi từ bàn phím
chuoi = input("Nhap mot chuoi: ")

# Tạo một tập hợp để lưu các ký tự riêng biệt
ky_tu_rieng_biet = set(chuoi) # set() sẽ loại bỏ các phần tử trùng lập

# In các ký tự riêng biệt
print("Cac ky tu rieng biet trong chuoi la: ")
for ky_tu in ky_tu_rieng_biet:
    print(ky_tu)