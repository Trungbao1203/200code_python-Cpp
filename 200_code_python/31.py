# Viết bằng C++
# Tính tổng các số trong danh sách: Nhập một danh sách các số và tính tổng của chúng.

# Nhập danh sách các số từ bnaf phím
danh_sach = list(map(int, input("Nhập các số cách nhau bởi dấu cách: ").split()))

# Tính tổng của các số trong danh sách
tong = sum(danh_sach) # Sử dụng ham sum() để tính tổng

# In tổng của các số
print("Tổng của các số trong danh sách là: ", tong)