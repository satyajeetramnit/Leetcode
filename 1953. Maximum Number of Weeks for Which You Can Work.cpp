class Solution
{
public:
    long long numberOfWeeks(vector<int> &milestones)
    {

        long long n = milestones.size();
        long long week = 0;
        long long m = 0;

        sort(milestones.begin(), milestones.end());

        for (long long i = 0; i < n - 1; i++)
        {
            m += milestones[i];
        }

        if (milestones[n - 1] <= m + 1)
        {
            return (m + milestones[n - 1]);
        }
        else
        {
            return ((m * 2) + 1);
        }

        // int one=0,two=1;
        // if(milestones[0]>=milestones[1]){
        // one=milestones[0];
        // two=milestones[1];
        // }
        // else{
        //     one=milestones[1];
        //     two=milestones[0];
        // }
        // for(int i=0;i<m;i++){
        //     if(milestones[one]>0){
        //         week++;
        //         milestones[one]--;
        //     }
        //     else{
        //         if((two+1)<n && milestones[two]>0){
        //             one=two+1;
        //             week++;
        //             milestones[one]--;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
    }
};