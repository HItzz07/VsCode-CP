#include<bits/stdc++.h>
using namespace std;

template<class X> 
void swp(X &a , X &b){
    X tp;
    tp = a;
    a = b;
    b = tp;
    cout<<"swapped "<<a <<" "<<b<<endl;


}

//Here are some member functions:
    // append(): Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the size of the new string.
    // assign(): Assigns new string by replacing the previous value (can also be done using ‘=’ operator).
    // at(): Returns the character at a particular position (can also be done using ‘[ ]’ operator). Its time complexity is O(1).
    // begin(): Returns an iterator pointing to the first character. Its time complexity is O(1).
    // clear(): Erases all the contents of the string and assign an empty string (“”) of length zero. Its time complexity is O(1).
    // compare(): Compares the value of the string with the string passed in the parameter and returns an integer accordingly. Its time complexity is O(N + M) where N is the size of the first string and M is the size of the second string.
    // copy(): Copies the substring of the string in the string passed as parameter and returns the number of characters copied. Its time complexity is O(N) where N is the size of the copied string.
    // c_str(): Convert the string into C-style string (null terminated string) and returns the pointer to the C-style string. Its time complexity is O(1).
    // empty(): Returns a boolean value, true if the string is empty and false if the string is not empty. Its time complexity is O(1).
    // end(): Returns an iterator pointing to a position which is next to the last character. Its time complexity is O(1).
    // erase(): Deletes a substring of the string. Its time complexity is O(N) where N is the size of the new string.
    // find(): Searches the string and returns the first occurrence of the parameter in the string. Its time complexity is O(N) where N is the size of the string.
    // insert(): Inserts additional characters into the string at a particular position. Its time complexity is O(N) where N is the size of the new string.
    // length(): Returns the length of the string. Its time complexity is O(1).
    // replace(): Replaces the particular portion of the string. Its time complexity is O(N) where N is size of the new string.
    // resize(): Resize the string to the new length which can be less than or greater than the current length. Its time complexity is O(N) where N is the size of the new string.
    // size(): Returns the length of the string. Its time complexity is O(1).
    // substr(): Returns a string which is the copy of the substring. Its time complexity is O(N) where N is the size of the substring
void stringAll(){
    string s0;                                       // s0 = “”
string s1("Hello");                               // s1 = “Hello”
string s2 (s1);                                  // s2 = “Hello”
string s3 (s1, 1, 2);                            // s3 = “el”
string s4 ("Hello World", 5);                     // s4 = “Hello”
string s5 (5, '*');                              // s5 = “*****”
string s6 (s1.begin(), s1.begin()+3);

// s0.copy("Hello",2);
cout<<s2.compare(s3)<<endl;
cout<<s1.erase(1,2)<<endl;      //erases the substring
cout<<s1.find("l")<<endl;
cout<<s5.length()<<endl;
cout<<s4.replace(2, 2 , "LLensgds")<<endl;
cout<<s5.size()<<endl;
cout<<s4.substr(3,6)<<endl;   //start index , length of substr
cout<<s4.append("Here we are in testing phase")<<endl;  


//c-style string    -> null terminated string

}


void stackAll(){
// Some of the member functions of Stack are:
    // push( ): Insert element at the top of stack. Its time complexity is O(1).
    // pop( ): removes element from top of stack. Its time complexity is O(1).
    // top( ): access the top element of stack. Its time complexity is O(1).
    // empty( ): checks if the stack is empty or not. Its time complexity is O(1).
    // size( ): returns the size of stack. Its time complexity is O(1).

    stack <int> s;

        //inserting 5 elements in stack from 0 to 4.
    for(int i = 0;i < 5; i++)
    {
        s.push( i ) ;
    }

    //Now the stack is {0, 1, 2, 3, 4}

    //size of stack s
    cout<<"Size of stack is: " <<s.size( )<<endl;

    //accessing top element from stack, it will be the last inserted element.
    cout<<"Top element of stack is: " <<s.top( ) <<endl ;

    //Now deleting all elements from stack 
    for(int i = 0;i < 5;i++)
    {
        s.pop( );
    }

    //Now stack is empty,so empty( ) function will return true.

    if(s.empty())
    {
        cout <<" Stack is empty."<<endl;
    }
    else
    {
        cout <<"Stack is Not empty."<<endl;
    }    
}

void queueAll(){
// Some member function of Queues are:
    // push( ): inserts an element in queue at one end(rear ). Its time complexity is O(1).
    // pop( ): deletes an element from another end if queue(front). Its time complexity is O(1).
    // front( ): access the element on the front end of queue. Its time complexity is O(1).
    // empty( ): checks if the queue is empty or not. Its time complexity is O(1).
    // size( ): returns the size of queue. Its time complexity is O(1).

    char qu[4] = {'a', 'b', 'c', 'd'};        
    queue <char> q;
    int N = 3;                            // Number of steps
    char ch;
    for(int i = 0;i < 4;++i)
        q.push(qu[i]);
    for(int i = 0;i < N;++i) {
            ch = q.front();
    q.push(ch);
            q.pop();
    }
    while(!q.empty()) {
        printf("%c", q.front());
        q.pop();
    }
    printf("\n");
}


void priorityQueueAll(){
// Some member functions of priority queues are:
    // empty(): Returns true if the priority queue is empty and false if the priority queue has at least one element. Its time complexity is O(1).
    // pop(): Removes the largest element from the priority queue. Its time complexity is O(logN) where N is the size of the priority queue.
    // push(): Inserts a new element in the priority queue. Its time complexity is O(logN) where N is the size of the priority queue.
    // size(): Returns the number of element in the priority queue. Its time complexity is O(1).
    // top(): Returns a reference to the largest element in the priority queue. Its time complexity is O(1).


    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(5);
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main(){
    int a=2,b=3;
    float c=9.4 , d=232.1;
    swp(a,b);
    swp(c,d);

    stringAll();


}