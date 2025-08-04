
#include "misaligned.h"
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

std::vector<std::string> generatedMannual;
std::vector<std::string> actualMannual;

void FakeVersionOfPrintFunction(std::string& lineContent) {
    generatedMannual.push_back(lineContent);
}

void testPrintColorMap() {
    // Populate expected output
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int index = i * 5 + j;
            std::ostringstream oss;
            oss << index << " | " << majorColor[i] << " | " << minorColor[j] << "\n";
            actualMannual.push_back(oss.str());
        }
    }
    int size = printColorMap(FakeVersionOfPrintFunction);
    assert(size == 25);
    assert(generatedMannual == actualMannual);   
}
