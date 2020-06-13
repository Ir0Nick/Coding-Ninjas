// #include "TrieNode.h"
#include <string>
#include <vector>
class TrieNode {
	public :
	char data;
	TrieNode **children;
	bool isTerminal;

	TrieNode(char data) {
		this -> data = data;
		children = new TrieNode*[26];
		for(int i = 0; i < 26; i++) {
			children[i] = NULL;
		}
		isTerminal = false;
	}
};

class Trie {
	TrieNode *root;

	public :
	int count;

	Trie() {
		this->count = 0;
		root = new TrieNode('\0');
	}

	bool insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			if (!root->isTerminal) {
				root -> isTerminal = true;
				return true;	
			} else {
				return false;
			}
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}

		// Recursive call
		return insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		if (insertWord(root, word)) {
			this->count++;
		}
	}
    
    void print(TrieNode* root,string str)
    {
        	if(root->isTerminal)
                cout<<str<<'\n';
        
        	for(int i=0;i<26;i++)
            {
                if(root->children[i]!=NULL)
                    print(root->children[i],str + root->children[i]->data);
            }
    }
    
    
    void autoComplete(vector<string> input, string pattern) {
       for(int i=0;i<input.size();i++)
           insertWord(input[i]);
        TrieNode* ptr = root;string s = pattern;
        while(pattern.size()!=0&&ptr!=NULL)
        {
            int index = pattern[0]-'a';
            ptr = ptr->children[index];
            pattern = pattern.substr(1);
            
        }
        if(ptr)
        print(ptr,s);
    }
    
    
    

};
