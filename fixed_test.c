#define F "variable_nls.txt"
#define LINES 13

void	fixed_test()
{
	int		f1;
	char	*l[LINES];
	int		i;

	f1 = open(F, O_RDONLY);
	i = 0;
	while (i < LINES)
	{
		l[i] = get_next_line(f1);
		printf("%s", l[i]);
		i++;
	}
	i = 0;
	while (i < LINES)
	{
		free(l[i]);
		i++;
	}
}
