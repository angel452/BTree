#include <iostream>
using  namespace  std;

struct Point

class BTree{
    private:
        int ordenBTree;
        int key;

    public:
        BTree(int _ordenBTree){
            ordenBTree = _ordenBTree;
            key = _ordenBTree - 1;
        }

        void f1(){
            cout << "El orden del arbol sera de:" << ordenBTree << endl;
        }
};