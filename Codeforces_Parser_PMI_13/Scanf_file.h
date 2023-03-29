#pragma once
#include "Head.h"
#include "Solution_stud.h"


// contest
void scanf_file_contest(string &file_name, vector<string>&Name_contest) {
    string contest;
    ifstream in(file_name);
    while(getline(in, contest)) {
        Name_contest.push_back(contest);
    }
    in.close();
}


// tasks
void scanf_file_task(string& file_name, vector<string>& Name_task) {
    string task;
    ifstream in(file_name);
    while (getline(in, task)) {
        Name_task.push_back(task);
    }
    in.close();
}


// student
void scanf_file_student(string& file_name, vector<string>& Name_student) {
    string student;
    ifstream in(file_name);
    while (getline(in, student)) {
        Name_student.push_back(student);
    }
    in.close();
}


// compiler
void scanf_file_compiler(string& file_name, vector<string>& Name_compiler) {
    string compiler;
    ifstream in(file_name);
    while (getline(in, compiler)) {
        Name_compiler.push_back(compiler);
    }
    in.close();
}


// all_base_info
void scanf_all_info(vector<string>& Name_contest,
                    vector<string>& Name_task,
                    vector<string>& Name_student,
                    vector<string>& Name_compiler) {
    string Loc_file_name_contest = Folder_base_put + File_contest;
    string Loc_file_name_task = Folder_base_put + File_tasks;
    string Loc_file_name_student = Folder_base_put + File_student;
    string Loc_file_name_compiler = Folder_base_put + File_compiler;
    scanf_file_contest(Loc_file_name_contest, Name_contest);
    scanf_file_task(Loc_file_name_task, Name_task);
    scanf_file_contest(Loc_file_name_student, Name_student);
    scanf_file_compiler(Loc_file_name_compiler, Name_compiler);
}


void scanf_info_solution(string& Filename, Solution_stud& sol) {
    ifstream in(Filename);
    string str;
    string solution = "";
    getline(in, str); // id посылки
    sol.set_Name_package(str);
    getline(in, str); // time
    sol.set_Date(str);
    getline(in, str); // nickname
    sol.set_Name_stud(str);
    getline(in, str); // compiler
    sol.set_Name_compiler(str);
    while (getline(in, str)) {
        solution += str;
    }
    sol.setSolution(solution);
    in.close();
}
