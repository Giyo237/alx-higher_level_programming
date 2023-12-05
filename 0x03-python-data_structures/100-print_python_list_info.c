#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
/**
  * print_python_list_info - function that prints some basicsinfo about
  * pythn
  *@p: py list
  */
void print_python_list_info(Pyobject *p)
{
	int l;

	printf("[*] size of the Python list = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (l = 0; l < Py_SIZE(P); l++)
		printf("Element %d: %s\n", l, Py_TYPE(Py_List_Getitem(p, l))->tp_name);
}
