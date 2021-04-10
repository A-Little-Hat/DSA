###############priority queue####################
//this program is written using the stl::queue of c++

#include <iostream>
#include <queue>
using namespace std;
#define ROW 6
#define COL 3
struct student { //defining the student structure
   int roll,marks;
   student(int roll, int marks)
      : roll(roll), marks(marks)
   {
   }
};
struct comparemarks{ // defining the comparemarks structure
   bool operator()(student const& s1, student const& s2)
   //overloading the operators of the student structure
   {
      return s1.marks < s2.marks;
   }
};
int main()
{
   priority_queue<student, vector<student>, comparemarks> M;
   // using the priority queue. We have to use this type of syntax to use the priority queue.
   int a[ROW][COL] = {{15, 50}, {16, 60},
   {18,70}, {14, 80}, {12, 90}, {20, 100}};
   for (int i = 0; i < ROW; ++i) {
      M.push(student(a[i][0], a[i][1])); //inserting variables in the queue
   }
   cout<<"priority queue for structure ::"<<endl;
   while (!M.empty()) {
      student s = M.top();
      M.pop();
      cout << s.roll << " " << s.marks << "\n"; //printing the values
   }
   return 0;
}
