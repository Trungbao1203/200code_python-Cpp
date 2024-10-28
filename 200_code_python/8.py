# Viết bằng PYTHOn
# Tính chu vi, diện thích hình tròn: Nhập bán kính và in ra chi vi, diện tích hình tròn.

import math
 
# Nhập bán kính hình tròn
r = float(input("Ban kinh hinh tron la: "))

# Kiểm tra điều kiện bán kính > 0
if r > 0:
    # Tính chu vi hình tròn
    C = 2 * math.pi * r
    # Tính diện tích hình tròn
    S = math.pi * r * r
    # In kết quả
    print("Chu vi hinh tron la: ", C)
    print("Dien tich hinh tron la: ", S)
else:
    print(" Ban kinh phai lon hon 0.")
