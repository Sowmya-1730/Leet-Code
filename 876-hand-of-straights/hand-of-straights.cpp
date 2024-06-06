class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>m;
        for(auto i:hand){
            m[i]++;
        }
        if(hand.size()%groupSize!=0)return false;
        for(auto [i,freq]:m)
        {
            if(freq==0)continue;
            while(freq--){
                for(int c=i;c<i+groupSize;c++)
                {
                    if(m[c]==0)return false;
                    m[c]--;
                }
            }
        }
        return true;
    }
};