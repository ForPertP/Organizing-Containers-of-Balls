#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'organizingContainers' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts 2D_INTEGER_ARRAY container as parameter.
 */

string organizingContainers(vector<vector<int>> container)
{
    std::vector<int> row_sum(container.size());
    std::vector<int> col_sum(container.size());
    
    for (size_t i = 0; i < container.size(); ++i)
    {
        for (size_t j = 0; j < container.size(); ++j)
        {
            row_sum[i] += container[i][j];
            col_sum[i] += container[j][i];
        }
    }
    
    std::sort(row_sum.begin(), row_sum.end());
    std::sort(col_sum.begin(), col_sum.end());

    return (row_sum == col_sum) ? "Possible" : "Impossible";
}
