class Solution {
    public boolean hasSameDigits(String s) {
        while(s.length()>2){
            String temp="";
            for(int i=0;i<s.length()-1;i++){
                int n1=(int)s.charAt(i)-'0';
                int n2=(int)s.charAt(i+1)-'0';
                int num=(n1+n2)%10;
                temp+=(""+num);
                System.out.println(temp);
            }
            s=temp;
        }
        if(s.charAt(0)==s.charAt(1)){
            return true;
        }
        return false;
    }
}