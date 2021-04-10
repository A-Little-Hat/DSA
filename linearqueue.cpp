##### Linear queue #####

// is_full
bool isfull() {
   if(rear == MAXSIZE - 1)
      return true;
   else
      return false;
}
// is_empty
bool isempty() {
   if(front < 0 || front > rear) 
      return true;
   else
      return false;
}
// enqueue
int enqueue(int data){
   if(isfull())
      return 0;
  // returns 0 if stack is full
   rear = rear + 1;
   queue[rear] = data;
   return 1;
  // returns 1 if operation done successfully 
 }
 // dequeue
 int dequeue() {
   if(isempty())
      return 0;

   int data = queue[front];
   front = front + 1;

   return data;
}
