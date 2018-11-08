#include <iostream>
#include <string>
using namespace std;
struct Bag {
        string item;
        int num;
        public:
                void getName(){
                        getline(cin, item);
                }
                void getNum(){
                        int rnum = rand() % 100;
                        num = rnum;
                }
                void displayInfo(){
                        cout << "item: " << item << endl;
                        cout << "num: " << num << endl;
                }
};


int main(){
        srand(time(0));
        Bag arr[5];
        for(int i = 0; i<5; i++){
                int rnum = rand() % 100;
                cout << "Enter Item" << endl;
                arr[i].getName();
                //cout << "Enter Num" << endl;
                arr[i].getNum();
        }
        for(int i = 0; i <5; i++){
                arr[i].displayInfo();
        }
        return 0;
}
