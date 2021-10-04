class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // int ng;
        // for(int i=0;i<arr.size();i++){
        //     ng=-1;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[j]>ng){
        //             ng=arr[j];
        //         }
        //     }
        //     arr[i]=ng;
        // }
        
        
        
        // for(int i=0;i<arr.size();i++){
        //     arr[i]=*max_element(arr.begin()+i+1,arr.end());
        // }
        // arr[arr.size()-1]=-1;
        
        
        int temp,next=-1;
        for(int i=arr.size()-1;i>=0;i--){
            temp=arr[i];
            arr[i]=next;
            if(next<temp){
                next=temp;
            }
        } 
        return arr;
    }
};