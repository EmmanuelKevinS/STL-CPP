#include<iostream>
#include<stack>
using namespace std;

void stacks(){
    //Last in first out -> LIFO
    stack <int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.push(5); // {5, 4, 3, 2, 1}
    st.emplace(6); // {6, 5, 4, 3, 2, 1}

    cout << st.top() << endl; // 6(Last element to be pushed)
    st.pop(); //6 will be popped
    cout << st.top() << endl; //5
    cout << st.size() << endl; //size: 5 elements
    cout << st.empty() << endl; //will check if stack is empty -> in this clase: false (0)

    //You CANNOT use a for loop to access the elements
    stack<int> st1;
    st1.push(11);
    st1.push(21); 
    st1.push(31); 
    st1.push(41); 
    st1.push(51);

    stack<int> st2;
    st2.push(123);
    st2.push(223); 
    st2.push(323); 
    st2.push(423); 
    st2.push(523);

    //swap
    st1.swap(st2);
}



int main(){

    stacks();

    return 0;
}