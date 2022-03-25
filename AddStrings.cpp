class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.size()-1,n2=num2.size()-1;
        int carry=0;
        string ans="";
        while(n1>=0&&n2>=0){
            int digit = (num1[n1]-'0') + (num2[n2]-'0') + carry;
            int rem=digit%10;
            char c ='0' + rem ;
            ans=c+ans;
            carry=digit/10;
            n1--;
            n2--;
        }
        cout<<n1<<n2<<endl;
        if(n1==n2&&carry>0){
            char t= '0'+carry;
            ans=t+ans;
            carry=0;
        }
        else if(n1>=0){
            while(n1>=0){
                int d = num1[n1]-'0'+ carry;
                int y =d%10;
                char r = '0' + y;
                ans= r+ans;
                carry=d/10;
                n1--;
            }
            if(carry>0){
                char v = carry+'0';
                ans=v+ans;
            }
        }
        else if(n2>=0){
            while(n2>=0){
                int d2 = num2[n2]-'0'+ carry;
                int z=d2%10;
                char s = '0'+z;
                ans=s+ans;
                carry=d2/10;
                n2--;
            }
            if(carry>0){
                char vt = carry+'0';
                ans=vt+ans;
            }
        }
        return ans;
    }
};
