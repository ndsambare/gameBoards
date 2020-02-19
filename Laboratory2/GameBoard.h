#pragma once
#include <string> 
#include <vector>
using namespace std; 
#include "Gamepiecess.h";

int gameDim(ifstream& alpha, unsigned int& width, unsigned int& height);

int readGamePieaces(ifstream& alpha, vector<game_piece>& game_piece_vec, unsigned int width, unsigned int height);

int printBoard(const vector<game_piece>& vector, unsigned int width, unsigned height);
