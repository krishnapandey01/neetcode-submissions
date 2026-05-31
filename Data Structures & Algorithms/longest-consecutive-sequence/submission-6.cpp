class Solution {
   public:
    class DSU {
        public : 
        DSU() {

        }
        unordered_map<int, int> parent, rank;
        int getParent(int a) {
            int pa = parent[a];
            if(pa == parent[pa])
                return pa;
            return parent[a] = getParent(pa);
        }
        void addNode(int a) {
            if(parent.count(a) != 0)
                return;
            parent[a] = a;
            rank[a] = 1;
        }
        bool isNodePresent(int a) { 
            return (parent.count(a) != 0);
        }
        void merge(int a, int b) {
            int pa = getParent(a);
            int pb = getParent(b);
            if(pa == pb)
                return;
            if(rank[pa] < rank[pb])
                swap(pa, pb);
            parent[pb] = pa;
            if(rank[pa] == rank[pb])
                ++rank[pa];
        }

        int getMax() {
            unordered_map<int,int> ct;
            for(auto x : parent)
                ++ct[getParent(x.first)];
            int ans = 0;
            for(auto x : ct)
                ans = max(ans, x.second);
            return ans;
        }
    };
    int longestConsecutive(vector<int>& nums) {
        DSU dsu;
        for(auto x : nums) {
            dsu.addNode(x);
            if(dsu.isNodePresent(x - 1))
                dsu.merge(x, x - 1);
            if(dsu.isNodePresent(x + 1))
                dsu.merge(x, x + 1);
        }
        return dsu.getMax();
    }
};
