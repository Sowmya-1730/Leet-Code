class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        len1 = len(s1)
        sorted_s1 = sorted(s1)

        for i in range(len(s2) - len1 + 1):
            if sorted(s2[i:i+len1]) == sorted_s1:
                return True

        return False