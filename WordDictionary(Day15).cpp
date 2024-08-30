/*You are given a list of n words representing entries in a dictionary.
Your task is to determine the first word in lexicographical (dictionary) order.
However, if the dictionary contains any duplicate words, you should return "Invalid".*/



class Solution {
  public:
    string firstWord(int n, vector<string> &dictionary) {
        // code here
       sort(dictionary.begin(), dictionary.end());

        // Check for duplicates
        for (int i = 1; i < n; i++) {
            if (dictionary[i] == dictionary[i - 1]) {
                return "Invalid";  // Return "invalid" if a duplicate is found
            }
        }

        // Return the first word if no duplicates are found
        return dictionary[0];
    }
};
