#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    unordered_set<long long> nums;
    long long num;

    while (input >> num) {
        if (num == 0) {
            vector<long long> res(nums.begin(), nums.end()); //sorted
            sort(res.begin(), res.end());

            for (int i = 0; i < res.size(); i++) {
                output << res[i] << " ";
            }
            break;
        }
        else if (num > 0) {
            nums.insert(num); //добавить число
        }
        else {
            nums.erase(-num); //удалить противоположнoe
        }
    }

    return 0;
}