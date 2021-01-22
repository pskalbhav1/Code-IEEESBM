int num, i, a, m=0, n=1;
    printf("enter number of terms to be represented: ");
    scanf("%d", &num);
    printf("Fibonacci sequence: ");
    for(i=0; i<num; i++){
            printf("%d, ", m);
        a=m+n;
        m=n;
        n=a;
    }
