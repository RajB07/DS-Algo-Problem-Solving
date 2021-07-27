int n = a.size();

    int mx=a[0],max_array = a[0];
    for(int i=1;i<n;i++){
        mx = max(a[i] + mx,a[i]);
        max_array = max(max_array,mx);

    }
    return max_array;
