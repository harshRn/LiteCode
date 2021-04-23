class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     
        int sz=arr.size();        
        int c=count(arr.begin(),arr.end(),0);
        int lt=sz+c;
        for(int i=sz-1;i>=0;i--)
        {
            if(--lt<sz)
               arr[lt]=arr[i];
            if(!arr[i] && --lt<sz)
                arr[lt]=0;
        }    
    }
};

// basically, we assume the full length array after the shifting of the elements. 
//   but we don't start actually overwriting until the addition index lt is within bounds. 
//   once that happens, we overwrite the addition index with the pointer used to iterate the array backwards.
//   we put in another check to see if the element just shifted to the back is a 0 and if it is ,
// overwrite with it again as the question states.
