#include <iostream>
#include <stack>
#include <queue>
#include <vector>

void collectionMystery9(std::queue<int>& queue)
{
	std::stack<int> stack;
	int size = queue.size();
	for (int i = 0 ; i < size ; i++ )
	{
		int element = queue.front();
		queue.pop();
		if (element < 0)
		{
			stack.push(element);
			 
		}else
		{
			queue.push(element);
			
		}
		
	}
	
	for (; !stack.empty(); stack.pop())
	{
		int e = stack.top();
		queue.push(e);
		
	}
	std::cout <<"q(" ;
		for (; !queue.empty(); queue.pop())
		{
			std::cout <<queue.front() << ", ";
		} 
		std::cout << ") ; "<< std::endl;
}

std::queue<int> buildQueue(const std:: vector<int> & array)
{
	 	std::queue<int> q;
	 	for (auto e : array)
	 	{
	 		q.push(e);
	 		
		 }
		 return q;
}

int main ()
{
	auto qd = buildQueue ({-5,3,1,-4,7, -9 , 5,2});
	collectionMystery9(qd);
}
