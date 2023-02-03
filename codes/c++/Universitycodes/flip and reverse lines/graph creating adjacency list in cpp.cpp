#include <iostream>
#include <list>
using namespace std;

class graph {
	public:
			int v;
			list<int> *l;
			graph(int v)
			{
				this -> v= v;
				l = new list<int>[v];
			}
			
			void addedge(int x, int y)
			{
				l[x].push_back(y);
				l[y].push_back(x);
				
			}
			void print(){
				for (int i=0; i<v; i++)
				{
					cout << "vertix "<<i<<"->";
					
							
					for (auto x : l[i])
					{
						cout << x  <<",";
					}
					cout << endl;
				}
			}
};

int main (){
		graph o(4);
		o.addedge(0,1);
		o.addedge(0,2);
		o.addedge(2,3);
		o.addedge(1,2);
}
