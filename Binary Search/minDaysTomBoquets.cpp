//Minimum Number of Days to Make m Bouquets
class Solution {
private:
    bool check(vector<int>bloomDay, int harvestDay, int k, int m) {
        int count = 0, size = 0;
        for(int i = 0; i < bloomDay.size() ; i++) {
            if(bloomDay[i] > harvestDay) size=0;
            else size++;

            if(size == k){
                count++;
                size=0;
            }
        }

        return count>=m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        //Base
        if(m*k > bloomDay.size()) return -1;

        int low = *min_element(begin(bloomDay), end(bloomDay));
        int hig = *max_element(begin(bloomDay), end(bloomDay));

        while(low < hig) {
            int mid =  low + (hig-low)/2;

            if(check(bloomDay, mid, k, m)) {
                hig = mid;
            } else {
                low = mid+1;
            }
        }
        return low;
    }
};