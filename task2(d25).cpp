//task2 day25
//Problem Link : https://leetcode.com/problems/maximum-matching-of-players-with-trainers/submissions/884861190/?fbclid=IwAR2j7ipI8Uf_8o7D8KmrdISH7--AoXEF-nNYbby8NyAoaafq9OjOHMWERKo


class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int m=trainers.size();
        int max=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
        while(i<n && j<m){
            if(trainers[j]>=players[i]){
                max++;
                i++;
                j++;
            }
            else if(trainers[j]<players[i]){
                j++;
            }
        }
        return max;
    }
};

// Input
// players =
// [4,7,9]
// trainers =
// [8,2,5,8]
// Output
// 2
// Expected
// 2
