class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<vector<int>>rows;
        int lengthRow=0;
        vector<int>row;
        int i=0;
        while(i<words.size()){
            if(lengthRow+words[i].size()<=maxWidth-row.size()){
                row.push_back(i);
                lengthRow+=words[i].size();
            }
            else{
                row.push_back(lengthRow);
                rows.push_back(row);
                row.clear();
                row.push_back(i);
                lengthRow=words[i].size();
            }
            i++;
        }

        row.push_back(lengthRow);
        rows.push_back(row);

        
        vector<string>ans;

        for(int i=0;i<rows.size();i++){
            int totalSpaces=maxWidth-rows[i].back();

            int spacesBetween;
            if(rows[i].size()-1>1 )spacesBetween=totalSpaces/(rows[i].size()-2);
            else spacesBetween=totalSpaces;

            string inBetween="";
            for(int j=0;j<spacesBetween;j++) inBetween+=' ';
            int rem;
            (rows[i].size()-2)? rem=totalSpaces%(rows[i].size()-2) : rem=0;

            string temp="";
            if (rows[i].size()==2){
                temp+=words[rows[i][0]];
                temp+=inBetween;
                ans.push_back(temp);
            }
            else if(i==rows.size()-1){
                for(int j=0;j<rows[i].size()-1;j++){
                    temp+=words[rows[i][j]];
                    if(j!=rows[i].size()-2) temp+=' ';
                }
                int lesser=maxWidth-temp.size();

                for(int i=0;i<lesser;i++) temp+=' ';
                ans.push_back(temp);
            }
            else{
                for(int j=0;j<rows[i].size()-2;j++){
                    temp+=words[rows[i][j]];
                    temp+=inBetween;
                    if(rem>0){
                        temp+=' ';
                        rem--;
                    }
                }
                temp+=words[rows[i][rows[i].size()-2]];
                ans.push_back(temp);
            }

        }


        return ans;
    }
};