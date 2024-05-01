class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                int j=i;
                i=0;
                while(i<j){
                    swap(word[i],word[j]);
                    i++;j--;
                }
                break;
            }
        }
        return word;
    }
};

