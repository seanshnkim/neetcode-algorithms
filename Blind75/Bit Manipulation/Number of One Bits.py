n = 1429034
cnt = 0
bit = 1 << 31
while bit >= 1:
    if n & bit:
        cnt += 1
    bit >>= 1
print(cnt)