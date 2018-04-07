/*
International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.

For convenience, the full table for the 26 letters of the English alphabet is given below:

[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cab" can be written as "-.-.-....-", (which is the concatenation "-.-." + "-..." + ".-"). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.
Example:
Input: words = ["gin", "zen", "gig", "msg"]
Output: 2
Explanation: 
The transformation of each word is:
"gin" -> "--...-."
"zen" -> "--...-."
"gig" -> "--...--."
"msg" -> "--...--."

There are 2 different transformations, "--...-." and "--...--.".
*/

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;



class Solution {
public:
	int GetLength(string str)
	{
		return str.length();
	}
	
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> Morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; 
		vector<string> S;
		map<string,int> maps;
		for(int i=0;i<words.size();i++)
		{
			string str;
			for (int j=0; j< GetLength(words[i]);j++)
			{
				str+=Morse[int(words[i][j])-97];
			}
	    S.push_back(str);
    	}
    	int k=0;
        for (int i=0;i<S.size();i++)
        {
			int flag=1;
        	if (maps.count(S[i])) 
					flag=0;	

			if (flag)	
				maps.insert(pair<string, int>(S[i], k++));

		}
        return k;
    }
};


int main()
{
	Solution ret;
	vector<string> a={"gin", "zen", "gig", "msg"};
	cout<<ret.uniqueMorseRepresentations(a);
	
	return 0;
}



