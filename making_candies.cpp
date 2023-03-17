#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long minimumPasses(long m, long w, long p, long n) {
    long ans = 0;
    long val = 0;
    long x;
    while(true){
        val += (m * w);
        if(val >= n){
            break;
        }
        ans++;
        if(m > w){
            x = (val / p);
            w = w + x;
            val -= (x * p) ;
        }
        else if(w >= m){
            x = (val / p);
            m = m + x;
            val -= (x * p);
        }
    }
    return ans + 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    long m = stol(first_multiple_input[0]);
    long w = stol(first_multiple_input[1]);
    long p = stol(first_multiple_input[2]);
    long n = stol(first_multiple_input[3]);
    long result = minimumPasses(m, w, p, n);
    // fout << result << "\n";
    // fout.close();
    cout << result << "\n";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
