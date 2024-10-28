# Viết bằng PYTHON
# Tính tổng các số từ 1 đến n

# Nhập một số từ bàn phím
n = int(input("Nhập một số n: "))

# Tính tổng từ 1 số n
tong = 0
for i in range(1, n+1):
    tong += i

# In kết quả
print(f"Tong cac so tu 1 den {n} la: {tong}")
