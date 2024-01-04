def giai_thua(n):
  if n == 0:
    return 1
  return n * giai_thua(n - 1)

n, k = map(int, input().split())
out_put = giai_thua(n) // (giai_thua(k) * giai_thua(n - k))
print(out_put)
