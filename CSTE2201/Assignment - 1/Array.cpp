#include <bits/stdc++.h>
using namespace std;
int arr_size, arr[10];
void insert_element(int ele, int pos);
void delete_element(int pos);
void search_element(int val);
void update_array();
int main(){
    //insetting value (1-10) in array to make it full.
    for(int i = 0; i < 10; i++){
        insert_element(i + 1, i + 1);
        arr_size++;
    }
    cout << "The basic array is: ";
    update_array();

    //insetting value in n'th position, position range of n is: 1 <= n <= arr_size
    insert_element(100, 3);
    cout << "The array after inserting: ";
    update_array();

    //delete value in n'th position, position range of n is: 1 <= n <= arr_size
    delete_element(3);
    cout << "The array after deleting: ";
    update_array();

    //array search
    search_element(5);
    search_element(20);
    return 0;
}
void insert_element(int ele, int pos){
    pos--;
    arr[pos] = ele;
}
void search_element(int val){
    int fl = 0;
    for(int i = 0; i < arr_size; i++){
        if(arr[i] == val){
            cout << val << " exists in " << i + 1 << "th position." << endl;
            fl = 1;
            break;
        }
    }
    if(fl == 0)
        cout << val << " doesn't exist in this array!" << endl;
}
void delete_element(int pos){
    arr_size--;
    pos--;
    for(int i = pos; i < arr_size; i++){
        arr[i] = arr[i + 1];
    }
}
void update_array(){
    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
