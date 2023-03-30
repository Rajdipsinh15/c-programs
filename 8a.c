int compare(char *f, char *s)
{
	int i;
	for(i=0;f[i];i++)
		if(f[i]!=s[i])
			return -1;
	if(f[i]==0)
		return 0;
}
