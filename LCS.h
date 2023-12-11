#ifndef LCS_H
#define LCS_H

#include <vector>
#include <string>
#include <iostream>

class LCS
{
public:
	// Constructor - takes two sequences as strings
	LCS(std::string, std::string);

	void BuildLongestCommonSubsequence();
	void PrintLength();
	void PrintLongestCommonSubsequence();

private:
	std::string firstSequence;
	std::string secondSequence;
	std::string longestCommonSubsequence;

	int length;
};

#endif
#include "LCS.cpp"