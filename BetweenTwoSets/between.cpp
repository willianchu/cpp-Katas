int getTotalX(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    int mn = b[0];
    int cn = 0;
    for(int i = 1;i<m;i++){
        if(b[i]<mn)
            mn = b[i];
    }
    int j, k;
    for(int i = 1;i<=mn;i++){
        j = 0;
        k = 0;
        while(j<n){
            if(i%a[j] != 0){
                break;
            }
            j++;
        }
        if(j==n){
            while(k<m){
                if(b[k]%i!=0){
                    break;
                }
                k++;
            }
            if(k == m)
            cn++;
        }
    }
    return cn;
}
