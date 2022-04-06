/**
 * clear_bit - set bit to 0
 * @n: pointer of an unsigned long int
 * @index: the index of a bit
 * Return: 1
 */



int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n & ~i);

	return (1);
}
