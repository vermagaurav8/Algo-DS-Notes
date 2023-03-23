
typedef pair<int, pair<int, int>> pi; 

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    priority_queue <pi, vector<pi>, greater<pi> > pq; 
    for(int j=0;j<n;j++){
        pq.push(make_pair(mat[0][j],make_pair(0,j)));
    }
    int ans = -1;
    pair<int, pair<int, int>> pp;
    while(k--) {
        pp = pq.top();
        pq.pop();
        int r = pp.second.first;
        int c = pp.second.second;
        if(r+1<n){
            pq.push(make_pair(mat[r+1][c],make_pair(r+1,c))); 
        }
    }
    return pp.first;
}
