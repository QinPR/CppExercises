// largest and the second largest number
#include <iostream>
#include <list>
using namespace std;

int biggestNumber(list<int>& Mylist);
int main(){
    int num = 1;
    int biggest;
    list<int> Mylist;
    cout << "This program finds the largest integer in a list." << endl;
    cout << "Enter 0 to signal the end of the list." << endl;
    while (num != 0){
        cout << "?";
        cin >> num;
        Mylist.push_back(num);
    }
    biggest = biggestNumber(Mylist);
    Mylist.remove(biggest);
    cout <<"The biggest number is : "<< biggest << endl;
    cout <<"The second biggest number is : " << biggestNumber(Mylist) << endl;
    return 0;
}
int biggestNumber(list<int>& Mylist){
    int result = Mylist.front();
    for(auto it = Mylist.begin(); it != Mylist.end(); ++it){
        result = (*it > result) ? *it : result;
    }
    return result;
}