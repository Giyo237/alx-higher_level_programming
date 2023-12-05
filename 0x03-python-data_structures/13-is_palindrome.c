#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list in place
 * @head: double pointer to the first node in the list
 */
void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return (1);

	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev_slow = *head;
	listint_t *mid = NULL;
	listint_t *second_half = NULL;
	int is_palindrome = 1;

while (fast && fast->next)
  {
	fast = fast->next->next;
	prev_slow = slow;
	slow = slow->next;
  }
	if (fast != NULL)
	{
		mid = slow;
		slow = slow->next;
	}
	second_half = slow;
	prev_slow->next = NULL;
	reverse_listint(&second_half);

	listint_t *p1 = *head;
	listint_t *p2 = second_half;
	while (p1 && p2)
	{
		if (p1->n != p2->n)
		{
			is_palindrome = 0;
			break;
		}
		p1 = p1->next;
		p2 = p2->next;
	}

    reverse_listint(&second_half);
    if (mid)
    {
	prev_slow->next = mid;
	mid->next = second_half;
    }
    else
    {
	    prev_slow->next = second_half;
    }
    return is_palindrome;
}
