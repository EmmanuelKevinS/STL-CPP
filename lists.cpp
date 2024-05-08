#include<iostream>
#include<list>
using namespace std;

void lists(){
    //Very similar to vectors. However it gives you the option of pushing from the front as well
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(10);
    for(auto it : ls){
        cout << it << " ";
    }
    cout << endl;
    cout << "----------------------" << endl;
    ls.push_front(432);
    ls.emplace_front(34555);
    for(auto it : ls){
        cout << it << " ";
    }
    cout << endl;
    cout << "----------------------" << endl;
    //Rest of the functions are the same as vector

}


int main(){

    lists();

    return 0;
}