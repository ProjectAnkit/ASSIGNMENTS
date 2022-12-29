class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int j=0;
    int s = n;
    while(j<n)
    {
        while(s>0)
        {
            nums1.pop_back();
            --s;
        }
        nums1.push_back(nums2[j]);
        j++;
    }
    sort(nums1.begin(),nums1.end());
    }
};
