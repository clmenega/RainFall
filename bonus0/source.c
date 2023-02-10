void 	p(char *param_1, char *param_2)
{
	char *var1;
	char buff[4104];

	puts(param_2);
	read(0, buff, 4096);
	var1 = strchr(buff, '\n');
	*var1 = '\0';
	strncpy(param_1, buff, 20);
	return;
}

void	pp(char *param_1)
{
	char buff1[20];
	char buff2[20];

  	p(buff1," - ");
  	p(buff2," - ");
  	strcpy(param_1, buff1);
	
	param1[strlen(param1)] = ' ';
	strcat(param1, buff2);
	return;
}

void	main(void)
{
	buff[54];

	pp(buff);
	puts(buff);
	return;
}

