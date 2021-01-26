int num, i, a, m=0, n=1;
    cout<<"enter number of terms to be represented: ";
    cin>>num;
    cout<<Fibonacci sequence: ";
    for(i=0; i<num; i++){
            cin>> m;
        a=m+n;
        m=n;
        n=a;
    }
