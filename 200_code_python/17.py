# Viết bằng PYTHON
# Tính số Fibonacci thứ n: Nhập số n và in ra số Fibonacci thứ n.

# Nhập số n từ bàn phím
n = int(input("Nhap so n: "))

# Hàm tính Fibonacci bằng cách sử dụng vòng lặp
def fibonacci(n):
    if n <= 0:
        return "So nhap vao phai lon hon 0."
    elif n == 1 or n == 2:
        return 1
    else:
        a, b = 1, 1
        for i in range(3, n + 1):
            a, b = b, a + b
        return b

# In ra số Fibonacci thứ n
print(f"So Fibonacci thu {n} la: {fibonacci(n)}")