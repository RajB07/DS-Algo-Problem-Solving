

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count = 0,n = A.size();
    for (int i=0;i<n-1;i++)
        count += max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    return count;

}
