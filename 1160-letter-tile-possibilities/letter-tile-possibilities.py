class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        from itertools import permutations
        unique_strings=set()
        for i in range(1,len(tiles)+1):
            perm_string = permutations(tiles,i)
            for perm in perm_string:
                perm_str = ''.join(perm)
                if perm_str not in unique_strings:
                    unique_strings.add(perm_str)
        return len(unique_strings)