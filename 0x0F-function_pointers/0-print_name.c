/**
 * print_name - prints a name
 * @name: contains a string with a name;
 * @f: pointer of a function;
 * Return - Void function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
