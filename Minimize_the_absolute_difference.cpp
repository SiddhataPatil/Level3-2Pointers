/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Calculate the minimum absolute difference
 Example     :Input:A : [ 1, 4, 5, 8, 10 ]  B : [ 6, 9, 15 ]  C : [ 2, 3, 6, 6 ]  Output:1
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 int solve(vector<int> &A, vector<int> &B, vector<int> &C) ;
}obj;

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
    int result = INT_MAX;
    int i=A.size()-1,j=B.size()-1,k=C.size()-1;

    while(i>=0 and j>=0 and k>=0)
    {
        int maximum = max(A[i], max(B[j],C[k]));
        int minimum = min(A[i], min(B[j],C[k]));

        result = min(result, maximum - minimum);

        if(A[i]==maximum)
        {
            i--;
        }

        else if(B[j]==maximum)
        {
            j--;
        }

        else if(C[k]==maximum)
        {
            k--;
        }
    }
    return result;
}

int main()
{
  int result;
  int a1[5]= {1, 4, 5, 8, 10};
  int b1[3]= {6, 9, 15};
  int c1[4]= {2, 3, 6, 6};
  vector<int>A(a1,a1+sizeof(a1)/sizeof(a1[0]));
  vector<int>B(b1,b1+sizeof(b1)/sizeof(b1[0]));
  vector<int>C(c1,c1+sizeof(c1)/sizeof(c1[0]));
  string s = "92 70 4";
  cout<<"Given input : "<<endl;
  cout<<"A : [ 1, 4, 5, 8, 10 ]"<<endl;
  cout<<"B : [ 6, 9, 15 ]"<<endl;
  cout<<"C : [ 2, 3, 6, 6 ]"<<endl;
  cout<<"minimum absolute difference = ";
  result=obj.solve(A, B, C);
  cout<<result<<endl;
  return 0;
}
