class Solution:
    def minimumChairs(self, s: str) -> int:
        chairs = 0
        m = 0
        for i in s:
            if i == 'E':
                chairs+=1
                m = max(m,chairs)
            else:
                chairs-=1
                m = max(m,chairs)
        return m