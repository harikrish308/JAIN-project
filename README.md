# Student Marks Analyzer

A beginner-friendly C++ console application that processes and analyzes student marks. Built using functions, arrays, and loops without object-oriented programming (no classes/objects).

## Features
* **Input Validation:** Rejects student counts outside the range of 1 to 100.
* **Calculations:** Computes total, average, highest mark, lowest mark, pass count, and fail count.
* **Repeatable Execution:** Uses a loop allowing users to rerun the analysis without restarting.

## Function Overview
* `readMarks`: Reads input marks into an array.
* `findTotal` / `findAverage`: Calculates total and double-precision average.
* `findHighest` / `findLowest`: Determines min and max marks.
* `countPassed`: Counts students passing (mark $\ge 40$).
* `printReport`: Outputs the formatted analysis report.
