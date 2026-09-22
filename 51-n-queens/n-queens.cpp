class Solution {
public:
    // bool Isvalid(int i, int j, int n, vector<string>&A){
    //     int ti = i, tj = j;
    //     while(ti >= 0){
    //         if(A[ti][tj]=='Q') return false;
    //         ti--;
    //     }
    //     ti = i, tj = j;
    //     while(ti >= 0 && tj >= 0){
    //         if(A[ti][tj]=='Q') return false;
    //         ti--;
    //         tj--;
    //     } 
    //     ti = i, tj = j;
    //     while(ti >= 0 && tj < n){
    //         if(A[ti][tj]=='Q') return false;
    //         ti--;
    //         tj++;
    //     }
    //     return true;
    // }
    bitset<30>cl, d1, d2;
    void Solve(int row, vector<vector<string>>&ds, vector<string>&A, int n) {
        if(row == n){
            ds.push_back(A);
            return;
        }
        for(int col = 0 ; col < n ; col++) {
            if(!cl[col] && !d1[row + col] && !d2[row - col + n - 1]) {
                A[row][col] = 'Q';
                cl[col] = d1[row + col] = d2[row - col + n - 1] = 1;
                Solve(row + 1, ds, A, n);
                cl[col] = d1[row + col] = d2[row - col + n - 1] = 0;
                A[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ds;
        vector<string>A;
        for(int i = 0; i < n; i++) {
            string s;
            for(int j = 0; j < n; j++) {
                s += '.';
            }
            A.push_back(s);
        }
        Solve(0, ds, A, n);
        return ds;
    }
};