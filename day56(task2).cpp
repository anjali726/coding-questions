class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int i=0;
        int j=tokens.size()-1;
        int score=0;
        sort(tokens.begin(),tokens.end());
        while(j>=i){
            if(power<tokens[i] && score==0){
                return score;
            }
            else if(power>=tokens[i]){
                power=power-tokens[i];
                score++;
                i++;
                cout<<power<<" ";
            }
            else if(i==j){
                return score;
            }
            else if(power<tokens[i]){
                power=power+tokens[j];
                score--;
                j--;
                cout<<power<<" ";
            }
        }
        return score;
    }
};
