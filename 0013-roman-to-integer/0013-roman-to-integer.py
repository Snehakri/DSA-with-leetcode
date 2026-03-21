class Solution:
    def romanToInt(self, s: str) -> int:
        num=0
        
        while(len(s)>0):
            if(s[-1]=='I'):
                num+=1
                s=s[0:len(s)-1]
            elif(s[-1]=='V'):
                if(len(s)>=2 and s[-2]=='I'):
                    num+=4
                    s=s[0:len(s)-2]
                else:
                    num+=5
                    s=s[0:len(s)-1]
            elif(s[-1]=='X'):
                if(len(s)>=2 and s[-2]=='I'):
                    num+=9
                    s=s[0:len(s)-2]
                else:
                    num+=10
                    s=s[0:len(s)-1]
            elif(s[-1]=='L'):
                if(len(s)>=2 and s[-2]=='X'):
                    num+=40
                    s=s[0:len(s)-2]
                else:
                    num+=50
                    s=s[0:len(s)-1]
            elif(s[-1]=='C'):
                if(len(s)>=2 and s[-2]=='X'):
                    num+=90
                    s=s[0:len(s)-2]
                else:
                    num+=100
                    s=s[0:len(s)-1]
            elif(s[-1]=='D'):
                if(len(s)>=2 and s[-2]=='C'):
                    num+=400
                    s=s[0:len(s)-2]
                else:
                    num+=500
                    s=s[0:len(s)-1]
            elif(s[-1]=='M'):
                if(len(s)>=2 and s[-2]=='C'):
                    num+=900
                    s=s[0:len(s)-2]
                else:
                    num+=1000
                    s=s[0:len(s)-1]
            print(s)
        return num

            


        