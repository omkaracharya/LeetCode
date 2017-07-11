class Solution {
public:
    double cal_dist(pair<int, int> a, pair<int, int> b) {
        return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
    }
    
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int ans = 0;
        int n = points.size();
        
        for (int i = 0; i < n; ++i) {
            unordered_map <double, int> hashmap;
            for (int j = 0; j < n; ++j) {
                if (i != j)
                    hashmap[cal_dist(points[i], points[j])]++;
            }
            
            for (auto kv : hashmap) {
                if (kv.second > 1)
                    ans += kv.second * (kv.second - 1);
            }
        }
        
        return ans;
    }
};