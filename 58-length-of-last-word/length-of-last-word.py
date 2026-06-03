class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lengthOfLastWord = 0

        for i in range(len(s)-1, -1, -1):
            if s[i] == " " and lengthOfLastWord == 0:
                continue
            elif s[i] == " " and lengthOfLastWord > 0:
                break
            lengthOfLastWord+=1

        return lengthOfLastWord