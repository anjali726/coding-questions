//task1
//Understanding the concept of loops and try to create a pyramid of * pattern of size n

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int space=n-1;
	int star=1;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=space;k++){
			cout<<" ";
		}
		for(int j=1;j<=star;j++){
			cout<<'*';
		}
  cout<<endl;
	space--;
	star++;
	}	
	return 0;
}


//when n=5 (output)

//    *
//   **
//  ***
// ****
//*****
