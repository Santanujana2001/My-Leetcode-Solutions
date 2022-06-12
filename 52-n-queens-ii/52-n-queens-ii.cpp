class Solution {
public:
    int count=0;
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
	    count++;
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
    int totalNQueens(int n) {
        vector<vector<int> > board(n, vector<int>(n, 0));
	if (solveNQUtil(board, 0) == false) {
		return 0;
	}
        return count;
    }
};