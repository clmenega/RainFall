global	int language = 0;
void	greetuser(char *src)
{
	char dest[76];

	if (language == 0)
	{
		strcpy(dest, "Hello ");
	}
	else if (language == 1)
	{
		strcpy(dest, "Hyvää päivää ");
	}
	else if (language == 2)
	{
		strcpy(dest, "Goedemiddag! ");
	}
	strcat(dst, src);
	puts(dst);
	return;


}

void	main(int argc, char **argv)
{
	char buff1[40];
	char buff2[36];
	char *env;

	if(argc == 3)
	{
		memset(buff1, '\0', 19);
	}
	strncpy(buff1, agv[1], 40);
	strncpy(buff2, agv[2], 32);
	env = getenv("LANG");
	if (str3 != 0)
	{
		if (memcmp(env, "fi", 2) == 0){
			language = 1;
		}
		else if (memcmp(env, "fi", 2) == 0)
		{
			language = 2;
		}
	
		strncpy(buff1, buff2, 19);
		return greetuser(buff1);
	}
	return 1;
}

