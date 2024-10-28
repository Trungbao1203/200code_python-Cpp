# Viết bằng PYTHON
# Tìm chữ cái đầu tiên và cuối cùng của chuỗi: Nhập một chuỗi và tìm chữ cái đầu và cuối.

# Nhập chuỗi từ bàn phím
s = input("Nhập một chuỗi: ")

# Tìm chữ cái đầu và cuối của chuỗi
if len(s) > 0:
    chu_cai_dau = s[0];
    chu_cai_cuoi = s[-1] # Lấy chữ cái cuối cùng
    print(f"Chữ cái đầu tiên là: {chu_cai_dau}")
    print(f"Chữ cái cuối là: {chu_cai_cuoi}")
else:
    print("Chuỗi rỗng, không có ký tự để hiển thị.")