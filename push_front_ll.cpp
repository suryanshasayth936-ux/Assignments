// insterfront

#include <iostream>
using namespace std;


class node{
    public:
    int data ;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    };
};
    class list{
        node*head;
        node*tail;

        public:
        list(){
            head = tail =NULL;
        }

        void push_front(int val){
            node* newnode = new node(val);
    
            if(head==NULL){
                head = tail = newnode;
                return;
            }
            else{
                newnode->next = head;
                head = newnode;  


            }
        };

        void printll(){
            node*tempr = head;

            while(tempr!=NULL){
                cout<< tempr->data<< " ";
                tempr = tempr->next;
            };
            cout<<endl;
        };
    };



int main(){
    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    


    ll.printll();

    return 0;  
    };