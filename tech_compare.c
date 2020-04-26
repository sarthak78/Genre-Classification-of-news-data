/* C Code for comparing technology dictionary and saving it into respected file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bUFFER_SIZE 1000
struct dictionary{											//creating a dictionary to store genre and words related to it
	char d_name[10];										//1-D array to store genre
	char d_words[173][15];									//2-D array to stre words related to genre
}
d={"technology",{"technology","technological","robotics","electronics","software","technical school","polytechnic","computer","electronic",
"biotechnology","gadgets","manufacturing","industrialscience","computing","nanotechnology","bioscience","techie","cryogenics","school",
"technician","technical","chip","engineer","advanced","helped","texas","giants","new","market","ucla","computers","business","micro",
"titans","atlanta","big","stanford","miami","marketing","intel","high","arizona","denver","consumer","improved","usf","industry","technologies",
"leading","florida","rebounding","kansas","makers","chicago","clemson","tennessee","manufacturers","pseudo","science","houston","stocks","cisco",
"tools","smart","run","drive","usc","hokies","seattle","york","home","tool","equipment","systems","basketball","dallas","indianapolis","corporate",
"technique","drives","better","american","running","michigan","indiana","baltimore","focus","midwest","advantage","center","scientifically","companies",
"scientific","phoenix","record","engineering","game","buying","quarter","booming","longhorns","cowboys","syracuse","firms","up","offense","california",
"whiz","upgrade","sales","detroit","chips","key","notebook","neuroscience","hydroscience","engineering", "school","polytechnic","institute","metrology",
"cyber","science","sociology","climatology","tribology","biophysics","organon","bionanoscience","alchemical","superscience","technoscience","geology",
"proscience","bellwethers","fortran","bionics","multiscience","antiscience","phrenology","architectonics","ergonomics","scienceless","systematics",
"hydrodynamic","alchemy","epistemology","microscopy","ic","theoretician","interoperable","psychology","sciencelike","geophysics","cybernetics","university"
,"optimization","scientist","nonscience","interoperability","geoscience","mcscience","limnology","glycoscience","physicist","agronomy","informatics","radiography"
,"metaphysics","physiology","dendrohydrology","physicology","theorist","developer","environmental","mathematician","system","aeronautics","operator","logistics",
"astrophysics","histology","electrochemistry","anthropology","water","course","agrobiology","biological","modernize","channel","technoid","ecological","kinesiology",
"biologist","eco","biodynamic","rill","naturalist","cartography","electrical engineer","river","inephoto","science","empiricism","comparator","specialize","gerontology",
"subroutine","apply","sciencecanalisation","methodology","ecology","startups","biotech","sci","biomedical","aerospace","networking","technologists","automotive","telecom",
"technohardware","innovators","tecs","emiconductor","labs","biznerds","biometrics","telecommunications","biomedicine","futuristic","cyber","wireless","robots","brainiacinnovation",
"roboticincubator","entrepreneur","ialdarpa","micro","electronics","pharma","nano","profile","hipster","laptops","digitals","bca","eronautic","auto","outsourcin","gradacade","mia",
"futurism","smartphone","specialization","cryptography","evolution","demographylogy","canal","canalise","mechanical", "engineer","electro","telegraphy","sysop","geroscience",
"biocomputing","sociobiology","neurophysics","system","science","microphonics","actinochemistry","terotechnology","exobiology","cyberpsychology","thanatology","depolarize",
"psychobiology","macrophysics","infostructure","lifehack","bioacoustics","radiology","chemical","engineer","alchemize","astrobiology","scientic","idetran","sistorize",
"information","science","apply","mathematics","cyberphilosophy","cybertechnology","scientific method","biomed","dotcom","geek","digeratig","izmostechy","technophil","eungreen",
"symbolics","brainiacs","brainpower","thing","amajigs","grad","senviro","whiz","bang","futurology","gearhead","micrographic","sturtle","neck","edhigh","flier","doodad","photo",
"micrography","fanboy","intra","preneur","cogwheels","dealmaking","cryptology","newfang","led","pricey","social science","gim","cracks","scientific","discipline","cognitive",
"scienceformal"," sciencesoftware","engineerinformation","theoryphilosophy","sciencenatural","sciencetopic","categoryscientific","theoryhard","sciencechemical","physicfield",
"studynatural","historyspace","technologybachelor","sciencequantum physic","system","theory","school","subject","system","analysis","civil engineer","physical","chemistry",
"mathematical","logicletter","sciencesecurity","systemtechnological","university","computer science","rocket science","exact","sciencesystem","engineerlife",
"scienceinformation"," technology","pure","mathematics","industrial","design","industrial","artstatistical","mechanic","natural","philosophy","affine","transformation",
"bucket"," chemistry","evolutionary","biology","screen saver","linear","programmonkey", "patchtransport","goodpower","user","seismic","design","political science","quantum",
"mechanic","computer","scientist","space","biology","dot com","venture","capitalgee","whizcutting","edgeventure","capitalist","vacuum tube","dean","kamen","ultrahigh","frequency","bridge river"
}};																//genre name and word related to it

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
	
	for(i=0;i<172;i++)
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
	if(total>=4)
	{
		saving();
		printf("news is related to technology and is saved to technology file");
	}
	else
	{
		printf("file does not contain words related to technology");
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
 
	target = fopen("tech.txt", "a");
 
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
