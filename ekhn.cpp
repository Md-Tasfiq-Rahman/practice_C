/*
#include<iostream>
using namespace std;
class myclass {
	int a;
public:
	myclass(int x);
	void show()
	{
		cout<<a<<endl;
	}
	~myclass();
};
myclass::myclass(int x)
{
	cout<<"In constructor\n";
	a=x;
}
myclass::~myclass()
{
   cout<<" in destructor\n";
}
int main()
{
	myclass ob(41);
	myclass *p;
	p=&ob;
	myclass ob2=ob;
	ob2.show();
	ob.show();
	p->show();
	//printf("hello world");
	return 0;
}
*/

/*
#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
public:
	void makePoint(int a, int b)
	{
		x=a;
		y=b;
	}
void show()
	{
		cout<<x<<","<<y<<endl;
	}
	Point()
	{
	    cout<<"in constructor\n";
	}
    ~Point()
    {
        cout<<"In destructor\n";
    }
};
int main()
{
    Point ob2;
	Point ob[4];
	Point *p;
	int i=0;
	for(i=0; i<4; i++)
	ob[i]. makePoint(i, i+1);
	for(i=0; i<4; i++)
		ob[i].show();
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
public:
	Point(int a, int b)
	{
		cout<<"Constructing\n";
		this->x=a;
		this->y=b;
	}
	~Point()
	{
		cout<<"Destructing\n";
	}

	void show()
	{
		cout<<x<<", "<<y<<endl;
	}
};
void f(Point ob)
{
	ob.show();
}

int main()
{
	Point ob(2, 3);
	f(ob);
	cout<<"hello";
 	return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
int **a;// your code goes here
int r=3,c=4;
a=new int*[r];
int i,j;
for(i=0;i<r;i++)
{
	a[i]=new int[c];
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cin>>a[i][j];
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cout<<a[i][j];
	}
}
for(i=0;i<r;i++)
{
    delete []a[i];
}
delete []a;

return 0;
}




