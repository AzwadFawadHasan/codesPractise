// CPP code to illustrate
// Queue in Standard Template Library (STL)

/*
#include <iostream>
#include <queue>

using namespace std;

// Print the queue


// Driver Code
int main()
{
	
queue<int> Queue;
for (int i = 1; i <= 6; i++) {
    Queue.enqueue(i);
}                             // {1, 2, 3, 4, 5, 6}

for (int i = 0; i < Queue.size(); i++) {
    cout << Queue.dequeue() << " ";
}
cout << Queue << "  size " << Queue.size() << endl;

}
*/

#include <iostream>
#include <queue>

int main()
{
  std::queue<int> Queue;

  for(int Iterator1 = 1; Iterator1 <= 6; Iterator1++) 
  {
    std::cout << "Queue.push: " << Iterator1 << "\n";
    Queue.push(Iterator1);
  }
  
  std::cout << "\n";
  int i =0;
  int s = Queue.size();
  while (i!=s)
  {
  	i++;
    std::cout << "Queue.pop: " << Queue.front() << "\n";
    Queue.pop();
  }
}
