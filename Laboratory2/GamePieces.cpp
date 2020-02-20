#include "GamePiecess.h"
#include <iostream>

#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <string>
#include "Header2.h"

using namespace std; 


string pieces_to_lower(piece_color col) {
	if (col == red) {
		
	cout << "red" << endl; 
	return "red";
	}
	else if (col == black) {
		return "black";
		cout << "black" << endl; 

	}
	else if (col == white) {
		return "white";
	cout << "white" << endl; 
	}
	else if (col == invalid_color) {
		return "invalid_color";
	cout << "invalid_color" << endl; 

	}
	else  {
		return "no_color"; 
	cout << "no_color" << endl; 
	}
}

piece_color string_to_piece(string rock) {
	lowerString(rock); 
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


game_piece::game_piece(piece_color x, string _pieceName, string _pieceDisplay) {
	colorPiece = x; 
	pieceName = _pieceName; 
	pieceDisplay = _pieceDisplay; 
	}
	
