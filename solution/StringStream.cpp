/*Sample Input

23,4,56

Sample Output

23
4
56

Problem description: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
*/

#include <sstream>
#include <vector>
#include <iostream>
 
using std::stringstream;
using std::vector;
using std::string;
using std::cout;
using std::cin;

vector<int> parseInts(string str) {
    stringstream ss(str);
	vector<int> vectorOfIntegers;
    int variableToStoreStr{};
 
    while (ss >> variableToStoreStr){
    vectorOfIntegers.push_back(variableToStoreStr);

        if (ss.peek() == ','){
            ss.ignore();
        }
    } 
    return vectorOfIntegers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
