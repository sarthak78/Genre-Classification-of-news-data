/* C Code for comparing sports dictionary and saving it into respected file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bUFFER_SIZE 1000
struct dictionary{								//creating a dictionary to store genre and words related to it
	char d_name[10];							//1-D array to store genre
	char d_words[247][15];						//2-D array to stre words related to genre
}d={"movies and TV",{"b movie","Western","action","adventure","animated","animation","biography","black and white","cartoon","comedy","crime","kids","musical","mystery","newreleases",
	"romance","romantic comedy","sci-fi","sciencefiction","documentary","drama","fantasy","feature films","film noir","foreign","historical","horror","improv","improvisation",
	"independent","sketchcomedy","skinlick","slapstick","specialinterest","sports","stopmotion","suspense","thriller","wardrama""CGI","Hollywood","acting","action","actor","actress",
	"adventure","antagonist","artistic merit","audience","audience","audience escapism","audience response","autobiography","budget","camera","cast","central character","character",
	"character actor","hero","glossy","shining","carpet","character chemistry","character development","cinema","cinematography","climax","closure""comedic timing","comedy","compilation","concept","conclusion","context",
	"continuity","costume","creativity","crew","culture","depiction","depth","dialogue","director","duality","empathy","ending","execution","exploration","expression","fantasy",
	"female lead","fiction","film","film critic","movie theatre","musical score","narration","narrative","narrative thread","narrative voice","narrator","nuance","observation",
	"originality","pace","parable","paradox","passion","perception","performance","performer","perspective","philosophy","play","plot","plot twist","point of view","portrait",
	"portrayal","precision","premiere","premise","preoccupation","prequel","producer","production","protagonist","rating","rave reviews","readership","reflection","remake","rendition",
	"representation","resolution","resonance","role","roller coaster","romance","saga","satire","scene","screen","screenplay","screenwriter","script","filmmaking","finale","flashback",
	"flick","foreshadowing","format","frame","genre","growth","hero","heroine","humor","impact","improv","improvisation","insight","inspiration","intensity","interaction","interpretation",
	"intricacies","intrigue","irony","journey","juxtaposition","labyrinth","language","lead character","leading lady","leading man","leads","lighting","lines","love interest","made-for-TV",
	"magic","main character","male lead","manipulation","masterpiece","mastery","maturity","meaning","memoir","message","metaphor","method","motion picture","motivation","movie","movie goer",
	"movie review","sensitivity","sensuality","sequel","series","series","set design","setting","shot","silver","screen","sitcom","special effects","spotlight","stage","star","statement",
	"story","storyline","structure","style","subconscious","subject","subject matter","subplot","supporting actor","suspense","symbol","symbolism","tale","talent","technique","theatre",
	"theme","thriller","thrillride","thumbs up","tone","tragedy","transformation","true story","understanding","use of language","vehicle for","viewer","viewpoint","vision","voice",
	"voice-over","well-cast","well-written","wisdom","work","writer"}
	};													//genre name and word related to it

int countOccurrences(FILE *fptr, const char *word);
void saving();

int main()
{
    FILE *fptr;
    char path[100];
    char *word;
    int wCount,total,i;
	total=0;
	
    printf("Enter file path: ");
    scanf("%s", path);
	
	for(i=0;i<200;i++)
	{
	word=d.d_words[i];
    
	fptr = fopen(path, "r");
    
	if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        
    }

    wCount = countOccurrences(fptr, word);
    printf("'%s' is found %d times in file.\n", word, wCount);
	total=total+wCount;
	}
	if(total>=3)
	{
		saving();
		printf("news is related to movies and entertainment and is saved to movie file");
	}
	else
	{
		printf("file does not contain words related to movie and entertainment");
	}
	
    fclose(fptr);

    return 0;
}

int countOccurrences(FILE *fptr, const char *word)
{
    char str[bUFFER_SIZE];
    char *pos;
    int index, count;
    
    count = 0;
    
    while ((fgets(str, bUFFER_SIZE, fptr)) != NULL)
    {
        index = 0;
        
        while ((pos = strstr(str + index, word)) != NULL)
        {
        	index = (pos - str) + 1;
        	count++;
        }
    }

    return count;
}

void saving()
{
	char ch;
	FILE *source, *target; 

	source = fopen("copy.txt", "r");

	if( source == NULL )
	{
	    printf("some error occured");
    }
 
	target = fopen("movie.txt", "a");
 
	if( target == NULL )
	{
	    fclose(source);
	    printf("some error occured in cpoying source file to target file");
	}
	 
	while( ( ch = fgetc(source) ) != EOF )
    {fputc(ch, target);}

   printf("File copied successfully.\n");
 
   fclose(source);
   fclose(target);
 
   return 0;
}
