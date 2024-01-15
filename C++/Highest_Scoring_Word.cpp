#include <string>
#include <sstream>
#include <vector>

int calculateScore(const std::string& word) {
    int score = 0;
    for (char c : word) {
        score += c - 'a' + 1;
    }
    return score;
}

std::string highestScoringWord(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    std::string highestScoringWord;
    int highestScore = 0;
    int currentWordIndex = 0;

    while (iss >> word) {
        int currentScore = calculateScore(word);
        if (currentScore > highestScore || (currentScore == highestScore && currentWordIndex == 0)) {
            highestScore = currentScore;
            highestScoringWord = word;
        }
        currentWordIndex++;
    }

    return highestScoringWord;
}
