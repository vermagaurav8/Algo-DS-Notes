class myComparator
{
    public:
        bool operator()(int &a, int &b)
        {
            return a > b;
        }
};

class Solution
{
public:
    int maxArea(vector<bool> mat[], int r, int c){
        // code here
        vector<vector<int>> auxMat(r, vector<int>(c, 0));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == 0)
                {
                    if (mat[i][j])
                    {
                        auxMat[i][j] = 1;
                    }
                }
                else
                {
                    auxMat[i][j] = mat[i][j] ? auxMat[i - 1][j] + 1 : 0;
                }
            }
        }

        for (int i = 0; i < r; i++)
        {
            sort(auxMat[i].begin(), auxMat[i].end(), myComparator());
        }
        int maxArea = -1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                maxArea = max(maxArea, (j + 1) * auxMat[i][j]);
            }
        }
        return maxArea;
    }
};
