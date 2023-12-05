#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_list - Reverses a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Pointer to the new head of the reversed list
 */
listint_t *reverse_list(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome
 * @head: Pointer to the head of the list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow_ptr, *fast_ptr, *prev_slow_ptr;
	listint_t *second_half, *mid_node;
	int is_palindrome = 1;

	if (*head == NULL || (*head)->next == NULL)
		return 1;

	slow_ptr = *head;
	fast_ptr = *head;
	prev_slow_ptr = *head;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		fast_ptr = fast_ptr->next->next;
		prev_slow_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	if (fast_ptr != NULL)
	{
		mid_node = slow_ptr;
		slow_ptr = slow_ptr->next;
	}
	else
	{
		mid_node = NULL;
	}

	prev_slow_ptr->next = NULL;

	second_half = reverse_list(slow_ptr);

	listint_t *temp1 = *head;
	listint_t *temp2 = second_half;

	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1->n != temp2->n)
		{
			is_palindrome = 0;
			break;
		}

		temp1 = temp1->next;
		temp2 = temp2->next;
	}

	second_half = reverse_list(second_half);

	if (mid_node != NULL)
	{
		prev_slow_ptr->next = mid_node;
		mid_node->next = second_half;
	}
	else
	{
		prev_slow_ptr->next = second_half;
	}

	return is_palindrome;
}
