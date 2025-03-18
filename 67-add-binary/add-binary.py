class Solution:
    def addBinary(self, a: str, b: str) -> str:
        x = int(a, 2)
        y = int(b, 2)
        s = x + y
        s = bin(s)
        s = str(s)
        s = s.replace("0b", "")
        return s