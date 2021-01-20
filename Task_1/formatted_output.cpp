int i,temp,j;
        temp = int(A);
        char hex[50];
        while (temp != 0)
        {
            r = temp % 16;
            if (r < 10)
                hex[i++] = r + 48;
            else
                hex[i++] = r + 55;
            temp = temp / 16;
        }
        cout << "0x";        
        for (j = i; j > 0; j--)
            cout << hex[j];   
        for ()
    