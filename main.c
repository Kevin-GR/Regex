#include "main.h"

int main()
{
  FILE *grammar = fopen("Gramatica.txt", "r");
if(grammar == NULL)
{
  perror("Error opening the file");
  return EXIT_FAILURE;
}

Node *head = createLindekList(grammar);
fclose(grammar);
printList(Head);
freeLinkedList(head);
}


