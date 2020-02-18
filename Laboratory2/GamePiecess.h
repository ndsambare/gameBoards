#pragma once

#include <string>
using namespace std;

enum piece_color { red, black, white, invalid_color, no_color};

piece_color string_to_piece(string);

string pieces_to_lower(piece_color); 

struct game_piece {
	piece_color x;
	string pieceName;
	string pieceDisplay;
};