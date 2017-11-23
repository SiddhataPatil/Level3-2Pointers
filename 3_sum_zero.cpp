/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? 
 Example     : Given input : A : [ 1, 0, 1, 2, -1, 4 ] Three set of numbers that equal to zero = [-1, 0, 1]
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 vector<vector<int> > threeSum(vector<int> &A)  ;
}obj;

vector<vector<int> > Solution::threeSum(vector<int> &A)
{

  vector<vector<int> > result;
  int length = A.size();
  vector<int> B;

  sort(A.begin(),A.end());

		for(int i=0; i<length and A[i]<=0;)
    {
			int sum = -A[i];

			for(int j=i+1,k=length-1;j<k;)
      {
				if(A[j]+A[k] ==sum)
        {
					B.push_back(A[i]);
					B.push_back(A[j]);
					B.push_back(A[k]);
					result.push_back(B);
					j++;
					B.clear();
				      while(j<k && (A[j]==A[j-1]))
              {
                j++;
              }
				}
				else if(A[j]+A[k] < sum)
        {
         j++;
        }
				else
        {
          k--;
        }
			}
			i++;
			while(i<length  and A[i]==A[i-1])i++;
		}

return result;
}

int main()
{
  vector<vector<int> > result;
  int a1[6]= {1, 0, 1, 2, -1, 4};
  vector<int>A(a1,a1+sizeof(a1)/sizeof(a1[0]));
  cout<<"Given input : "<<endl;
  cout<<"A : [ 1, 0, 1, 2, -1, 4 ]"<<endl;
  cout<<"Three set of numbers that equal to zero = "<<endl;
  result=obj.threeSum(A) ;
  for(int i=0; i<result.size(); i++)
  {
    for(int j=0; j<result[i].size(); j++)
    {
            cout<<result[i][j]<<endl;
    }
  }
  return 0;
}
