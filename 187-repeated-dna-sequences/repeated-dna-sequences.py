class Solution:
    def findRepeatedDnaSequences(self, s: str) -> List[str]:
        if len(s) < 10:
            return []
        mapping = {'A': 0, 'C': 1, 'G': 2, 'T': 3}
        seen = set()
        repeated = set()
        hash_val = 0
        result = []

        for i in range(len(s)):
            hash_val = (hash_val << 2) | mapping[s[i]]
            if i >= 9:
                hash_val &= (1 << 20) - 1 
                if hash_val in seen:
                    repeated.add(s[i-9:i+1])
                else:
                    seen.add(hash_val)

        return list(repeated)