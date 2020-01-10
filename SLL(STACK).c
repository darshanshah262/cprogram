#include<string.h> 
#include<stdlib.h> 
struct node 
{ 
    char usn[25], name[25], branch[25]; 
     int sem; 
     long int phoneNo; 
     struct node *next; 
}; 
 
typedef struct node * NODE; 
NODE head = NULL; 
int count = 0; 
 
 
NODE createStudentNode() 
{ 
 
    NODE studentNode; 
    studentNode = (NODE)malloc(sizeof(struct node)); 
     if(studentNode == NULL) 
     { 
         printf("\nMemory is not available"); 
         exit(0); 
    } 
    studentNode->next = NULL; 
     printf("\nEnter the usn,Name,Branch, sem,PhoneNo of the student: \n"); 
    scanf("%s %s %s %d %ld", studentNode->usn, studentNode->name, studentNode->branch, &studentNode->sem, &studentNode->phoneNo); 
    count++; 
    return studentNode; 
} 
 
 
 
 
NODE insertAtFront() 
{ 
    NODE p; 
    p = createStudentNode(); 
    if(head == NULL) 
        return p; 
    p->next = head; 
    return p; 
} 
 
 
 
NODE deleteAtFront() 
{ 
     NODE p; 
     if(head == NULL) 
     { 
         printf("\nLinked list is empty"); 
         return NULL; 
     } 
     if(head->next == NULL) 
     { 
         printf("\nThe Student node with usn:%s is deleted ", head->usn); 
         count--; 
         free(head); 
         return NULL; 
     } 
     p = head; 
     head = head->next; 
     printf("\nThe Student node with usn:%s is deleted",p->usn); 
     count--; 
     free(p); 
     return head; 
} 
 
 
 
 
NODE insertAtEnd() 
{ 
    NODE q, p; 
    p = createStudentNode(); 
    if(head == NULL) 
    { 
        return p; 
    } 
    if(head->next == NULL) 
    { 
        head->next = p; 
        return head; 
    } 
    q = head; 
    while(q->next !=NULL) 
    { 
        q = q->next; 
    } 
    q->next = p; 
    return head; 
} 
 
 
 
NODE deleteAtEnd() 
{ 
    NODE p, q; 
    if(head == NULL) 
    { 
        printf("\nLinked List is empty"); 
        return NULL; 
    } 
    if(head->next == NULL) 
    { 
        printf("\nThe student node with the usn:%s is deleted", head->usn); 
        free(head); 
        count--; 
        return NULL; 
    } 
    q = NULL; 
    p = head; 
    while(p->next != NULL) 
    { 
        q = p; 
        p = p->next; 
    } 
    printf("\nThe student node with the usn:%s is deleted",p->usn); 
    free(p); 
    q->next = NULL; 
    count--; 
    return head; 
} 
 
 
 
void displayStatus() 
{ 
    NODE cur; 
    int nodeNo = 1; 
    cur = head; 
    printf("\nThe contents of SLL: \n"); 
    if(cur == NULL) 
    printf("\nNo Contents to display in SLL \n"); 
    while(cur!=NULL) 
    { 
         printf("\n||%d||", nodeNo); 
         printf(" USN:%s|", cur->usn); 
         printf(" Name:%s|", cur->name); 
         printf(" Branch:%s|", cur->branch); 
         printf(" Sem:%d|", cur->sem); 
         printf(" Ph:%ld|", cur->phoneNo); 
         cur = cur->next; 
         nodeNo++; 
    } 
    printf("\n No of student nodes is %d \n",count); 
} 
 
 
 
 
void stackDemoUsingSLL() 
{ 
    int ch; 
    while(1) 
    { 
        printf("\n~~Stack Demo using SLL~~\n"); 
        printf("\n1:Push operation \n2: Pop operation \n3: Display \n4:Exit \n"); 
        printf("\nEnter your choice for stack demo"); 
        scanf("%d", &ch); 
        switch(ch) 
        { 
             case 1: head = insertAtFront(); break; 
             case 2: head = deleteAtFront(); break; 
             case 3: displayStatus(); break; 
             default: return; 
        } 
    } 
} 
 
 
 
void main() 
{ 
     int ch, i, n; 
     while(1) 
     { 
         printf("\n~~Menu~~"); 
         printf("\nEnter your choice for SLL operation \n"); 
         printf("\n1:Create SLL of Student Nodes"); 
         printf("\n2:DisplayStatus"); 
         printf("\n3:InsertAtFront"); 
         printf("\n4:InsertAtEnd"); 
         printf("\n5:DeleteAtFront"); 
         printf("\n6:DeleteAtEnd"); 
         printf("\n7:Stack Demo using SLL(Insertion and Deletion at Front)"); 
         printf("\n8:Exit \n"); 
         printf("\nEnter your choice:"); 
         scanf("%d", &ch); 
         switch(ch) 
         { 
             case 1 : printf("\nEnter the no of students: "); 
                  scanf("%d", &n); 
                  for(i=1; i<=n; i++) 
                      head = insertAtFront(); 
                  break; 
             case 2: displayStatus(); 
                  break; 
             case 3: head = insertAtFront(); 
                  break; 
             case 4: head = insertAtEnd(); 
                  break; 
             case 5: head = deleteAtFront(); 
                  break; 
             case 6: head = deleteAtEnd(); 
                  break; 
             case 7: stackDemoUsingSLL(); 
                  break; 
             case 8: exit(0); 
 
             default: printf("\nPlease enter the valid choice"); 
         } 
     } 
} 
