/* C Code for comparing enviornment dictionary and saving it into respected file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bUFFER_SIZE 1000
struct dictionary{																					//creating a dictionary to store genre and words related to it
	char d_name[10];																				//1-D array to store genre
	char d_words[173][15];																			//2-D array to stre words related to genre
}
d={"environment",{
	"acid rain", "aerosol", "affect", "atmosphere", "aware", "balance", "biodegradable", "biodiversity", "biosphere", "carbon", "carbon dioxide", "carbon monoxide", "catalytic convertor", 
    "catastrophe", "cut", "cooling agents", "contaminate","climate","bad","contaminates", "contaminated", "creature", "forest", "death", "climate", "weather", "destroy", "destruction", "detergent", "die",
    "diminish", "dirt", "disappear", "disaster","morning ", "disposal", "drought", "parch", "dump", "dumped", "dumps", "forests", "dumping grounds", "earthquake", "ecology", "ecosystem", "emission"
    "emit", "emits", "endangered", "energy", "endangered", "source", "efficient", "environment", "environmentalist", "erode", "erosion", "evolution", "extinct", "exhaust", "farming",
	"factory", "geothermal", "global warming", "greenhouse", "hit", "harm", "harmful", "heat wave", "metal", "hydrocarbon", "industrial", "industry", "industries", "leak", "leaked"
	"load", "loaded", "marine life", "menace", "natural gas", "oil", "oil", "stick", "overfertilization", "fertilization", "oxygen", "ozone", "permission", "permissible", "poison"
	"poisonous", "ice", "pollute", "pollution", "power", "precipitation", "preservation", "prevention", "protect", "save", "purify", "radiation", "rainforest", "rainforests", "recycle"
	"remedial", "action", "renewable", "reusable", "reduce", "screen", "sewage", "plant", "sludge", "soil", "solvent", "starvation", "stratosphere", "surface", "threaten", "tide"
    "tides", "timber", "toxic", "waste", "trawler", "unleaded", "untreated", "urbanization", "paper", "seperation", "wind", "windfarm", "desertification", "species", "flood", 
    "resources", "tsunami", "volcano", "abatement", "algae", "burning", "biofuels", "carpooling", "compost", "domestic", "effluent", "flora", "fauna", "fuel", "poverty", "water", 
    "habitat", "hazardous", "household", "kyoto", "landfill", "landslide", "mulch", "noise", "organic", "organism", "pesticides", "plastic", "radioactive", "reforestation", "refuse",
	"river", "smog", "fog", "smoke", "solar", "sustainable", "toxin", "ventilation", "vapour", "zero"}};	//genre name and word related to it

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
	
	for(i=0;i<170;i++)
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
		printf("news is related to enviornment and is saved to enviornment file");
	}
	else
	{
		printf("file does not contain words related to enviornment");
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
 
	target = fopen("enviornment.txt", "a");
 
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
