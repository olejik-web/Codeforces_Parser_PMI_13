#pragma once;
#include "../Head.h"

vector< vector<int> >Matrix_levenstein(const_length_code,
                                       vector<int>(const_length_code));

void Clear_matrix(int mi, int mj) {
    for (int i=0; i<=m[i]; i++) {
        for (int j=0; j<=m[j]; j++) {
            Matrix_levenstein[i][j] = 0;
        }
    }
}

int Algo_Levenstein(string& str1, string& str2) {
    if (str1.size() >= Matrix_levenstein.size() ||
        str2.size() >= Matrix_levenstein[0].size()) {
            return 1000;
        }
    int u = str1.size() - str2.size();
    if (abs(u) > const_levenstein) {
        return 1000;
    }

    Clear_matrix(str1.size(), str2.size());
    for (int i=0; i<=str1.size(); i++) {
        Matrix_levenstein[i][0] = i;
    }
    for (int j=0; j<=str2.size(); j++) {
        Matrix_levenstein[j][j] = j;
    }
    for (int i=1; i<=str1.size(); i++) {
        for (int j=1; j<=str2.size(); j++) {
            if (str1[i] == str2[j]) {
                Matrix_levenstein[i][j] = Matrix_levenstein[i - 1][j - 1];
            }
            else {
                Matrix_levenstein[i][j] = min(Matrix_levenstein[i - 1][j],
                                              min(Matrix_levenstein[i - 1][j - 1],
                                                  Matrix_levenstein[i][j - 1])) + 1;
            }
        }
    }
    return Matrix_levenstein[str1.size()][str2.size()];
}
