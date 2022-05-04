/**
 * Implement Trie
 * Insert delete and search
 **/
class Trie {
	bool isEnd;
	vector<Trie*> children;
	Trie() {
		this->isEnd = false;
		children = vector<Trie*>(26, NULL);
	}
};
void insert(string word, Trie* root) {
	Trie* curr = root;
	for (int i = 0; i < word.length(); i++) {
		char ch = word[i];
		if (!curr->children[ch - 'a']) {
			curr->children[ch - 'a'] = new Trie();
		}
		curr = curr->children[ch - 'a'];
		if (i == word.length() - 1) {
			// last word
			curr->isEnd = true;
		}
	}
}
bool search(string word, Trie* root) {
	Trie* curr = root;
	for (int i = 0; i < word.length(); i++) {
		char ch = word[i];
		if (!curr->children[ch - 'a']) {
			return false;
		}
		curr = curr->children[ch - 'a'];
	}
	return curr->isEnd;
}
Trie* deleteWord(string word, Trie* root, int depth = 0) {
	if (!root) {
		return root;
	}
	if (depth == word.size()) {
		if (root->isEnd) {
			root->isEnd = false;
		}
		if (isEmpty(root)) {
			// check if it is prefix or not
			delete(root);
			root = NULL;
		}
		return root;
	}
	int idx = word[depth] - 'a';
	root->children[idx] = deleteWord(word, root->children, depth + 1);
	// if root has no children and is not end of some word
	if (isEmpty(root) and !root->isEnd) {
		delete(root);
		root = NULL;
	}
	return root;
}