#include <string>
#include <vector>
#include <iostream>
#include <tuple>
using namespace std;

string survey_[1001];
vector<char> survey;
vector<char> choices;
vector <pair<char, char>> result_pair;
vector <tuple<char, char, char>> result;

int main() {
    string survey_list, choice_list;
    getline(cin, survey_list);
    getline(cin, choice_list);

    for (int i = 0; i < survey_list.length(); i++) {
        if (survey_list[i] != '[' && survey_list[i] != '"' && survey_list[i] != ',' && survey_list[i] != ' ' && survey_list[i] != ']') {
            survey.push_back(survey_list[i]);
        }
    }
    for (int i = 0; i < choice_list.length(); i++) {
        if (choice_list[i] != '[' && choice_list[i] != ',' && choice_list[i] != ' ' && choice_list[i] != ']')
            choices.push_back(choice_list[i]);
    }
    
    for (int i = 0; i < survey.size()-1; i++) {
        result_pair.push_back(make_pair(survey[i], survey[i + 1]));
    }

    for (int i = 0; i < choices.size(); i++) {
        result.push_back(make_tuple(result_pair[i].first, result_pair[i].second, choices[i]));
    }

    for (int i = 0; i < result.size(); i++) {
        cout << get<0>(result[i]) << ":" << get<1>(result[i]) << ":" << get<2>(result[i]) << "\n";
    }

}