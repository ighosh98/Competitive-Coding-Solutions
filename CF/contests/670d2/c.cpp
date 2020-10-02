#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl "\n"
#define CPrint(c)  for(auto i:(c)) { cout<<i<<" "; } nl
#define eb   emplace_back
#define ef   emplace_front
#define pb   push_back
#define pf   push_front
#define popb pop_back
#define popf pop_front
#define mp   make_pair
#define f first
#define s second
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;
using namespace std;
/*
+1: for each synonym a word contains with its letter in correct order
-1:for each antonym a word contains with its letter in correct order
+1: For each pair of words that both contain the same antonym/synonym with letters in correct order
*/
int findKangarooScore(vector<string> words, vector<string> wordToSynonyms, vector<string> wordToAntonyms) {
	map<string, int>score;
	map<string, vector<string>>synonyms;
	map<string, vector<string>>antonyms;
	for (ll i = 0; i < wordToSynonyms.size(); i++)
	{
		ll x = wordToSynonyms[i].find(":");
		string word = wordToSynonyms[i].substr(0, x);
		string rem = wordToSynonyms[i].substr(x + 1);
		vector<string>y;
		while (rem.find(",") != string::npos) {
			x = rem.find(",");
			y.eb(rem.substr(0, x ));
			string temp =  rem.substr(x + 1);
			rem = temp;
		}
		y.eb(rem.substr(0, x));
		vector<string> fin;
		cout << word << ": ";
		for (ll t = 0; t < y.size(); t++) {
			cout << y[t] << ' ';

			ll j = 0, k = 0;
			while (j < y[t].length() and k < word.length()) {
				if (y[t][j] == word[k])
				{
					j++;
					k++;
				}
				else
				{
					k++;
				}
			}
			if (j == y[t].length())
			{
				score[word]++;
				fin.eb(y[t]);
			}
		}
		synonyms[word] = fin;


	}
	cout << endl;
	for (ll i = 0; i < wordToAntonyms.size(); i++)
	{
		ll x = wordToAntonyms[i].find(":");
		string word = wordToAntonyms[i].substr(0, x);
		string rem = wordToAntonyms[i].substr(x + 1);
		vector<string>y;
		while (rem.find(",") != string::npos) {
			x = rem.find(",");
			y.eb(rem.substr(0, x));
			string temp =  rem.substr(x + 1);
			rem = temp;
		}
		y.eb(rem.substr(0, x));
		vector<string>fin;
		for (ll t = 0; t < y.size(); t++) {
			ll j = 0, k = 0;
			while (j < y[t].length() and k < word.length()) {
				if (y[t][j] == word[k])
				{
					j++;
					k++;
				}
				else
				{
					k++;
				}
			}
			if (j == y[t].length())
			{
				score[word]--;
				fin.eb(y[t]);
			}
		}
		antonyms[word] = fin;

	}
	for (auto it : synonyms)
	{
		sort(it.second.begin(), it.second.end());
	}
	for (auto it : antonyms)
	{
		sort(it.second.begin(), it.second.end());
	}

	ll total = 0;
	for (int i = 0; i < words.size(); i++)
	{
		cout << score[words[i]] << endl;
		total += score[words[i]];
	}
	for (ll i = 0; i < words.size(); i++) {
		for (ll j = i + 1; j < words.size(); j++)
		{
			for (ll k = 0; k < antonyms[words[i]].size(); k++)
			{
				for (ll t = 0; t < antonyms[words[j]].size(); t++) {
					if (antonyms[words[j]][t] == antonyms[words[i]][k])
						total += 1;
				}
			}
			for (ll k = 0; k < synonyms[words[i]].size(); k++)
			{
				for (ll t = 0; t < synonyms[words[j]].size(); t++) {
					if (synonyms[words[j]][t] == synonyms[words[i]][k]) {
						total += 1;
					}
				}
			}
		}
	}
	return total;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<string>words = {"illuminated", "animosity", "container", "lit", "amit", "encourage", "lighted"};
	vector<string>wordToSynonyms = {"encourage:urge,boost,inspire", "container:tin,bag,can,bottle", "lighted:lit", "illuminated:lit"};
	vector<string>wordToAntonyms = {"encourage:discourage", "lighted:dark", "animosity:amity,like"};
	cout << findKangarooScore( words,  wordToSynonyms,  wordToAntonyms) << endl;

}

//find the common subsequence and check if the word exist as an antonym or synonym
