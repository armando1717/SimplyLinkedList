#include <iostream>
#include <stdlib.h> //NULL
#include <string.h>

using namespace std;
struct student
{
    char name[100];
    student *next;

};


student * insert(student *);
void showAll(student *);
void menu(student *);
student * createNode();

enum
{
    INSERT=1,
    SHOW_ALL,
    DELETE,
    EXIT
};

int main()
{
    student *list =NULL;
    //list=insert(list);
    //showAll(list);
    menu(list);

    /*student *node;
    node = createNode();
    cout<<"Name:"<<node->name<<endl;*/
    return 0;
}

//insert new item to the list
student * insert(student *list)
{
    student *temp =list;
    student *node;

    /*node =(student *)malloc(sizeof(student));
    strcpy(node->name,"Armando");
    node->next=NULL;*/
    node = createNode();
    if(list==NULL)
    {
        list=node;
    }
    else
    {
        while(temp->next){
            temp =temp->next;
        }
        temp->next = node;
    }
    return list;
}

//Show all list items
void showAll(student *list)
{
    student *temp = list;
    if(list==NULL)
    {
        cout<<"Empty list"<<endl;
    }
    else
    {
        while(temp)
        {
            cout<<"Name : "<<temp->name<<endl;
            temp =temp->next;
        }
    }
}

student * createNode(){
    student *node;
    cin.ignore();
    node = (student *)malloc(sizeof(student));
    cout<<"Write the students name"<<endl;
    cin.getline(node->name,100);
    node->next=NULL;
    return node;

}

//menu
void menu(student *list)
{
    int opc;
    do
    {
        cout<<"1.-Insert 2.-Show all 3.-Delete 4.-Exit"<<endl;
        cin>>opc;
        switch(opc)
        {
        case INSERT:
            cout<<"insert"<<endl;
            list=insert(list);
            break;
        case SHOW_ALL:
            cout<<"show all"<<endl;
            showAll(list);
            break;
        case DELETE:
            break;
        default:
            cout<<"Wrong choice"<<endl;
        break;
        }
    }
    while(opc!=EXIT);
}

