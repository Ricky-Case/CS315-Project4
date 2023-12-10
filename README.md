# CS315-Project4

## Instructions

### Overview

![Flashy Artist Rendering of DNA](files/DNA.png)

In this assignment will be focused on a single algorithm: Longest Common Subsequence (LCS)! This is a pretty fun algorithm that’s used somewhat frequently in string analysis. Another fun application is, as our little picture indicates, in computational biology with matching subsequences of DNA. In this application, strands of DNA are treated as strings generated from an alphabet containing the characters ’A’, ’T’, ’C’, and ’G’.

In this assignment, you’ll be asked to implement the longest common subsequence algorithm using dynamic programming. Dynamic programming is an algorithm design paradigm that breaks large problems down into smaller problems and uses the solution to smaller problems to make solving the larger problem easier. I’ve given you a single text file, dna.txt that contains two strings representing sequences of DNA. The ultimate goal of this assignment is to find the longest common subsequence between these two sequences. The text file is organized as follows:
- Each DNA sequence is a string consisting of characters ’A’, ’T’, ’C’, and ’G’.
- Each line contains one sequence.

As always, you will submit a writeup in Word or PDF that summarizes your results and all code as a zip file. Submit the writeup (with attached source code) to the Canvas submission locker before 11:59pm on the due date.

### Construct the LCS Matrix and Compute LCS Length (10 points)
The dynamic programming method for finding a longest common subsquence involves first constructing a matrix (or two matrices, either way works) that can be used to determine the length of the LCS and, ultimately, reconstruct the LCS. For this part of the assignment, you just need to implement the LCS-LENGTH method and use it to determine the length of the LCS. Even though we’re only using LCS-LENGTH to find the length of the LCS in this part of the assignment, we will be using the matrix we construct in the next part of the assignment to reconstruct the LCS.

- For this assignment, you shouldn’t need to use any high level data structures to implement the LCS-LENGTH method. That being said, if you want to use a hash table, dictionary, or anything like that, you are free to do so.
- All code should be written in C++.
- Please include instructions for how to compile and run your code in your writeup.
- Explain any implementation choices you had to make in the final report (such as underlying data structure), and also include the length of the LCS in your writeup (described above)!

### Reconstruct the LCS (5 points)
In this part of the assignment, I want you to use the matrix (or matrices) created during part 1 to reconstruct the LCS. Essentially, I’m asking you to implement the PRINT-LCS method.

Details:
- No high level functions should be necessary for this code.
- As mentioned at the start of class, all code should be written in C++.
- Please include instructions for how to compile and run your code in your writeup.
- Explain any implementation choices you had to make in the final report (such as how ties were broken).
- Be sure to include the LCS in the writeup!

### Writeup (5 points)
You will include a written report with your submission detailing important details about your implementation, as well as the results of any analyses requested in the assignment. The report must be complete and clear. A few key points to remember:
- Complete: the report does not need to be long, but should include everything that was requested.
- Clear: your grammar should be correct, your graphics should be clearly labeled and easy to read.
- Concise: I sometimes print out reports to ease grading, don’t make figures larger than they need to be. Graphics and text should be large enough to get the point across, but not much larger.
- Credit (partial): if you are not able to get something working, or unable to generate a particular figure, explain why in your report. If you don’t explain, I can’t give partial credit.