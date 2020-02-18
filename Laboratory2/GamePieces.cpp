#include "GamePieces.h"
#include <iostream>

#include <vector>
#include <fstream>
#include <string>
#include <sstream>

string pieces_to_lower(piece_color col) {
	if (col == red) {
	std:cout << "red" << endl; 
	}
	else if (col == black) {
		std::cout << "black" << endl; 

	}
	else if (col == white) {
	std:cout << "white" << endl; 
	}
	else if (col == invalid_color) {
	std:cout << "invalid_color" << endl; 

	}
	else if (col == no_color) {
	std:cout << "no_color" << endl; 
	}
}

piece_color string_to_piece(string rock) {
	if (rock == "red") {
		return red;
	}
	else if (rock == "black") {
		return black;
	}
	else if (rock == "white") {
		return white;
	}
	else if (rock == " " || rock == "  " || rock == "    " || rock == "                         ") {
		return no_color; 
	}
	else {
		return invalid_color; 
	}
}

struct game_pieces {
	piece_color x; 
	string pieceName; 
	string pieceDisplay; 
};