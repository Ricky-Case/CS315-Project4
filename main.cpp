#include <fstream>
#include "LCS.h"

std::vector<std::string> DetermineSequences(std::ifstream&);

int main()
{
	std::ifstream userData;

	std::vector<std::string> sequences = DetermineSequences(userData);

	// Construct the LCS Matrix
	LCS lcs(sequences[0], sequences[1]);
	lcs.BuildLongestCommonSubsequence();

	// Compute LCS Length
	lcs.PrintLength();

	// Print the LCS
	lcs.PrintLongestCommonSubsequence();

	return 0;
}

std::vector<std::string> DetermineSequences(std::ifstream& userFile)
{
	std::string sequence;
	std::vector<std::string> sequences;

	userFile.open("files/DNA.txt");
	while (userFile >> sequence) { sequences.push_back(sequence); }
	userFile.close();

	return sequences;
}