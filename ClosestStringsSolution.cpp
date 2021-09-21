#Given a list of words followed by two words, the task to find the minimum distance between the given two words in the list of words
#Input:
#S = { "the", "quick", "brown", "fox","quick"}
#word2 = "fox"
#Output: 3
#Explanation: Minimum distance between the 
#words "the" and "fox" is 3
class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		int i1 = -1, i2 = -1;

	    int minDistance = INT_MAX;
	    
	    for (int i = 0; i < s.size(); i++) 
	    {
	        if (s[i] == word1)
	            i1 = i;
	        
	        if (s[i] == word2)
	            i2 = i;


	        if (i1 != -1 && i2 != -1) {
	            minDistance = min(minDistance, abs(i1 - i2));
	        }
	    }

	    return minDistance;
	}
};
