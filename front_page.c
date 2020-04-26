#include<stdio.h>

int main()
{
	int a;
	char ch;
	FILE *fp;
	printf("\t\t\tGENRE BASED TEXT ANALYSIS OF NEWS DATA");
	printf("\nNEWS GENRE\n1.SPORTS\n2.MOVIE AND ENTERTAINMENT\n3.ENVIORNMENT\n4.CRIME\n5.TECHNOLOGY");
	printf("\nSelect the news genre");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("opening sports file\n");
			fp=fopen("sport.txt","r");
			if(fp==NULL)
			{
				printf("file not found");
			}
			else
			{
				ch=fgetc(fp);
				while(ch!=EOF)
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
			}
			break;
		case 2:
			printf("opening movie and entertainment file\n");
			fp=fopen("movie.txt","r");
			if(fp==NULL)
			{
				printf("file not found");
			}
			else
			{
				ch=fgetc(fp);
				while(ch!=EOF)
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
			}
			break;

		case 3:
			printf("opening enviornment file\n");
			fp=fopen("enviornment.txt","r");
			if(fp==NULL)
			{
				printf("file not found");
			}
			else
			{
				ch=fgetc(fp);
				while(ch!=EOF)
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
			}
			break;
		case 4:
			printf("opening crime file\n");
			fp=fopen("crime.txt","r");
			if(fp==NULL)
			{
				printf("file not found");
			}
			else
			{
				ch=fgetc(fp);
				while(ch!=EOF)
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
			}
			break;
		case 5:
			printf("opening technology file\n");
			fp=fopen("tech.txt","r");
			if(fp==NULL)
			{
				printf("file not found");
			}
			else
			{
				ch=fgetc(fp);
				while(ch!=EOF)
				{
					printf("%c",ch);
					ch=fgetc(fp);
				}
			}
			break;
		default:
			printf("error occured");
			
	}
	fclose(fp);

}

