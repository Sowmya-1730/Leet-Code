class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        ball={}
        paint={}
        res=[]
        for i in range(len(queries)):
            b,c=queries[i][0],queries[i][1]
            if b in ball:
                old_paint=ball[b]
                if old_paint!=c:
                    paint[old_paint]-=1
                    if paint[old_paint]==0:
                        del paint[old_paint]
                    ball[b]=c
                    paint[c]=paint.get(c,0)+1
            else:
                ball[b]=c
                paint[c]=paint.get(c,0)+1
            res.append(len(paint))
        return res