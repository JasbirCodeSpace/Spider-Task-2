//Question: https://www.hackerrank.com/challenges/find-the-median/problem
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void merge(vector<int>& arr, int l, int mid, int r){
    int i = l;
    int j = mid+1;
    if(arr[mid]<=arr[j])return;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j])i++;
        else{
            int idx = j;
            int value = arr[j];
            while(idx!=i){
                arr[idx] = arr[idx-1];
                idx--;
            }
            arr[idx] = value;
            i++;
            j++;
            mid++;
        }
    }
}

void merge_sort(vector<int>& arr, int l, int r){
    if(l>=r)return;
    int mid = l + (r - l)/2;
    merge_sort(arr, l,mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r);
}


int findMedian(vector<int> arr) {
    merge_sort(arr, 0, arr.size()-1);
    return arr[arr.size()/2];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = findMedian(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
