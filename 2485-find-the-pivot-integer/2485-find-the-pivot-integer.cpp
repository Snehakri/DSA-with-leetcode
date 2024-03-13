class Solution {
public:
    int pivotInteger(int n) {
        int i=1,j=n;
        int psi=0,psj=0;
        while(i<=j){
            if(psi==psj && i==j){
                return i;
            }
            else if(psi>psj){
                psj+=j;
                j--;
            }
            else if(psi<psj){
                psi+=i;
                i++;
            }
            else {
                psi+=i;
                psj+=j;
                i++;
                j--;
            }
        }
        return -1;
    }
};