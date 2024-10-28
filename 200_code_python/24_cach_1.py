# Viết bằng PYTHON
# Chuyển đổi chuỗi thành chữ hoa: Nhập một chuỗi và chuyển đổi tất cả các ký tự thành chữ hoa.

# CÁCH 1: Sử dụng bằng mã ASCII để chuyển đổi ký tự

# Nhập chuỗi từ bàn phím
s = input("Nhập một chuỗi: ")

# Chuyển chuỗi thành chữ hoa
chuoi_hoa =''
for char in s:
    # Kiểm tra nếu ký tự là chữ thường, chuyển đổi thành chữ hoa
    if 'a' <= char <= 'z:':
        chuoi_hoa += chr(ord(char) - 32) # Dùng bằng mã ASCII để chuyển đổi chữ thường thành chữ hoa
        # chr(ord(char) - 32) chuyển đổi ký tự char thành chữ hoa bằng cách trừ 32 trong bảng mã ASCII
    else:
        chuoi_hoa += char # Giữ nguyên nếu không phải chữ thường

# In chuỗi đã chuyển đổi
print(f"Chuỗi chữ hoa: {chuoi_hoa}")