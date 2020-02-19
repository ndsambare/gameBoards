#pragma once

#include <string>
using namespace std;

enum indices { programName, inputName, correctNumArgs = 2, commandLine};

enum sORf { success, failInput, failedUsageMessage, widthError, heightError, pieceError, dimensionError };

int usageFunction(string, string);

void lowerString(string&);
