class Solution:

    def __init__(self):
        self.mod = 10 ** 9 + 7
    
    def modInverse(self, a):
        return pow(a, self.mod - 2, self.mod)
    
    def nthRowOfPascalTriangle(self, n):
        ans = [1] * n
        for i in range(1, n):
            ans[i] = (ans[i - 1] * (n - i) * self.modInverse(i)) % self.mod

        return ans