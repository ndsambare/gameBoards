#pragma once

#include <string>
using namespace std;

enum indices { programName, inputName, commandLine };

enum sORf { success, failInput, failedUsageMessage, widthError, heightError };

int usageFunction(string, string);

void lowerString(string&);
