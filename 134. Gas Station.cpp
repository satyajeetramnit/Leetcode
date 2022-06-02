class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int tank = 0;
        int pos = 0;
        int total = 0;
        
        //if total fuel at the end is positive there exist a solution
        //each time we run out of fuel we know that we can't make it from say
        //A(start) , B(end) then we start from B+1 index until fuel runs out if 
        //at the end total fuel is positive we return the last index from where if start 
        //we don't run out of fuel
        for(int i=0;i<n;i++){
            if((tank = tank+gas[i]-cost[i])<0){
                pos = i+1;
                total += tank;
                tank = 0;
            }
        }
        return (total+tank>=0)?pos:-1;
    }
};