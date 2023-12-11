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

	void BuildLeastCommonSubsequence();
	void PrintLength();
	void PrintLeastCommonSubsequence();

private:
	std::string firstSequence;
	std::string secondSequence;
	std::string leastCommonSubsequence;

	int length;
};

#endif
#include "LCS.cpp"