/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jballest <jballest@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:52:48 by jballest          #+#    #+#             */
/*   Updated: 2020/09/07 02:05:23 by jballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

//			\033[0;31m			Red
//			\033[1;31m			Bold Red
//			\033[0;32m			Green
//			\033[1;32m			Bold Green
//			\033[0;33m			Yellow
//			\033[01;33m			Bold Yellow
//			\033[0;34m			Blue
//			\033[1;34m			Bold Blue
//			\033[0;35m			Magenta
//			\033[1;35m			Bold Magenta
//			\033[0;36m			Cyan
//			\033[1;36m			Bold Cyan
//			\033[0m				Reset
void ascii_logo()
{
 	printf("\n----------------------------------------\n");
	printf(" _      _ _                           _            _            \n");
	printf("| |    (_) |                         | |          | |           \n");
	printf("| |     _| |__   __ _ ___ _ __ ___   | |_ ___  ___| |_ ___ _ __ \n");
	printf("| |    | | '_ \\ / _` / __| '_ ` _ \\  | __/ _ \\/ __| __/ _ \\ '__|\n");
	printf("| |____| | |_) | (_| \\__ \\ | | | | | | ||  __/\\__ \\ ||  __/ |   \n");
	printf("|______|_|_.__/ \\__,_|___/_| |_| |_|  \\__\\___||___/\\__\\___|_|\n");
 	printf("\n----------------------------------------\n");
}

void strlen_tests(int tests, char **texts)
{
	char *testname = "FT_STRLEN";

	printf("\033[1;33mSTART-------> \033[1;32m%s \033[0m\n", testname);
	for(int i = 0; i < tests; i++)
	{
		if (ft_strlen(texts[i]) == strlen(texts[i]))
		{
			printf("\033[0;32m[OK]");
			printf("[%lu]-[%lu]\033[0m", ft_strlen(texts[i]), strlen(texts[i]));
			printf("[%s]\n", texts[i]);
		}
		else
		{
			printf("\033[1;31m[KO]");
			printf("[%lu]-[%lu]\033[0m", ft_strlen(texts[i]), strlen(texts[i]));
			printf("[%s]\n", texts[i]);
		}
	}
	printf("\033[1;33mEND---------> \033[1;36m%s \033[0m\n", testname);
}

void strcpy_tests(int tests, char **texts)
{
	char *testname = "FT_STRCPY";

	// strs of 500 characters
	char *mycpy = malloc(sizeof(char) * 500);
	char *syscpy = malloc(sizeof(char) * 500);
	
	printf("\033[1;33mSTART-------> \033[1;32m%s \033[0m\n", testname);
	for(int i = 0; i < tests; i++)
	{
		if (strcmp(mycpy, syscpy) == 0)
		{
			mycpy = ft_strcpy(mycpy, texts[i]);
			syscpy = strcpy(syscpy, texts[i]);
			printf("\033[0;32m[OK]\033[0m");
			printf("[%s]-[%s]\n", mycpy, syscpy);
		}
		else
		{
			mycpy = ft_strcpy(mycpy, texts[i]);
			syscpy = strcpy(syscpy, texts[i]);
			printf("\033[1;31m[KO]");
			printf("[%s] \033[0m-[%s]\n", mycpy, syscpy);
		}
	}
	//printf("\nft_strlen = %lu\n", ft_strlen(nulltxt));
	//printf("strlen = %lu\n", strlen(nulltxt));
	printf("\033[1;33mEND---------> \033[1;36m%s \033[0m\n", testname);
}

void strcmp_tests(int tests, char **texts)
{
	char *testname = "FT_STRCMP";

	// manual copy of texts
	char *cpytexts[7] = {"W3lc0m3 t0 l1b4$m",
					"Hella world", 
					"Xpartano",
					"nononono", 
					"!@#(_*$#)-_*@_!#*&*#@($&@)$@#)($&		", 
					"",
					"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras bibendum dapibus tortor et pellentesque. Curabitur eu sodales magna, sollicitudin efficitur purus. Nunc sagittis quam non aliquet malesuada. Donec eleifend tellus sit amet pulvinar elementum. Suspendisse sit amet dui et mauris rhoncus interdum ut eget odio. Vestibulum eu justo quis velit tempor finibus sit amet sed tortor. Morbi urna velit, facilisis eget ultricies tincidunt, eleifend nec leo. "
					};
	int	mycmp = 0;
	int	syscmp = 0;
	
	printf("\033[1;33mSTART-------> \033[1;32m%s \033[0m\n", testname);
	for(int i = 0; i < tests; i++)
	{
		mycmp = ft_strcmp(cpytexts[i], texts[i]);
		syscmp = strcmp(cpytexts[i], texts[i]);
		if (mycmp == syscmp)
		{
			printf("\033[0;32m[OK]\033[0m");
			printf("[%d]-[%d]\n", mycmp, syscmp);
		}
		else
		{
			printf("\033[1;31m[KO]");
			printf("[%d]\033[0m-[%d]\n", mycmp, syscmp);
		}
	}
	printf("\033[1;33mEND---------> \033[1;36m%s \033[0m\n", testname);
}

void strdrup_tests(int tests, char **texts)
{
	char *testname = "FT_STRDUP";

	/*
	char *cpytexts[7] = {"W3lc0m3 t0 l1b4$m",
					"Hello world",
					"Xpartano",
					"nononono",
					"!@#(_*$#)@_*@_!#*&*#@($&@)$@#)($&		",
					"",
					"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras bibendum dapibus tortor et pellentesque. Curabitur eu sodales magna, sollicitudin efficitur purus. Nunc sagittis quam non aliquet malesuada. Donec eleifend tellus sit amet pulvinar elementum. Suspendisse sit amet dui et mauris rhoncus interdum ut eget odio. Vestibulum eu justo quis velit tempor finibus sit amet sed tortor. Morbi urna velit, facilisis eget ultricies tincidunt, eleifend nec leo. "
					};
	*/
	
	char *mycpy = NULL;
	char *syscpy = NULL;
	
	printf("\033[1;33mSTART-------> \033[1;32m%s \033[0m\n", testname);
	for(int i = 0; i < tests; i++)
	{
		mycpy = ft_strdup(texts[i]);
		syscpy = strdup(texts[i]);

		if (strcmp(mycpy, syscpy) == 0)
		{
			printf("\033[0;32m[OK]\033[0m");
			printf("[%s]-[%s]\n", mycpy, syscpy);
		}
		else
		{
			printf("\033[1;31m[KO]");
			printf("[%s] \033[0m-[%s]\n", mycpy, syscpy);
		}
	}
	printf("\033[1;33mEND---------> \033[1;36m%s \033[0m\n", testname);
}

void read_tests()
{
	char *testname = "FT_READ";
	int read_size = 50;
	int tests = 4;
	char *files[4] = {
						"ft_read.s",
						"ft_write.s",
						"l;gh",
						"nofile"
						};
	size_t myret = 0;
	char *mybuff = malloc(sizeof(char) * read_size);
	size_t sysret = 0;
	char *sysbuff = malloc(sizeof(char) * read_size);
	char *voidbuff = malloc(sizeof(char) * read_size);
	int fd = 0;
	
	printf("\033[1;33mSTART-------> \033[1;32m%s \033[0m\n", testname);
	
	for (int i = 0; i < tests; i++)
	{
		fd = 0;
		printf("\033[1;32mTrying file: %s\033[0m\n", files[i]);
		fd = open(files[i], O_RDONLY);
		myret = ft_read(fd, mybuff, read_size - 1);
		close(fd);
		fd = 0;
		fd = open(files[i], O_RDONLY);
		sysret = read(fd, sysbuff, read_size - 1);
		close(fd);
		if (myret == sysret)
		{
			printf("\033[0;32m[OK]\033[0m[%lu] - [%lu]\n", myret, sysret);
			if (strcmp(mybuff, sysbuff) == 0)
			{
				printf("%d\n", strcmp(mybuff, sysbuff));
				printf("-->\033[0;32m[O]\033[0m[%s]\n   \033[0;32m[K]\033[0m[%s]\n", mybuff, sysbuff);
			}
			else
			{
				printf("%d\n", strcmp(mybuff, sysbuff));
				printf("-->\033[1;31m[K][%s]\n   [O]\033[0m[%s]\n", mybuff, sysbuff);
			}
		}
		else
		{
			printf("\033[1;31m[KO][%lu]\033[0m - [%lu]\n", myret, sysret);
			if (strcmp(mybuff, sysbuff) == 0)
			{
				printf("%d\n", strcmp(mybuff, sysbuff));
				printf("-->\033[0;32m[OK]\033[0m[%s] - [%s]\n", mybuff, sysbuff);
			}
			else
			{
				printf("%d\n", strcmp(mybuff, sysbuff));
				printf("-->\033[1;31m[K][%s]\n   [O]\033[0m[%s]\n", mybuff, sysbuff);
			}
		}
		
		perror("");
		
		mybuff = strcpy(mybuff, voidbuff);
		sysbuff = strcpy(sysbuff, voidbuff);
	}

	// Test my ft_read to check perror
	fd = 0;
	printf("\n\033[1;35mTrying no file with my ft_read...\033[0m\n");
	fd = open("nofile", O_RDONLY);
	myret = ft_read(fd, mybuff, read_size - 1);
	close(fd);
	printf("[%lu]\n", ft_strlen(mybuff));
	printf("-->\033[0;32m[%s]\033[0m\n", mybuff);
	perror("");

	// Test system read to check perror
	fd = 0;
	printf("\n\033[1;35mTrying no file with system read...\033[0m\n");
	fd = open("nofile", O_RDONLY);
	sysret = ft_read(fd, sysbuff, read_size - 1);
	close(fd);
	printf("[%lu]\n", ft_strlen(sysbuff));
	printf("-->\033[0;32m[%s]\033[0m\n", sysbuff);
	perror("");

	printf("\n\033[1;33mEND---------> \033[1;36m%s \033[0m\n", testname);
}

void write_tests()
{
	char *start = "\033[1;33mSTART-------> \033[1;32mFT_WRITE \033[0m\n";
	char *end = "\n\033[1;33mEND-------> \033[1;36mFT_WRITE \033[0m\n";
	char *txt = "Hello i'm a text written by ft_write!\n";
	write(1, start, ft_strlen(start));
	ft_write(1, txt, ft_strlen(txt));
	txt = "Hello i'm a text written by write!\n";
	write(1, txt, ft_strlen(txt));
	txt = "-";
	ft_write(1, txt, ft_strlen(txt));
	write(1, txt, ft_strlen(txt));
	txt = "a\nb";
	ft_write(1, txt, ft_strlen(txt));
	write(1, txt, ft_strlen(txt));
	write(1, end, ft_strlen(end));

}

int main()
{
	int	tests = 7;
	char *texts[7] = {"W3lc0m3 t0 l1b4$m",
					"Hello world",
					"Xpartano",
					"nononono",
					"!@#(_*$#)@_*@_!#*&*#@($&@)$@#)($&		",
					"",
					"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras bibendum dapibus tortor et pellentesque. Curabitur eu sodales magna, sollicitudin efficitur purus. Nunc sagittis quam non aliquet malesuada. Donec eleifend tellus sit amet pulvinar elementum. Suspendisse sit amet dui et mauris rhoncus interdum ut eget odio. Vestibulum eu justo quis velit tempor finibus sit amet sed tortor. Morbi urna velit, facilisis eget ultricies tincidunt, eleifend nec leo. "
					};
	ascii_logo();
	strlen_tests(tests, texts);
	strcpy_tests(tests, texts);
    strcmp_tests(tests, texts);
    strdrup_tests(tests, texts);
	read_tests();
	write_tests();
}