vector<vector<int>> triplet(int n, vector<int> &arr)
{

    set<vector<int>> uniqTrip;

    for(int i =0; i<n; i++){
        set<int> st;
        for(int j = i+1; j<n; j++){
            int remain = -(arr[i] + arr[j]);

            if(st.find(remain) != st.end()){
                vector<int> temp = {arr[i], arr[j], remain};
                sort(temp.begin(), temp.end());
                uniqTrip.insert(temp);
            }

            st.insert(arr[j]);
        }

    }

    vector<vector<int>> ans(uniqTrip.begin(), uniqTrip.end());

    return ans;
}