class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        n = len(prices)
        ans = []
        for i in range(0,n):
            for j in range(i+1,n):
                if (prices[j]<=prices[i]):
                    prices[i]=prices[i]-prices[j]
                    break
        return prices