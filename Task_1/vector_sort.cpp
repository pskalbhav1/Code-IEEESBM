int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> vec;
    int n,i,insert;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> insert;
        vec.push_back(insert);
    }  
    sort(vec.begin(),vec.end());
    for(int it : vec) {
        cout << it << " ";
    }
    return 0;
}
