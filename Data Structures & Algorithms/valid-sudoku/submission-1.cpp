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
                char num = board[i][j];
                if(filas[i].count(num) 
                    || columnas[j].count(num) 
                    || cajas[cord].count(num)){
                        return false;
                }
                filas[i].insert(num);
                columnas[j].insert(num);
                cajas[cord].insert(num);
            }
        }
        return true;

    }
};
