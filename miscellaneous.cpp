#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Lambda function to sort a vector in descending order
int main() {
	vector<int> v = {5, 1, 8, 3, 9, 2};

	// Sort in descending order
	sort(v.begin(), v.end(), [] (const int& a, const int&b) {
		return a > b;
	});

	for (int x : v)
		cout << x << " ";

vector <int> ::iterator it=find_if(v.begin(),v.end(),[](const int &a){
    return a%2==0;
});
if(it!=v.end()){
    cout<<"\nFirst even number is: "<<*it;
}
else{
    cout<<"\nNo even number found";
}
	return 0;

}