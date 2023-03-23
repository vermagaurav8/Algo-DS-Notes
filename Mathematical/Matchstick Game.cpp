class Solution {
  public:
    int matchGame(long long N) {
        // code here
        return (int) (N%5L == 0 ? -1 : N%5L);
    }
};
