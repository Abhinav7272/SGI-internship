class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        int n = grid.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        int a = i + dir[i][0];
                        int b = j + dir[i][1];
                        if (i == 0 || i == n - 1)
                        {
                            count++;
                        }
                        if (j == 0 || j == n - 1)
                        {
                            count++;
                        }
                        if (grid[a][b] == 0)
                        {
                            count++;
                        }
                    }
                }
            }
        }

        return count;
    }
};