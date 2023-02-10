void	main(int argc, char **argv)
{
	char	buff1[16];
	char	buff2[66];
	FILE	*file;
	int	num;

	file = fopen("/home/user/end/.pass", "r");
	memset(buff1, "\0", 33);
	if(file && argc == 2)
	{
		fread(buff1, 1, 66, file);
		num = atoi(argv[1]);
		buff1[num] = '\0';
		fread(buff2, 1, 65, file);
		fclose(file);
		if(!strcmp(buff1, argv[1]))
		{
			execl("/bin/sh","sh",0);
		}else{
			puts(buff2);
		}
		return 0;
	}
	return -1;
}

