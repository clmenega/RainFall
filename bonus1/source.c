void	main(int argc, char ** argv)
{
	char	buff[40];
	int 	num;

	num = atoi(argv[1]);
	if (num < 10)
	{
		memcpy(buff, argv[2], num * 4);
		if ( num == 0x574f4c46 ){
			execl("/bin/sh", "sh", 0);
		}
		return 0;
	}
	return 1;
}
