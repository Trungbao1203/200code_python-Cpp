# Viết bằng PYTHON
# Tạo danh dách từ chuỗi: Nhập một chuỗi và tạo dánh sách từ chuỗi đó.

# Nhập một chuỗi từ bàn phím
chuoi = input("Nhập một chuỗi: ") # Ví dụ:"Python là ngôn ngữ lập trình phổ biến nhất"

#Tạo danh sách từ chuỗi bằng cách tách chuỗi theo khoảng trắng
danh_sach_tu = chuoi.split() # mặc định là tách chuỗi theo khoảng trắng

# In danh sách các từ
print(f"Danh sách các từ là: {danh_sach_tu}")
