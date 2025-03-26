# SUDOKU-SOLVER
This project is a Sudoku Solver implemented using C++. It is a console-based application that takes a 9×9 Sudoku puzzle as input, solves it using backtracking, and displays the completed solution. The program ensures that each row, column, and 3×3 sub-grid follows the rules of Sudoku.

How the Program Works:

Step 1: User Inputs the Sudoku Grid
	•	The user enters the board row by row.
	•	The program verifies and stores the input.

Step 2: Solving the Sudoku
	•	The recursive backtracking function tries placing numbers.
	•	If a valid number is found, the process continues.
	•	If an incorrect number is placed, the function backtracks and tries a different number.

Step 3: Displaying the Solution
	•	If the Sudoku is solvable, the program prints the completed board.
	•	If no solution exists, the program informs the user.

 Technologies Used

✅ C++ – Core programming language for implementing logic.

✅ Standard I/O (cin, cout) – Used for taking input and displaying output.

✅ 2D Vector (vector<vector<char>>) – Data structure to store the board.

✅ Backtracking Algorithm – Solving strategy to fill the board efficiently.

✅ Looping & Conditional Statements – Used for decision-making and iteration.

Future Improvements & Enhancements

🔹 Graphical User Interface (GUI) – Implement a UI using SFML or Qt for better visualization.

🔹 Sudoku Puzzle Generator – Create randomized Sudoku puzzles for users to solve.

🔹 Difficulty Levels – Implement easy, medium, and hard puzzles.

🔹 AI-Based Solver – Use constraint programming or machine learning to optimize solving speed.

🔹 File Handling – Save and load Sudoku puzzles from external files.
