#include<iostream>
#include<unordered_map>
using namespace std;

class TrieNode{
    public:

    char value;
    unordered_map<int, TrieNode*>child;
    bool isTerminal;

    TrieNode(char data){
        this -> value = data;
        this -> isTerminal = false;
    }
};

void insertIntoTrie(TrieNode* root, string word){
    // base case // ek time aise aayega jab aapki string empty aayegi
    if(word.length() == 0){
        root -> isTerminal = true;
        return;
    }



    // ek case solve karna
    // 1 char ko trie me insert kar deta hu
    char ch = word[0];
    TrieNode*child;

    // present h to vha chale jao
    // absent hai to create kardo
    if(root -> child.count(ch) == 1){
        child = root -> child[ch];
    }
    else{
        child = new TrieNode(ch);
        // link
        root -> child[ch] = child;
    }
 
    // bake recursion sambhal lega
    insertIntoTrie(child, word.substr(1));
}

bool searchTrie(TrieNode*root, string word){
    // base case 
    if(word.length() == 0){
        // root me last char pada hua hai
        return root -> isTerminal;
    }


    // ek case me solve karunga
    char ch = word[0];
    TrieNode*child;

    if(root-> child.find(ch) != root -> child.end()){
        // present
        child = root -> child[ch];
    }
    else{
        return false;
    }
    bool recursion = searchTrie(child, word.substr(1));
    return recursion;
}

void deleteWord(TrieNode*root, string word){
    // base case
    // ek time esa aayegajab word empty hoge and root me 
    // last char hoga 
    if(word.length() == 0){
        root -> isTerminal = false;
    }

    // ek case me solve karunga
    char ch = word[0];
    TrieNode* child;

    if(root -> child.find(ch) != root -> child.end()){
        // present 
        child = root -> child[ch];
    }
    else{
        return;
    }

    deleteWord(child, word.substr(1));
}
int main(){
    TrieNode* root = new TrieNode('-');
    insertIntoTrie(root, "cover");
    insertIntoTrie(root, "car");
    insertIntoTrie(root, "care");
    insertIntoTrie(root, "fivefoot");
    insertIntoTrie(root, "extremelyWell");
    insertIntoTrie(root, "coward");
    insertIntoTrie(root, "selfobsessed");
    insertIntoTrie(root, "tag");
    insertIntoTrie(root, "took");
    insertIntoTrie(root, "take");

     bool ans = searchTrie(root, "cover");
     if(ans){
        cout << "Found" << endl;
     }
     else{
        cout << "Not Found";
     }

        deleteWord(root, "cover");;
        ans = searchTrie(root, "cover");
        if(ans){
            cout << "Found" << endl;
        }
        else{
            cout << "Not Found";
        }

    return 0;
}