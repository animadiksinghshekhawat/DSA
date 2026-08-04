int upperBound(vector<int> &arr, int x, int n){
	int low=0;
	int high= n-1;
	int ans=n;
	while(low<=high){
		int mid= (low+high)/2;
		if(arr[mid]>x){
			high=mid-1;
			ans=mid;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
	
}
