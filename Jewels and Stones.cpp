/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
*/

#include <string>
#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
       
        map<char, int> tt;
        int ret=0;
	    for(int i=0;i<J.length();i++)
	    tt.insert(pair<char, int>(J[i], i));
		  
        for (int j=0;j<S.length();j++)
        if (tt.find(S[j])!=tt.end())	ret++;
        
	   
	   
	   
	    return ret;
    }
};


int main()
{
	string J,S;
	cin>>J>>S;
	Solution Sol;
	cout<<Sol.numJewelsInStones(J,S);
	 
	
	
return 0;
	
}



