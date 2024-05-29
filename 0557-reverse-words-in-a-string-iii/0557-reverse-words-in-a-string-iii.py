class Solution:
    def reverseWords(self, s: str) -> str:
        aa = s.split()
        ans = []
        for i in aa:
            ans.append("".join(reversed(i)))
        
        res = " ".join(ans)
        return res