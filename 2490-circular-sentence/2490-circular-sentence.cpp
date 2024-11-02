class Solution {
public:
    bool isCircularSentence(string sentence) {
        int count=0;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                count++;
            }
            if(sentence[i]==' ' && sentence[i-1]!=sentence[i+1]){
                return false;
            }
        }
        if(sentence[0]!=sentence[sentence.size()-1]){
                return false;
            }
        // if(count==0) {
        //     return false;
        // }
        return true;
    }
};