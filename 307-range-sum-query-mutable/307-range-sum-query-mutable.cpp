class NumArray {
    vector<int> tree;
    vector<int> a;
    int n;
    
    void build(int node, int l, int r){
        if(l == r) tree[node] = a[l];
        if(l < r){
            int mid = (l+r)>>1;
            build(2*node+1, l , mid);
            build(2*node+2,mid+1,r);
            tree[node] = tree[2*node+1] + tree[2*node+2];
        }
    }
    
    int query(int ind, int lo, int hi, int l ,int r){
        if(hi < l || lo > r) return 0;
        
        if(lo >= l && hi <= r) return tree[ind];
        
        int mid = (lo+hi)/2;
        int left = query(ind*2+1,lo,mid,l,r);
        int right = query(ind*2+2,mid+1,hi,l,r);
        return left+right;
    }
    
    void update(int ind, int lo,int hi, int i , int val){
        if(lo == hi){
            tree[ind] = val;
            return;
        }
        
        int mid = (lo+hi)/2;
        if(i <= mid) update(ind*2+1,lo,mid,i,val);
        else update(ind*2+2,mid+1,hi,i,val);
        tree[ind] = tree[ind*2+1] + tree[ind*2+2];
    }
public:
    
    NumArray(vector<int>& nums) {
        a = nums;
        n = nums.size();
        tree = vector<int> (4*n);
        build(0,0,n-1);
    }
    
    void update(int index, int val) {
        update(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return query(0, 0, n - 1, left, right);
    }
};
