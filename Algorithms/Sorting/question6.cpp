//Question: https://www.hackerrank.com/challenges/closest-numbers/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void insertion_sort(vector<int>& arr){
    int i, j, key;
    for(int i=1; i<arr.size();i++){
        j = i-1;
        key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
// Complete the closestNumbers function below.
vector<int> closestNumbers(vector<int> arr) {
    insertion_sort(arr);
    for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
    cout<<'\n';
    int i = 0, j = 1;
    int min = pow(10, 7);
    vector<int> result;
    while(i<arr.size()-1 && j<arr.size()){
        int diff = arr[j]-arr[i];
        if(diff < min){
            min = diff;
            result.clear();
            result.push_back(arr[i]);
            result.push_back(arr[j]);
        }else if(diff == min){
            result.push_back(arr[i]);
            result.push_back(arr[j]);
        }
        i++;j++;
    }
    return result;
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

    vector<int> result = closestNumbers(arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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
