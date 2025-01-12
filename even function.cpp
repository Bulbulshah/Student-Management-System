//#include<iostream>
//using namespace std;
//
//int Sum_Even(int);
//int main(){
//	int num;
//	cout<<" Enter the numbers "<<endl;
//	cin>>num;
//	cout<<" the sum is : "<< Sum_Even(num);
//	return 0;
//}
//int Sum_Even(int sum){
//	int ans=0;
//	for(int i=0 ; i<sum; i++){
//		if(i % 2==0){
//			ans = ans + i;
//			
//		}
//		return ans;
//	}
//}
#include <iostream>
using namespace std;

int Sum_Even(int); // Function declaration

int main() {
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "The sum is: " << Sum_Even(num);
    return 0;
}

int Sum_Even(int sum) {
    int ans = 0;
    for (int i = 0; i <= sum; i++) { // Include 0 to sum (inclusive)
        if (i % 2 == 0) { // Check if the number is even
            ans += i;
        }
    }
    return ans; // Return the total sum after the loop completes
}
