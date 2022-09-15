int p=5,n=5;
    
    for(int i=1; i<=n; i++){
        for(int j=p-1; j>=1; j--){
            cout << " ";
        }
        for(int k=1; k<=i; k++)
                cout << "* ";
        cout << endl;
        p--;
    }

    p=1;

    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=p; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++)
                cout << "* ";
        cout << endl;
        p++;
    }
