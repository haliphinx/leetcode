class Solution:
    def fourSum(self, n: List[int], t: int) -> List[List[int]]:
        if not n: return []
        n.sort()
        L = len(n)
        d = {j:i for i, j in enumerate(n)}
        print(d)
        ans = set()
        N = n[-1]
        for i, a in enumerate(n[:-3]):
            if a + 3 * N < t: continue
            if 4 * a > t: break

            for j in range(i + 1, L - 2):
                b = n[j]
                if a + b + 2 * N < t: continue
                if a + 3 * b > t: break

                for k in range(j + 1, L - 1):
                    c = n[k]
                    temp = t - a - b - c
                    if temp > N: continue
                    if temp < c: break
                    if temp in d and d[temp] > k: ans.add((a, b, c, temp))
        return ans