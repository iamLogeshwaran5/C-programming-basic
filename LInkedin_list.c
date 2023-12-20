/*#include <stdio.h>
int main()      
{
   char X;      
   int i;      
   int j;
    
    struct node{int data;
    		struct node *next;	};
    struct node *head;
    struct node *newnode;
    struct node *temp;
     head=NULL;
     new node= (struct node
         
	i=0; 
    while (1){
 printf("____________\npls choose \n_________(A/B) : A is ADD____\n______B is Display.\n");
  scanf("\n%c",&X);  
  if (X == 'A') {
  printf("\npls enter the number:");
  scanf("%d",&num[i]);
  i=i+1; 
  
  }
   else if (X == 'B') {
   printf("This is a stored numbers: \t");
   for (j=0;j<i;j++) {
  printf("%d",num[j] );
  }}}}
*/
#include <stdio.h>
int
main ()
{
  char X;
  int i;
  int j;
  struct node
  {
    int data;
    struct node *next;
  };


while (1)
  {
    printf
      ("____________\npls choose \n_________(A/B) : A is ADD____\n______B is Display.\n");
    scanf ("\n%c", &X);
    if (X == 'A')
      {
	printf ("\npls enter the number:");
	scanf ("%d", head->data);
	head->next = null;
	newnode->next = head;
	newnode = head;

      }
    else if (X == 'B')
      {
	printf ("%d", newnode->data);
	newnode->next;
      }
  }

}
