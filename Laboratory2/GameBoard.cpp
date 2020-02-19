#include "GameBoard.h"
#include <iostream>

#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include "Header2.h"
#include "GamePiecess.h"
using namespace std;

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
		}
		else {
			return widthError; 
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
				
				int index = width * heightStream + widthStream; 
				game_piece_vec[index].pieceName = name; 
				game_piece_vec[index].pieceDisplay = display; 
				game_piece_vec[index].colorPiece = string_to_piece(color);
				return success; 
			}
			else {
				return pieceError; 
			}

			

		}
		else {
			return pieceError; 
		}
		
	}
}

int printBoard(const vector<game_piece>& vector, unsigned int width, unsigned height) {

	if ((width * height) != vector.size()) {
		return dimensionError; 
	}
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			  
		std:cout << vector[width * i + j].pieceDisplay; 
		}
		cout << endl; 
		
	}
	return success; 
	
}