#include <bits/stdc++.h> 
using namespace std; 
int main(){
int num;
cout << "Please enter number of even numbers”";
cin >> num;
int *evenNumber = new int[num];
if (evenNumber== NULL) exit (1);
for (int n=0; n<num; n++) {
*(evenNumber+n) = (2*n+2);
//evenNumber[n] = (2*n+2);
} 

for (int n=0; n<num; n++) {
cout<<*(evenNumber+n) << ", ";
//cout<<evenNumber[n];
}
delete[] evenNumber;


}
