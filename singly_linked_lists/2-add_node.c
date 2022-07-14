 #include "lists.h"
  /**
   * _strlen - gets length of the string
   * @s: string
   * Return: length of the string
   */
 int _strlen(const char *s)
 {
          int i = 0;
 
          while (*(s + i) != '\0')
                  i++;
          return (i);
 }
 
 /**
  * add_node - adds a node to the start of the list
  * @head: address of pointer to head node
  * @str: str field of node
  *
  * Return: size of list
  */
 list_t *add_node(list_t **head, const char *str)
 {
         list_t *new_head = malloc(sizeof(list_t));
 
         if (!head || !new_head) /*validate input and malloc*/
                 return (NULL);
         if (str) /*if str exist*/
         {
                 new_head->str = strdup(str);
                 if (!new_head->str)
                 {
                         free(new_head);
                         return (NULL);
                 }
                 new_head->len = _strlen(new_head->str);
         }

         new_head->next = *head;
         *head = new_head;
         return (new_head);
 }
