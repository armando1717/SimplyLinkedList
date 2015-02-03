#include <iostream>
#include <stdlib.h> //NULL
#include <string.h>

using namespace std;
struct student{
    char name[100];
    student *next;

};


student * insert(student *);
void showAll(student *);

int main()
{
    student *list =NULL;
    list=insert(list);
    showAll(list);
    return 0;
}

student * insert(student *list){
    student *temp =list;
    student *node;
    node =(student *)malloc(sizeof(student));
    strcpy(node->name,"Armando");
    node->name[8]='\0';
    node->next=NULL;

    if(list==NULL){
        list=node;
    }else{


    }
return list;
}
void showAll(student *list){
    student *temp = list;
    if(list==NULL){
        cout<<"Empty list"<<endl;
    }else{
        while(temp){
            cout<<"Name : "<<temp->name<<endl;
            temp =temp->next;
        }
    }
}
