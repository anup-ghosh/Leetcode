class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        c = defaultdict(int)
        ans = []
        n = len(nums)
        for i in nums:
            c[i]=1+c[i]
        for i in range(1,n+1):
            if c[i]==0:
                ans.append(i)
        return ans
            
        