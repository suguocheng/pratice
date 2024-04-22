#include <iostream>  

int main()
{
    std::cout<<"请输入一个整数：";
	int x{};
	std::cin>>x;
	std::cout<<"请输入另一个整数：";
	int y{};
	std::cin>>y;
	std::cout<<x<<"+"<<y<<"是"<<x+y<<"。\n";
	std::cout<<x<<"-"<<y<<"是"<<x-y<<"。\n";
	return 0;
}

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count{0};
        int maxcount{0};
        for(auto i=nums.begin();i<nums.end();i++)
        {
            if(*i==1)
            {
                count++;
                if(count>maxcount)
                {
                    maxcount=count;
                }
            }
            else
            {
                count=0;
            }
        }
        return maxcount;
    }
};