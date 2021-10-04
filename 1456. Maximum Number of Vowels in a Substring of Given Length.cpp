class Solution {
public:
    bool isVowel(char c){
	    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    int maxVowels(string s, int k) {
        int maxCount = 0;
	
        for (int i = 0, count = 0; i < s.size(); i++){
		    if (isVowel(s[i]))
			    count++;
		
            if (i >= k && isVowel(s[i - k]))
			    count--;

		    if (count > maxCount){
			    maxCount = count;
		    }
	    }
	    return maxCount;
    }
};