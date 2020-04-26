/* C Code for comparing crime dictionary and saving it into respected file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000
struct dictionary{
	char d_name[10];
	char d_words[565][15];
}d= {"crime",{
"abuse", "accessory","accomplice", "accused", "accuser", "activists", "adversary", "affect", "AFIS", "against", "agency", "aggravated","assault", "alarm", "alcohol", "alert", "alias", "alibi", "alienate", "allegation", "ammunition", "APb", "appeal", "armed", "arraignment", "arrest", "arsenal","arson", "art forgery", "assailant1", "assault", "attack", "authority, autopsyb","background check", "backup", "bail", "ballistics", "battery", "beat", "behavior", "behind bars", "belligerence", "big house", "blackmail", "bloodstain", "bombing", "brawl", "breach", "break-in", "breaking and entering", "bribery", "brutality", "bullying", "burden of proof", "burglary", "bystander"
,"Capture", "Case", "Caution", "Chase", "cheat", "civil", "claim", "coercion", "collusion", "combat", "commission", "commit", "complaint", "complication", "conduct", "confession", "connection", "conspiracy", "contact", "contacts", "contempt", "control", "controversial", "conviction", "cops", "coroner", "corruption", "counsel", "counterfeit", "court", "credit theft", "crime", "criminal", "criminal justice system", "criminology", "cuffs", "custody","Damage", "Danger", "Dangerous", "Dark side","Data base","Deadly", "Deal", "Dealings", "Death", "Deed", "Defendant", "Defense", "Deliberate", "Delinquency", "Democratic", "Denial", "Department", "Deputy", "Detail", "Detain", "Detection", "Detective", "Deter", "Determination", "Deviant", "Direct", "Discovery", "Dismember", "Disobedience", "Disorderly", "Dispatch", "Disregard", "Disruption","District attorney", "DNA", "Documentation", "Documents", "Domestic", "Dossier", "Drill", "Drugs", "Duty"
,"Educate", "Education", "Effect", "Elusive", "Embezzle", "Emergency", "Enable", "Encumber", "Enforce", "Entail", "Equality", "Escape", "Ethical", "Evasive", "Eviction", "Evidence", "Evil", "Examination", "Execute", "Exonerate", "Expert", "Explosives", "Expunge", "Extort", "Extradition", "Extreme"
,"Failure", "fairness", "family", "fatality", "fault", "fbI", "federal", "felony", "ferocity", "fight", "fighting", "fine", "fingerprint", "firebombing", "first-degree", "flee", "footprints", "forbidden", "force", "forensics", "forgery", "formal charge", "frantic", "fraud", "freedom", "full-scale", "fundamental", "Furtive"
,"Good guys", "Gory", "government", "grief", "grievance", "guarantee", "guard", "guilty", "gun", "gunrunning"
,"hand-to-hand", "handcuffs", "handle", "harassment", "harm", "harmful", "headquarters", "heinous", "helicopter"," help", "helpful", "high-powered rifle", "high-profile", "hijack", "hire", "holding cell", "holster", "homicide", "honesty", "honor", "hostage", "hot-line", "humanity"
,"identification", "illegal", "immoral", "immunity", "impeach", "impression", "imprison", "improper", "incarceration", "incompetent", "incriminating", "indictment", "influence", "informant", "information", "initiative", "injury", "inmate", "innocence", "innocent", "inquest", "instruct", "integrity", "intelligence", "interests", "interference", "international", "interpol", "interpretation", "interrogate", "interrogate", "interstate", "intervention", "interview", "intrastate", "intruder", "invasive", "investigate", "investigation", "irregular", "irresponsible", "Issue","jail", "john Doe", "judge", "judgment", "judicial", "judiciary", "jurisdiction", "jury", "justice", "juvenile"
,"kidnapping", "kill", "killer", "kin"
,"laboratory", "larceny", "law", "law-abiding", "lawfully", "lawsuit", "lawyer", "leaks", "lease", "legal", "legislation", "legitimate", "lethal", "libel", "liberty", "license", "lie detector", "lien", "lieutenant", "limits", "long hours", "lowlife", "loyalty", "Lynch"
,"mace", "maintain", "majority", "malice", "malpractice", "manacled", "manslaughter", "marshal", "mayhem", "metal detector", "minor", "minority", "miscreant", "misdemeanor", "missing person", "mission", "model", "money laundering", "moratorium", "motorist", "murder", "murderer"
,"national", "negligent", "negotiable", "negotiate", "neighborhood", "network", "nine-one-one", "notation", "notification", "Nuisance"
,"oath", "obey", "obligation", "offender", "offense", "officer", "official", "on-going", "open case", "opinion", "opportunity", "order", "organize", "Ownership"
,"partner", "partnership", "pathology", "patrol", "pattern", "pedestrian", "peeping Tom", "penalize", "penalty", "perjury", "perpetrator", "petition", "petty theft", "phony", "plainclothes officer", "plea", "plead", "police", "policy", "power", "precedent", "precinct", "preliminary findings", "prevention", "principle", "prior", "prison", "private", "probable cause", "probation", "probation officer", "procedure", "professional", "profile", "prohibit", "proof", "property", "prosecute", "prosecutor", "prostitution", "protection", "protocol", "provision", "public", "punishment"
,"quake", "qualification", "quality", "quantify", "quantity", "quarrel", "quell", "question", "quickly", "quirk", "quiver"
,"radar", "raid", "rank", "rap sheet", "rape", "reason", "reckless endangerment", "record", "recovery", "recruit", "redress", "reduction", "refute", "register", "regulations", "reinforcement", "reject", "release", "repeal", "reported", "reports", "reprobate", "reputation", "requirement", "resist", "responsibility", "restitution", "restraining order", "restriction", "revenge", "rights", "riot", "robbery", "rogue", "rough", "rules", "Rulings"
,"sabotage", "safeguard", "sanction", "scene", "sealed record", "search and rescue team", "secret", "seize", "seizure", "selection", "sentence", "sergeant", "serial killer", "seriousness", "services", "sex crimes", "shackles", "sheriff", "shooting", "shyster", "sighting", "situation", "skillful", "slander", "slashing","slaying", "smuggling", "sorrow", "speculation", "spying", "squad", "stabbing", "stalking", "statute", "statute of limitation", "stigma", "stipulation", "subdue", "subpoena", "successful", "summons", "supervise", "suppress", "surveillance", "survivor", "suspect", "suspected", "suspicion", "suspicious", "sworn", "System"
,"tactic", "task force", "terrorism", "testify", "testimony", "theft", "threatening", "three-strikes law", "thwart", "tire-slashing", "torture", "toxicology", "trace", "traffic", "trafficking", "tragedy", "transfer", "trauma", "treatment", "trespass", "trial", "trooper", "trust"
,"unacceptable", "unauthorized", "unclaimed", "unconstitutional", "undercover", "underpaid", "understaffed", "unexpected", "unharmed", "uniform", "unintentional", "unit", "unjust", "unknown", "unlawful", "unsolved", "Uphold"
,"vagrancy", "vandalism", "viable", "vice", "victim", "victimize", "victory", "vigilance", "vigilante", "violate", "violation", "violence", "volunteer", "vow", "voyeurism", "Vulnerable"
,"wanted poster", "ward", "warning", "warped", "warrant", "watch", "weapon", "will", "wiretap", "wisdom", "witness", "worse", "wrong"
,"youth","zeal", "zealous"
}};

int countOccurrences(FILE *fptr, const char *word);
void saving();

int main()
{
    FILE *fptr;
    char path[100];
    char *word;
    int wcount,total,i;
	total=0;
	
    printf("Enter file path: ");
    scanf("%s", path);
	
	for(i=0;i<300;i++)
	{
	word=d.d_words[i];
    
	fptr = fopen(path, "r");
    
	if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        
    }

    wcount = countOccurrences(fptr, word);
    printf("'%s' is found %d times in file.\n", word, wcount);
	total=total+wcount;
	}
	if(total>=4)
	{
		saving();
		printf("news is related to crime and is saved to crime file");
	}
	else
	{
		printf("file does not contain words related to crime");
	}
	
    fclose(fptr);

    return 0;
}

int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;
    int index, count;
    
    count = 0;
    
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
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
 
	target = fopen("crime.txt", "a");
 
	if( target == NULL )
	{
	    fclose(source);
	    printf("some error occured in cpoying source file to target file");
	}
	 
	while( ( ch = fgetc(source) ) != EOF )
    {fputc(ch, target);}

   printf("file copied successfully.\n");
 
   fclose(source);
   fclose(target);
 
   return 0;
}
