class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        std::vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        std::set<string> transformation;
        for (const auto& word : words) {
            string key;
            for (const auto& one : word) {
                key += morse_code[one - 97];
            }
            transformation.insert(key);
        }
        return transformation.size();
    }
};