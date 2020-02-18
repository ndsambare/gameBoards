#include "GameBoard.h"
#include <iostream>

#include <vector>
#include <fstream>
#include <string>
#include <sstream>

int gameDim(ifstream& alpha, unsigned int& width, unsigned int& height) {
	string line; 
	if (getline(alpha, line)) {
		istringstream iss(line);
		if (iss >> width) {

			if (iss >> height) {
				return success; 
			}
			else {
				return heightError; 
			}
		else {
			return widthError; 
		}
			
			}
		
	}
	else {
		return failInput; 
	}
}

int readGamePieaces(ifstream& alpha, vector<game_piece>& game_piece_vec, unsigned int width, unsigned int height) {
	string line; 
	string name; 
	string color; 
	string display; 
	int widthStream;
	int heightStream;
	while (getline(alpha, line)) {
		istringstream iss(line);
		if (iss >> color >> name >> display >> widthStream >> heightStream) {
			if (!string_to_piece(color) == invalid_color && !widthStream >= width && !heightStream >= height) {
				//code will be correct
			}

			

		}
		
	}
}