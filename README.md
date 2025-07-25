🧩 Sudoku Solver (C++)

This project is a Sudoku Solver implemented in C++ using the backtracking algorithm. It’s a console-based application that takes a 9×9 Sudoku puzzle as input, solves it if possible, and displays the completed solution.

<br/>
📌 Features

✅ Accepts standard 9x9 Sudoku input (use . for empty cells)
🔁 Uses efficient backtracking with validity checks
🖨️ Displays Sudoku board before and after solving
❌ Detects and notifies if no valid solution exists
<br/>
🧠 How It Works

Input: User enters the Sudoku board row by row.
Validation: Before placing a number, it checks:
Row
Column
3×3 Sub-grid
Solving: Recursively tries valid numbers using backtracking.
Output: Prints solved Sudoku (or shows a message if unsolvable).
<br/>

💡 Example Input
53..7....
6..195...
.98....6.
8...6...3
4..8.3..1
7...2...6
.6....28.
...419..5
....8..79

<br/>
🧮 Output
Original Sudoku:

+-------+-------+-------+
| 5 3 . | . 7 . | . . . |
| 6 . . | 1 9 5 | . . . |
| . 9 8 | . . . | . 6 . |
+-------+-------+-------+
| 8 . . | . 6 . | . . 3 |
| 4 . . | 8 . 3 | . . 1 |
| 7 . . | . 2 . | . . 6 |
+-------+-------+-------+
| . 6 . | . . . | 2 8 . |
| . . . | 4 1 9 | . . 5 |
| . . . | . 8 . | . 7 9 |
+-------+-------+-------+

Solved Sudoku:

+-------+-------+-------+
| 5 3 4 | 6 7 8 | 9 1 2 |
| 6 7 2 | 1 9 5 | 3 4 8 |
| 1 9 8 | 3 4 2 | 5 6 7 |
+-------+-------+-------+
| 8 5 9 | 7 6 1 | 4 2 3 |
| 4 2 6 | 8 5 3 | 7 9 1 |
| 7 1 3 | 9 2 4 | 8 5 6 |
+-------+-------+-------+
| 9 6 1 | 5 3 7 | 2 8 4 |
| 2 8 7 | 4 1 9 | 6 3 5 |
| 3 4 5 | 2 8 6 | 1 7 9 |
+-------+-------+-------+

<br/>
📂 File Structure
SudokuSolver/
├── main.cpp         # Main source file
└── README.md        # Project documentation

🛠️ How to Run

1.Compile using g++:
g++ main.cpp -o sudoku

2.Run the program:
./sudoku

3.Enter input: 9 lines, 9 characters each (digits or .).
<br/>

🧠 Concepts Used

Backtracking Algorithm
2D Vector Manipulation
Row/Column/Sub-grid validation
Recursive DFS-style search
<br/>

👨‍💻 Author
Aditya Kale
📧 [adityakale6805@gmail.com]
