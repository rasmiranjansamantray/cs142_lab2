#include<iostream>
using namespace std;
class Node{
   public:
   //data
   int data;
   //ptr to the next node
   Node * next; //like ptr to int- int * ptr
   //constructor that makes the ptr null 
   Node(){
   next = NULL;
  }
   
};
class linkedlist{
//head+circles inside linked with each oher
//head
//circle i.e. node type ptr
public:
Node * head;
Node * tail;
//construct
linkedlist(){
head = NULL;
tail = NULL;
}
//circles inside link with eachother
//rules how circles are linked
//insert
void insert(int value){
//if 1st node is added
Node * temp = new Node;
//insert vaalue in the node
temp -> data = value;
//1st node only
if(head == NULL)
     head = temp;
     
else{
  
    tail->next = temp;  //for any last addition
    }
tail = temp; 
}
void insertAt(int pos , int value){
 //reach the place before the pos
 Node * current = head;
 int i = 1;
 while(i< pos-1){
     i++;
 current = current->next;
            }
  //create a node

 Node * temp = new Node;
 temp -> data = value;
 //moving ptrs like magic!
 temp->next = current->next;
 current->next = temp;

 }
//delete last element
void del(){
  //store the tail in temp
  Node * temp = tail;
  //before tail has to point to null
  Node * current = head;
  while(current->next != tail){
  current = current->next;
  }
  current->next = NULL;
  //update tail
  tail = current;
  //delete temp
 
 }
//deleteAt
void deleteAt(int pos){
//reach the place before the pos
Node * current = head;
int i = 1;
while(i<pos-1){
   i++;
current = current->next;
  }
//delete the node

}
//countItems
int countItems(){
Node * current = head;
int i=0;
while(current != NULL){
current = current->next;
i++;
   }
cout<<"The no of items in the linked list is :"<<i<<endl;

             
}

//display
void display(){
Node * current = head;
while(current != NULL){
cout<<current->data<<"->";
current = current->next;
             }
cout<<endl;
/*cout<< head->data<<"->"<<endl;
temp = head->next;
cout<< temp->data<<"->"<<endl;
temp = temp->next;
cout<< temp->next<<"->"<<endl;*/
          }
};


int main(){
linkedlist l1;
l1.insert(1);
l1.insert(2);
l1.insert(3);
l1.insert(4);
l1.insert(37);
l1.display();
l1.countItems();
l1.insertAt(3,7);
l1.display();
l1.countItems();
l1.del();
l1.display();
l1.countItems();
return 0;
}
