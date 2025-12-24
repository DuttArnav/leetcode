class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> rows(numRows);
        int i=0,step=1;
        for(char c:s){
            rows[i]+=c;
            if(i==0) step=1;
            else if(i==numRows-1) step=-1;
            i+=step;
        }
        string res="";
        for(string &r:rows) res+=r;
        return res;
    }
};
