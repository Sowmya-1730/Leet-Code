class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        vector<int>res;
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end() && m[nums1[i]]!=0)
            {
                res.push_back(nums1[i]);
                m[nums1[i]]-=1;
            }
        }
        return res;
    }
};