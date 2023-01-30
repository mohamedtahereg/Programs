#include <algorithm>
#include <stdio.h>
#include <vector>
#include <set>
#include <string>
#include <utility>
#include <math.h>
#include <map>
#include <cctype>
#include <iostream>
using namespace std;

int main(){

  string s;
  cin>>s;
  s[0] = toupper(s[0]);

  for(int i=1;i<s.size();i++)
    s[i]= tolower(s[i]);
    cout<<s;
  
  
  
  
  

}