#include<iostream>
#include<unordered_map>
#include<vector>
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

void storestring(TrieNode*root, vector<string> &ans, string &temp){
    // base case 
    if(root -> isTerminal == true){
        ans.push_back(temp);
        // no need for return
    }


    // ek case mujhe solve karna hai
    for(auto i : root -> child){
        char ch = i.first;
        TrieNode*child = i.second;
        temp.push_back(ch);
        //  bake recursion dekh lega
        storestring(child, ans, temp);
        temp.pop_back();
    }
}

void findWordsWithPrefix(TrieNode*root, string prefix, vector<string>&ans){
    // base case 
    if(prefix.length() == 0){
        // prefix pura search ho chuka hai
        // and root abhi prefix ke last character ko store kar rahi hoge
        
        // ab is last node ke niche jitne bhi string ban sakti hai
        // un sabko create karke store karenge using below function
        string temp = "";
        storestring(root, ans, temp);
        return;
    }

    // ek case hum solve karenge 
    char ch = prefix[0];
    TrieNode*child;

    if(root -> child.find(ch) != root -> child.end()){
        // present
        child = root -> child[ch];
    }
    else{
        return;
    }

    findWordsWithPrefix(child, prefix.substr(1), ans);

}

vector<vector<string>> getSuggestion(TrieNode*root, string &prefix){

    vector<vector<string>>ans;
    

    string temp = "";
    for(int i=0; i<prefix.length(); i++){
        vector<string>tempAns;
        char ch = prefix[i];
        temp.push_back(ch);
        findWordsWithPrefix(root, temp, tempAns);
        //add temp prefix in tempAns Array
        for(int j=0; j<tempAns.size(); j++){
            tempAns[j] = temp + tempAns[j];
        }
        ans.push_back(tempAns);
    }
    return ans;
}

int main(){
    TrieNode* root = new TrieNode('-');

    insertIntoTrie(root, "babbar");
    insertIntoTrie(root, "baby");
    insertIntoTrie(root, "baba");
    insertIntoTrie(root, "bala");
    
    string prefix = "bal";
    
    vector<vector<string>>ans = getSuggestion(root, prefix);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << ", ";
        }
        cout << endl;
    }


    return 0;
}