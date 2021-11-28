#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "SLL.h"
int main()
{
    
    while(1)
    {
        printf("\nselect operation you wnat to perform");
        printf("\n1. insert \n2. Delete\n3. printList");
        int selection;
        scanf("%d", &selection);
        switch ((selection))
        {
        case 1: insert();
            break;
        case 2: delete();
            break;
        case 3: printList();
            break;
        default:
            exit(0);
        }

    }
    return 0;
}

void insert()
{
    printf("\nEnter value: ");
    int data=0;
    scanf("%d", &data);
    struct SLLNode *newNode = (struct SLLNode*)malloc(sizeof(struct SLLNode));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    struct SLLNode *temp = head;
    struct SLLNode *prev = head;
    
    while(temp!=NULL)
    {
        if(temp->data<data)
        {
            prev = temp;
            temp = temp->next;
        }
        else{
            if(temp != head)
            {
                newNode->next = temp;
                prev->next = newNode;
            }
            else{

                newNode->next = head;
                head=newNode;
                
            }
            break;
        }
    }
    if(temp==NULL)
    prev->next = newNode;
    
}

void delete()
{
    printf("\nEnter delete value: ");
    int data=0;
    scanf("%d", &data);

    if(head==NULL)
    {
        printf("\nthe list is empty");
        return;
    }
    else if(head->next==NULL)
    {
        if(head->data == data)
        {
            free(head);
            head = NULL;
            return;
        }
        else
        {
           printf("\nvalue not found");
           return;
        }
    }


    struct SLLNode *del = head;
    struct SLLNode *prev = head;
    
    while(del!=NULL){
            if(del->data == data)
            {
                if(del == head)
                {
                    struct SLLNode *ptr = del->next;
                    free(head);
                    head = ptr;
                    return;
                }
                else{
                    prev->next = del->next;
                    free(del);
                    break;
                }
            }
            prev = del;
            del = del->next;
    }
    if(del == NULL)
    printf("\nvalue4 not found");
}

void printList(){
    struct SLLNode *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
            ptr = ptr->next;
    }
}

