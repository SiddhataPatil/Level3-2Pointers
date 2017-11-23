/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Container With Most Water
 Example     : Input : [1, 5, 4, 3] Output : 6 Explanation : 5 and 3 are distance 2 apart. So size of the base = 2. 
               Height of container = min(5, 3) = 3.  So total area = 3 * 2 = 6
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
 int maxArea(vector<int> &A)  ;
}obj;

int Solution::maxArea(vector<int> &A)
{
    //A is height
     int start = 0;
     int end = A.size() - 1;
     int area = 0;

        while(start < end)
        {
            area = max(area, (end - start) * min(A[start],A[end]));

                if (A[start] < A[end])
                {
                    start++;
                }
                else
                {
                    end--;
                }
        }
return area;
}

int main()
{
  int result;
  int a1[4]= {1, 5, 4, 3};
  vector<int>A(a1,a1+sizeof(a1)/sizeof(a1[0]));
  cout<<"Given input : "<<endl;
  cout<<"A : [ 1, 5, 4, 3 ]"<<endl;
  result=obj.maxArea(A) ;
  cout<<"Total area of the container = "<<result<<endl;
  return 0;
}
