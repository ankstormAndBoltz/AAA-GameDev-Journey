#include <iostream>
#include <vector>

int getMaxScore(const std::vector<int>& scores) {
    if (scores.empty()) return 0;

    int maxScore = scores[0];
    for (int s : scores) {
        if (s > maxScore) {
            maxScore = s;
        }
    }
    return maxScore;
}

double getAverageScore(const std::vector<int>& scores) {
    if (scores.empty()) return 0.0;

    int sum = 0;
    for (int s : scores) {
        sum += s;
    }

    return static_cast<double>(sum) / scores.size();
}

int main() {
    int n;
    std::vector<int> scores;

    std::cout << "How many scores? ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "No scores entered.\n";
        return 0;
    }

    std::cout << "Enter scores:\n";
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        scores.push_back(x);
    }

    std::cout << "Scores: ";
    for (int s : scores) {
        std::cout << s << ' ';
    }
    std::cout << '\n';

    std::cout << "Max Score: " << getMaxScore(scores) << '\n';
    std::cout << "Average Score: " << getAverageScore(scores) << '\n';

    return 0;
}
