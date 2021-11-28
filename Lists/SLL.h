struct SLLNode{
    int data;
    struct SLLNode *next;
}*head, *tail;

void insert();
void delete();
void printList();
void memset(const int*, int, int);