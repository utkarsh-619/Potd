class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int m1 = 0, m2 = 0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i] > m1){
	            if(arr[i] > m2){
	                m1 = m2;
	                m2 = arr[i];
	            }
	            else if(m2 != arr[i]) m1 = arr[i];
	        }
	    }
	   
	    if(m1 == 0) return -1;
	    return m1;
	}
};