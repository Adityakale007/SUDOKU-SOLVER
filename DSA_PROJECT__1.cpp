#include <iostream>
#include <vector>

using namespace std;

class SudokuSolver {
private:
    // Function to check if placing 'val' at board[row][col] is valid
    bool IsSafe(int row, int col, vector<vector<char>>& board, char val) {
        for (int i = 0; i < 9; i++) {
            // Check row and column
            if (board[row][i] == val || board[i][col] == val) {
                return false;
            }
            // Check 3x3 sub-grid
            int subRow = 3 * (row / 3) + i / 3;
            int subCol = 3 * (col / 3) + i % 3;
            if (board[subRow][subCol] == val) {
                return false;
            }
        }
        return true;
    }

    // Backtracking function to solve Sudoku
    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == '.') {
                    for (char val = '1'; val <= '9'; val++) {
                        if (IsSafe(row, col, board, val)) {
                            board[row][col] = val;
                            if (solve(board)) {
                                return true;
                            }
                            board[row][col] = '.'; // Backtrack
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

public:
    // Function to solve Sudoku and display the result
    void solveSudoku(vector<vector<char>>& board) {
        if (solve(board)) {
            cout << "\nSolved Sudoku:\n";
            printBoard(board);
        } else {
            cout << "\nNo solution exists!\n";
        }
    }

    // Function to take user input for Sudoku board
    void inputBoard(vector<vector<char>>& board) {
        cout << "Enter the Sudoku board (use '.' for empty cells):\n";
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cin >> board[i][j];
            }
        }
    }

    // Function to display Sudoku board
    void printBoard(vector<vector<char>>& board) {
        cout << "\n+-------+-------+-------+\n";
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (j % 3 == 0) cout << "| ";
                cout << board[i][j] << " ";
            }
            cout << "|\n";
            if ((i + 1) % 3 == 0) cout << "+-------+-------+-------+\n";
        }
    }
};

int main() {
    SudokuSolver solver;
    vector<vector<char>> board(9, vector<char>(9));

    solver.inputBoard(board);
    cout << "\nOriginal Sudoku:\n";
    solver.printBoard(board);

    solver.solveSudoku(board);

    return 0;
}