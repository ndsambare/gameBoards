#include "Header2.h"
#include <iostream>

#include <vector>
#include <fstream>
#include <string>
#include <sstream>

int usageFunction(string programName, string programInfo) {
	std::cout << programName << endl;
	std::cout << programInfo;
	return failedUsageMessage;
}

void lowerString(string & alpha) {
	for (int i = alpha.begin; i < alpha.end; i++) {
		if (alpha[i] >= 65 && alpha[i] <= 90) {
			alpha[i] = alpha[i] + 32; 
		}
	}
}