/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Remove Duplicates
 Example     : Input:A : [ 1, 1, 2 ]  Output:2
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 int removeDuplicates(vector<int> &A)  ;
}obj;

int Solution::removeDuplicates(vector<int> &A)
{
   int new_length = 0;
   int original_length = A.size();
			for (int i = 0; i < original_length; i++) {
				if (i < original_length - 1 && A[i] == A[i+1]) continue;
				else {
					A[new_length] = A[i];
					new_length++;
				}
			}
			return new_length;
}

int main()
{
  int result;
  int a1[3]= {1, 1, 2};
  vector<int>A(a1,a1+sizeof(a1)/sizeof(a1[0]));
  cout<<"Given input : "<<endl;
  cout<<"A : [ 1, 1, 2 ]"<<endl;
  cout<<"After removing duplicates, new length = ";
  result=obj.removeDuplicates(A) ;
  cout<<result<<endl;
  return 0;
}
