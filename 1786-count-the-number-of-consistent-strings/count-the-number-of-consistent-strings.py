class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        cnt = len(words)
        for i in words:
            for j in i:
                if j not in allowed:
                    cnt-=1
                    break
        return cnt
