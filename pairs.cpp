#include<iostream>
//#include<bits/stdc++.h>
using namespace std;


void pairs(){
    //Basic pairs
    pair<int, int> p1 = {1, 5};
    cout << "p1(first number): " << p1.first << endl;
    cout << "p1(second number): " << p1.second << endl;

    //Nested pairs
    pair<int, pair<int,int>> p2 = {3, {34, 98}};
    cout << "second pair: " << endl;
    cout << p2.first << ", (" << p2.second.first << ", " << p2.second.second << ")" << endl;

    //Pairs in array
    pair<int, int> arr[] = {{1, 2}, {45, 92}, {393, 432}};
    cout << "arr[1].second = "<<arr[1].second << endl;//92
    cout << "arr[2].first = "<<arr[2].first << endl;//393
}


int main(){

    pairs();

    return 0;
}
