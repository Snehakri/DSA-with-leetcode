class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int circle=0;
        int square=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                circle++;
            }
            else square++;
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(circle==0) break;
                circle--;
            }
            else{
                if(square==0) break;
                square--;
            }
        }
        return square+circle;
        
    }
};