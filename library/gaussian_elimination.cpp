// Solve:
//   sum(aij * xj) = bi
// last column of a is vector b
int gauss(vector<vector<double>> a, vector<double> &ans){
    int n = sz(a);
    int m = sz(a[0]) - 1;

    vector<int> where(m, -1);

    for(int col = 0, row = 0; col < m and row < n; ++col){
        int sel = row;
        for(int i = row; i < n; ++i)
            if(abs(a[i][col]) > abs(a[sel][col]))
                sel = i;

        if(abs(a[sel][col]) < EPS)
            continue;

        swap(a[sel], a[row]);

        where[col] = row;

        for(int i = 0; i < n; ++i){
            if(i != row){
                double c = a[i][col] / a[row][col];
                for(int j = col; j <= m; ++j)
                    a[i][j] -= a[row][j] * c;
            }
        }

        ++row;
    }

    ans.assign(m, 0);

    for(int i = 0; i < m; ++i)
        if(where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];

    for(int i = 0; i < n; ++i){
        double sum = 0;
        for(int j = 0; j < m; ++j)
            sum += ans[j] * a[i][j];
        debug(sum - a[i][m]);
        if(abs(sum - a[i][m]) > EPS)
            return 0;
    }

    for(int i = 0; i < m; ++i)
        if(where[i] == -1)
            return INF;

    return 1;
}
