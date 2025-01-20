class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        rows_cnt = len(mat)
        cols_cnt = len(mat[0])
        
        d = {}
        for i in range(rows_cnt):
            for j in range(cols_cnt):
                if mat[i][j] not in d:
                    d[mat[i][j]] = []
                d[mat[i][j]].append((i, j))
        
        rows = [0] * rows_cnt
        cols = [0] * cols_cnt
        
        for i, target in enumerate(arr):
            if target in d:
                for r, c in d[target]:
                    rows[r] += 1
                    cols[c] += 1
                    if rows[r] == cols_cnt or cols[c] == rows_cnt:
                        return i

