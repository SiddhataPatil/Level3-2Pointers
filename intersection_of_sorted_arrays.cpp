/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Intersection of sorted arrays
 Example     :Input:A : [ 1, 2, 3, 3, 4, 5, 6 ]  B : [ 3, 3, 5 ]   Output: [ 3, 3, 5 ] 
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 vector<int> intersect(const vector<int> &A, const vector<int> &B)  ;
}obj;

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    int length_of_A = A.size(), length_of_B = B.size(),i=0,j=0;
    vector <int> result;

    while(i<length_of_A && j<length_of_B)
    {
        if(A[i]==B[j])
        {
            result.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
        {
            i++;
        }else if(A[i]>B[j])
        {
            j++;
        }
    }
    return result;
}

int main()
{
  vector<int> result;
  int a1[7]= {1, 2, 3, 3, 4, 5, 6};
  int b1[3]= {3, 3, 5};
  vector<int>A(a1,a1+sizeof(a1)/sizeof(a1[0]));
  vector<int>B(b1,b1+sizeof(b1)/sizeof(b1[0]));
  cout<<"Given input : "<<endl;
  cout<<"A : [ 1, 2, 3, 3, 4, 5, 6 ]"<<endl;
  cout<<"B: [3, 3, 5]"<<endl;
  cout<<"Elements Intersecting are = "<<endl;
  result=obj.intersect(A, B) ;
  for(int i=0; i<result.size(); i++)
  {
            cout<<result[i]<<endl;
  }
  return 0;
}
