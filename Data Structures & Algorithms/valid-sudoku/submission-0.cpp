class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, set<int>> rows;
        unordered_map<int, set<int>> cols;
        map<pair<int,int>, set<int>> mat;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){

                if(board[i][j]!='.' && !rows[i].insert(static_cast<int>(board[i][j])).second){
                    cout<<"Found "<<board[i][j]<<" in row "<<i<<endl;
                    return false;
                }
            }
        }

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board.size(); j++){
                if(board[j][i]!='.' && !cols[i].insert(static_cast<int>(board[j][i])).second){
                    cout<<"Found "<<board[j][i]<<" in column "<<i<<endl;
                    return false;
                }
            }
        }

        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                pair<int, int> pr = {i/3, j/3};
                if(board[i][j]!='.' && !mat[pr].insert(static_cast<int>(board[i][j])).second){
                    return false;
                }
            }
        }

        return true;
    }
};
