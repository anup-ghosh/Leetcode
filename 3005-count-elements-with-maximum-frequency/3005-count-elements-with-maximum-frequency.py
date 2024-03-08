class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        fre = {}
        mx = 0
        for i in nums:
            fre[i] = nums.count(i)
            mx = max(mx,fre[i])
        ans=0
        for k, v in fre.items():
            if(v==mx):ans+=mx
        print (mx)
        return ans