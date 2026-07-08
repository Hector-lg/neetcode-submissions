class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
                unordered_set<char> filas[9];
        unordered_set<char> columnas[9];
        unordered_set<char> cajas[9];

        for(int i=0;i<9;i++){
            for(int j=0; j<9; j++){
                if(board[i][j]== '.'){
                    continue;}

                int cord = (i/3)*3+(j/3);
                if(filas[i].count(board[i][j]) 
                    || columnas[j].count(board[i][j]) 
                    || cajas[cord].count(board[i][j])){
                        return false;
                }
                filas[i].insert(board[i][j]);
                columnas[j].insert(board[i][j]);
                cajas[cord].insert(board[i][j]);
            }
        }
        return true;

    }
};
