#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct hash *hashTable = NULL;
int eleCount = 0;
struct node
{
    int key;
    struct node *next;
};
struct hash
{
    struct node *head;
    int count;
};
struct node * createNode(int key)
{
    struct node *newnode;
    newnode = (struct node *) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->next = NULL;
    return newnode;
}
void insertToHash(int key)
{
    int hashIndex = key % eleCount;
    struct node *newnode = createNode(key);
    if (!hashTable[hashIndex].head)
    {
        hashTable[hashIndex].head = newnode;
        hashTable[hashIndex].count = 1;
        return;
    }
    newnode->next = (hashTable[hashIndex].head);
    hashTable[hashIndex].head = newnode;
    hashTable[hashIndex].count++;
    return;
}
void display()
{
    struct node *myNode;
    int i;
    for (i = 0; i < eleCount; i++)
    {
        myNode = hashTable[i].head;
        printf("%d -> ", i);
        while (myNode != NULL)
        {
            printf("%d -> ", myNode->key);
            myNode = myNode->next;
        }
        printf("\\\n");
    }
    return;
}
int main()
{
    int n, key[100],c,t,i,j;
    scanf("%d",&t);
   for(j=1;j<=t;j++)
    {
        if(j!=1)
            printf("\n");
        scanf("%d %d", &n,&c);
    eleCount = n;
    hashTable = (struct hash *) calloc(n, sizeof(struct hash));
    for(i=1; i<=c; i++)
        scanf("%d", &key[i]);
    for(i=c; i>=1; i--)
    {
        insertToHash(key[i]);
    }
    display();
    }
}
