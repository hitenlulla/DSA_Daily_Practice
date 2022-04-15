// https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n =  A.size();
    int slow = A[0];
    int fast = A[0];
    
    do{
        slow = A[slow];
        fast = A[A[fast]];
    }while(slow != fast);

    fast = A[0];
    while(slow != fast){
        slow = A[slow];
        fast = A[fast];
    }

    int repeated_num = slow;
    int sum_ = (n * (n + 1)) / 2;

    int curr_sum = 0;
    for(int i = 0; i <n; i++){
        curr_sum += A[i];
    }

    curr_sum = curr_sum - repeated_num;
    int missing_num = sum_ - curr_sum;

    vector<int> ans;
    ans.push_back(repeated_num);
    ans.push_back(missing_num);
    return ans;
}
