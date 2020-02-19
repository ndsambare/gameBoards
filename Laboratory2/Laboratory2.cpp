// Laboratory2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header2.h"
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include "Header1.h"
#include "GameBoard.h"
#include "GamePiecess.h"



int main(int argc, char * argv[])
{
	if (argc == correctNumArgs) {
		ifstream infile;
		string word = argv[inputName];
		infile.open(word);
			 if (infile.is_open()) {
				 unsigned int horizontalExt; 
				 unsigned int verticalExt; 
				int gameDimReturn = gameDim(infile, horizontalExt, verticalExt);

				while (gameDimReturn == widthError || gameDimReturn == heightError) {
					gameDimReturn = gameDim(infile, horizontalExt, verticalExt); 
					

				}
				if (gameDimReturn == success) {
					vector<game_piece> gamePieces; 
					for (int i = 0; i < horizontalExt * verticalExt; i++) {
						
							gamePieces.push_back(game_piece(no_color, "", " ")); 
						
					}
					int readGame = readGamePieaces(infile, gamePieces, horizontalExt, verticalExt);
					



					if (readGame != pieceError) {
						int printGame = printBoard(gamePieces, horizontalExt, verticalExt); 
						return printGame; 
					}
					else {
						std::cout << "There was an error in reading the game piece"; 
						return pieceError; 
					}

				}
				else {
					cout << "Went through file but found no dimensions"; 
					return dimensionError; 

				}
		}
			 else {
				 std::cout << "There was an input error." << endl; 
				 return failInput; 
			 }
	}
	else {
		return usageFunction(argv[programName], "Not Enough Arguments");
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
