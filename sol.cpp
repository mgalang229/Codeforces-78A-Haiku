#include <bits/stdc++.h>

using namespace std;

int CountVowels(string phrase) {
	int cnt = 0;
	for (int i = 0; i < (int) phrase.size(); i++) {
		if (phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u') {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s1;
	getline(cin, s1);
	string s2;
	getline(cin, s2);
	string s3;
	getline(cin, s3);
	// check if the strings contain 5 - 7 - 5 vowels
	if (CountVowels(s1) == 5 && CountVowels(s2) == 7 && CountVowels(s3) == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << '\n';
	return 0;
}
