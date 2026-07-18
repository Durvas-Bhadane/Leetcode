class Solution {
public:
    void sortColors(vector<int>& A) {
        // sort(A.begin(), A.end());

        int low = 0, mid = 0, high = A.size()-1;

        while(mid <= high){
            if(A[mid] == 0){ //->0
                swap(A[mid],A[low]);
                low++;
                mid++;
            }

            else if(A[mid] == 1){ //->1
                mid++;
            }  
            else{ //->2
                swap(A[mid],A[high]);
                high--;
            }
        }


        
        
    }
};