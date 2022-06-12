class Solution {
public:
    vector<vector<int> > result;
bool isSafe(vector<vector<int> > board,
			int row, int col)
{
	int i, j;
	int N = board.size();
	for (i = col; i >= 0; i--)
		if (board[row][i])
			return false;
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;
	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}
bool solveNQUtil(vector<vector<int> >& board, int col)
{
	int N = board.size();
	if (col == N) {
		vector<int> v;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] == 1)
					v.push_back(j + 1);
			}
		}
		result.push_back(v);
		return true;
	}
	bool res = false;
	for (int i = 0; i < N; i++) {
		if (isSafe(board, i, col)) {
			board[i][col] = 1;
			res = solveNQUtil(board, col + 1) || res;
			board[i][col] = 0; 
		}
	}
	return res;
}
    bool nQueen(int n) {
	vector<vector<int> > board(n, vector<int>(n, 0));
	if (solveNQUtil(board, 0) == false) {
		return 0;
	}
	sort(result.begin(), result.end());
	return 1;
    }
    vector<vector<string>> solveNQueens(int n) {
        nQueen(n);
        int ss=result.size();
        string str ="";
        for(int i=0;i<n;i++){
            str+='.';
        }
        vector<vector<string>>s(ss,vector<string>(n,str));
        int x,y,z;
        x=y=z=0;
        for(int i=0;i<ss;i++){
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                s[x][y++][(result[i][j])-1]='Q';
                // s[x][y+1][(result[i][j])-1]='Q';
            }
            cout<<endl;
            x++;
            y=0;
            
        }
        
        for(int i=0;i<ss;i++){
            for(int j=0;j<s[i].size();j++){
                for(int k=0;k<s[i][j].length();k++){
                    cout<<s[i][j][k]<<" ";
                }
                cout<<",";
            }
            cout<<endl;
        }
        return s;
    }
};