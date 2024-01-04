def nen_xau(S):
    n = len(S)
    for i in range(1, n+1):
        T = S[:i]
        K = n // i
        if T * K == S:
            return f"{K}{T}"
    return S
S = input()
print(nen_xau(S))
