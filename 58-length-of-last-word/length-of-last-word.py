class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        cnt = 0
        for i in range(len(s)-1, -1, -1):
            if s[i] == " " and cnt == 0:
                continue
            if s[i] == " " and cnt > 0:
                break
            cnt+=1
        return cnt