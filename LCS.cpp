#ifndef LCS_CPP
#define LCS_CPP

#include "LCS.h"

LCS::LCS(std::string first, std::string second)
{
	firstSequence = first;
	secondSequence = second;
	longestCommonSubsequence = "";
	length = 0;
}

void LCS::BuildLongestCommonSubsequence()
{
	// Determine matrix dimensions
	int m = firstSequence.size();
	int n = secondSequence.size();

	// Initialize matrix
	int matrix[m + 1][n + 1];

	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0) { matrix[i][j] = 0; }
			else if (firstSequence[i - 1] == secondSequence[j - 1]) { matrix[i][j] = matrix[i - 1][j - 1] + 1; }
			else
			{
				if (matrix[i - 1][j] >= matrix[i][j - 1]) { matrix[i][j] = matrix[i - 1][j]; }
				else { matrix[i][j] = matrix[i][j - 1]; }
			}
		}
	}

	length = matrix[m][n];

	int index = length;
	
	char lcs[index + 1];
	lcs[index] = '\0';
 
	while (m > 0 && n > 0)
	{
		if (firstSequence[m - 1] == secondSequence[n - 1])
		{
			lcs[index - 1] = firstSequence[m - 1];

			m--;
			n--;
			index--;
		}
		else if (matrix[m - 1][n] > matrix[m][n - 1]) { m--; }
		else { n--; }
	}

	longestCommonSubsequence = lcs;
}

void LCS::PrintLongestCommonSubsequence()
{
	std::cout << std::endl
			<< "Longest Common Subsequence is: \"" << longestCommonSubsequence << "\"." << std::endl
			<< std::endl;
}

void LCS::PrintLength()
{
	std::cout << std::endl
			<< "Longest Common Subsequence Length is " << length << " characters." << std::endl
			<< std::endl;
}

#endif