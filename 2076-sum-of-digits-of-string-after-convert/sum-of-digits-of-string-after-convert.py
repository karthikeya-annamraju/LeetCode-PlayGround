class Solution:

    def getLucky(self, s: str, k: int) -> int:
        def getSum(n):
            s = 0
            while(n > 0):
                rem = n%10
                s+=rem
                n//=10
            return s
        st = 0
        ans = ""
        for i in s:
            st=(ord(i)-(ord('a')-1))
            ans+=str(st)

        for i in range(k):
            ans = getSum(int(ans))
        return ans
