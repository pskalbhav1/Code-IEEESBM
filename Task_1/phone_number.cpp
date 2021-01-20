#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int num,i,cnt=0,j=0;
	string digits;
	string str="8";
	cin >> num;
	cin >> digits;
	for (i=0;i<digits.size();i++){
	    if (digits[i]=='8'){
	        cnt++;
	        break;
	    }
	}
	if (cnt==0){
	    cout << "0";
	    exit(0);
	}
	else {
		int rem=num/11;
		i=0;
		while (rem){
		    for (;i<digits.size();i++){
        	    if (digits[i]=='8'){
        	       break;
        	    }
		    }
			for (;j<num;j++){
				if (j==i)
					continue;
				str=str+digits[j];
				if (str.size()==11)
			    	break;
			}   
		i++; 
		j++;
		rem--;
		cout << str << endl;
		str="8";
	    }
    }
return 0;
}
	
