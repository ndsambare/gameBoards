Name: Namit Sambare ------ Project: Lab 2


Trial 1:
Tried running: Laboratory2.exe tic-tac-toe.txt (in my terminal)


I first tried to run the program once I built my solution via terminal. I tried to run through the tic-tac-toe.txt file, but an error was returned. The error read, "Went through file but found no dimensions." From this, I can tell, that the error is one to do with either my implementation of the main() function, or my readGamePieces function, which is the logical statement where this error message occurs in the main function. 

Trial 2: 
Tried Running:  Laboratory2.exe tic-tac-toe.txt (in my terminal)

During this trial, I fixed the error of of "Went through file but found no dimensions" because my error was that I was trying to exectute the file given at the 0th position of argv. However, I want to actually execute the file in the 1st position of argv because that is where my tic-tac-toe.txt file will be. 


Trial 3: Laboratory2.exe tic-tac-toe.txt (in my terminal)

During this trial, the X's printed out but they printed out as follows: 
X
XX
XXX 
I realized that this was not the correct coordinates that were supposed to be printed according to my program, so I had to end up fixing my printBoard method. I had mixed up the width and height nested for loops and did not go in descending order when iterating through the height at first. Once, I changed this, I was confident my coordinates would be accurate. 


Trial 4: Laboratory2.exe tic-tac-toe.txt (in my terminal)

During this trial, the X's printed out exactly as they should. The result was as follows: 
XXX
 X
X
This is the correct result for what was supposed to be printed by my program in lab 2. So after I got this correct result, I realized that I must now run many different test cases of bad text input and see if I still consistently get the desired output. But first, I also decided to use the gomoku.txt file and see if the desired output was also printed for that file. 

Trial 5: Laboratory2.exe gomoku.txt (in my terminal)

During this trial, the board printed out exactly as it should have. The result was as follows: 

 O O O O
O O O O
 O O O O


X X X X
 X X X X
X X X X

This is the correct result for what was supposed to be printed out by my program in lab 2 for the gomoku.txt file. 


Trial 6: Laboratory2.exe tic-tac-toe.txt (in my terminal) ---- added blank line to text file before info. 

During this, trial, the correct result was printed. The program ignored the blank lines and wzs still able to parse through the text file and print the correct output for tic-tac-toe.txt.



Trial 7: Laboratory2.exe tic-tac-toe.txt (in my terminal) ---- added 5 blank lines to text file before info.

During this, trial, the correct result was printed. The program ignored the blank lines and wzs still able to parse through the text file and print the correct output for tic-tac-toe.txt.



Trial 8:
Ran the tic-tac-toe.txt file but added the following to the beginning: 

askjfhasiufhdaksjdnakjsbdkjasbdkjasbdkjasbdkjabsdkjhbajkcbskjd;;;;''';';';;;

sdbsjkdbns
sndashdjsd


During this trial, the correct result was still printed out. The program ignored the crazy nonsense input and still only parsed and read in what it was supposed to, which was the X's on the tic tac toe board. 

Trial 9: Ran the tic-tac-toe.txt file but added the following to the beginning:
red coconut red
blue 
black red 
white baby 

During this trial, the correct result was still printed out, as it should have been. Although some of the correct colors were there, there were no dimensions or any of the other correct information needed for the file to be read and then printed. So, the program is functioning as it should and only printing out info if it has ALL of the correct elements. 


Trial 10: Ran the tic-tac-toe.txt file but I added the following: 

3 3
red Xs X 0 0
red Xs X 0 2
red Xs X 1 1
red Xs X 1 2
red Xs X 2 2
blue Os O 0 1 
blue Os O 1 0 
blue Os O 2 0 
blue Os O 2 2 




3 3
red Xs X 0 0
red Xs X 0 2
red Xs X 1 1
red Xs X 1 2
red Xs X 2 2
blue Os O 0 1 
blue Os O 1 0 
blue Os O 2 0 
blue Os O 2 2 



During this trial, I essentially added the text of the orignial tic-tac-toe.txt file twice more. However, even though this adds more valid lines of input, the coordinates of the valid lines are the same, and since you should not be able to put in a piece at a location of an already exisiting piece, I expected the same output as the original tic-tac-toe.txt file. This is exactly what I saw. This shows my program isn't malfunctioning when a piece already exists in the coordinate that I want to put it in. 

Trial 11: Ran tic-tac-toe.txt but kept everything blank and erased the entire file. 

During this trial, my program did exactly what I expected as it went through the file but printed out the error message "Went through file but found no dimensions." In this scenario, since there were no dimensions, this is exactly what was supposed to be printed. 


Trial 12: Ran tic-tac-toe.txt but changed the file to look like this: 
9 9 
red Xs X 0 0
red Xs X 0 2
red Xs X 1 1
red Xs X 1 2
red Xs X 2 2
red Xs X 5 5
red Xs X 6 8
red Xs X 2 7

I expected to see a bigger game board printed, and all the new X's in their correct coordinates. The result I got was as follows:

      X
  X

     X


XXX
 X
X

This is absolutely the correct result as all the coordinates are correct, and this shows that my program is able to read in dynamic input as the dimensions and coordinates can be altered as long as the input format is still valid, and the program will still run effectively. 

Overall, I tested my program very thoroughly with many test cases of bad input and additional input, and my program printed out and ran exactly as it should have. I am confident that my Lab 2 works as it should due to all the rigorous testing/trials. 