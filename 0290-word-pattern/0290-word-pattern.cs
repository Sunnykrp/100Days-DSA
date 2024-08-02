using System;
using System.Collections.Generic;

public class Solution {
    public bool WordPattern(string pattern, string s) {
        if (pattern == s) {
            if (pattern.Length == 1) {
                return true;
            }
            return false;
        }

        List<string> words = new List<string>();
        string[] splitWords = s.Split(' ');
        foreach (string word in splitWords) {
            words.Add(word);
        }

        if (pattern.Length != words.Count) {
            return false;
        }

        for (int i = 0; i < words.Count; i++) {
            for (int j = 0; j < words.Count; j++) {
                if (words[i] == words[j] && pattern[i] != pattern[j]) {
                    return false;
                }
                if (pattern[i] == pattern[j] && words[i] != words[j]) {
                    return false;
                }
            }
        }

        return true;
    }
}
