#ifndef KEYBOARDGENINFO_H
#define KEYBOARDGENINFO_H

#include <vector>


namespace gen 
{
using std::string;
using std::vector;

struct popupInfo
{
     vector<string> popupTxt;
     uint32_t pos[5];
};

struct key
{
     string txt;
     popupInfo popup;
};

struct keyInfo
{
     key primary;
     key secondary;
};


const vector<keyInfo> vec_1_Info = 
{
};


const vector<keyInfo> vec_1_num_Info = 
{
};


const vector<keyInfo> vec_1_sym_Info = 
{
};


}//namespace gen

#endif // KEYBOARDGENINFO_H
