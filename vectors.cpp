#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;

void vectors(){

    //Normal vector
    vector<int> v1;
    v1.push_back(761);
    v1.emplace_back(452);
    v1.emplace_back(652);
    v1.emplace_back(254);
    v1.emplace_back(244);
    
    cout << "Vector one: ";
    for(int i=0; i<v1.size();i++){
        cout << v1[i] <<" ";
    } 
    cout << endl;

    //Vector with another data type(pair)
    vector<pair<int, int>> v2;
    v2.push_back({32, 45});
    v2.emplace_back(654, 328);
    cout << "Vector two: ";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i].first << " " << v2[i].second <<" ";
    } 
    cout << endl;

    //Pre-defined vector
    vector<int> v3(5,100);//This will create a vector that has a size of 5 filled with values of 100
    vector<int> v4(4);//This will create a vector that has a size of 4
    vector<int> v5(v4);//This will create a copy of v4(NOT THE SAME VECTOR);

    //Iterators
    vector<int> ::iterator it1 = v1.begin();//Points to the memory address of the first element in the vector
    it1++;//To mve to the second element in the vector
    cout << *(it1) << endl;
    vector<int> ::iterator it2 = v1.end();//Points to the memory RIGHT AFTER the last element 
    it2--;//To get back to the last element in the vector
    cout << *(it2) << endl;

    cout << v1.back() << endl;//Prints the last element in a vector

    cout << "------------------------------" << endl;
    //Very manual way of printing the vector using a for loop
    for(vector<int>::iterator it1 = v1.begin(); it1 != v1.end(); it1++){
        cout << *(it1) << " ";
    }
    cout << endl;
    //Using auto keyword but still a normal for loop
    cout << "------------------------------" << endl;
    for(auto it1 = v1.begin(); it1 != v1.end(); it1++){
        cout << *(it1) << " ";
    }
    cout << endl;
    cout << "------------------------------" << endl;
    //using a for each loop
    for(auto it1 : v1){
        cout << it1 << " ";
    }
    cout <<  endl;
    cout << "------------------------------" << endl;

    //Erase
    v1.erase(v1.begin() + 1);//Erase a particular element
    v1.erase(v1.begin() + 2, v1.begin() + 4);//Erase a range of elements
    for(auto it1 : v1){
        cout << it1 << " ";
    }
    cout << endl;
    cout << "------------------------------" << endl;

    //Insert
    vector<int> v6(2,300);
    v6.insert(v6.begin(), 500); //Inserts at the start
    v6.insert(v6.begin() + 1, 2, 10); // Inserts at the start + 1 position and inserts 2 elements (both value of 10)
    for(auto it : v6){
        cout << it << " ";
    }
    cout << endl;
    cout << "------------------------------" << endl;
    
    //size
    cout << "size of Vector 6: " << v6.size() << endl;

    //Pop back
    v6.pop_back();//removes last element

    //Swap
    v3.swap(v4);// v3<->v4(They just swap LOL)

    //Clear
    v6.clear(); //Clears entire vector

    cout << v6.empty(); //Just to check if vector is empty or not (bool)

    cout <<  endl;
    cout <<  endl;
}

int main(){

    vectors();

    return 0;
}