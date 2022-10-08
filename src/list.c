#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/
#include <limits.h>

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l){
    // Excercise 3b)
    // Add your code here... 
    assert(l != NULL);
    int size_count = 0;
    node *p = l;
    while(p->next != NULL){ //Loop until we hit the last element which as next as NULL.
      size_count++; //Increase counter
      p = p->next;  //Point to the next element
    }

    return size_count;
}

void printout(node *l) {
  /*Excercise 3d) Implement your changes.. 
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
    node *p = l->next; //Point to the first element of the list.
    while (p!=NULL){
      printf("%d, ",p->data); //Print the number associated with pæ
      p = p->next;  //Point to the next element.
    }
    printf("\n");
}

int largest(node *l){
    /*Excercise 3e) Add your code below.
      pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
      post: returns the largest value of the list*/
      int max = INT_MIN; //Holdes the largest element in the list.
      node *p = l->next; //Point p to the first element of the list.
      while (p != NULL){  //When the loops hits NULL every element has been checked.
        if(p->data > max){ //Check the current nodes data against the current largest element.
          max = p->data;
        }
        p = p->next; //Point to the next element.
      }
    return max; 
}