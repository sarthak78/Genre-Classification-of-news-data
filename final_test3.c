#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

struct dictionary{
	char d_name[10];
	char d_words[565][15];
}d= {"crime",{
"Abuse", "Accessory","Accomplice", "Accused", "Accuser", "Activists", "Adversary", "Affect", "AFIS", "Against", "Agency", "Aggravated","assault", "Alarm", "Alcohol", "Alert", "Alias", "Alibi", "Alienate", "Allegation", "Ammunition", "APB", "Appeal", "Armed", "Arraignment", "Arrest", "Arsenal","Arson", "Art forgery", "Assailant1", "Assault", "Attack", "Authority, AutopsyB","Background check", "Backup", "Bail", "Ballistics", "Battery", "Beat", "Behavior", "Behind bars", "Belligerence", "Big house", "Blackmail", "Bloodstain", "Bombing", "Brawl", "Breach", "Break-in", "Breaking and entering", "Bribery", "Brutality", "Bullying", "Burden of proof", "Burglary", "Bystander"
,"Capture", "Case", "Caution", "Chase", "Cheat", "Civil", "Claim", "Coercion", "Collusion", "Combat", "Commission", "Commit", "Complaint", "Complication", "Conduct", "Confession", "Connection", "Conspiracy", "Contact", "Contacts", "Contempt", "Control", "Controversial", "Conviction", "Cops", "Coroner", "Corruption", "Counsel", "Counterfeit", "Court", "Credit theft", "Crime", "Criminal", "Criminal justice system", "Criminology", "Cuffs", "Custody","Damage", "Danger", "Dangerous", "Dark side","Data base","Deadly", "Deal", "Dealings", "Death", "Deed", "Defendant", "Defense", "Deliberate", "Delinquency", "Democratic", "Denial", "Department", "Deputy", "Detail", "Detain", "Detection", "Detective", "Deter", "Determination", "Deviant", "Direct", "Discovery", "Dismember", "Disobedience", "Disorderly", "Dispatch", "Disregard", "Disruption","District attorney", "DNA", "Documentation", "Documents", "Domestic", "Dossier", "Drill", "Drugs", "Duty"
,"Educate", "Education", "Effect", "Elusive", "Embezzle", "Emergency", "Enable", "Encumber", "Enforce", "Entail", "Equality", "Escape", "Ethical", "Evasive", "Eviction", "Evidence", "Evil", "Examination", "Execute", "Exonerate", "Expert", "Explosives", "Expunge", "Extort", "Extradition", "Extreme"
,"Failure", "Fairness", "Family", "Fatality", "Fault", "FBI", "Federal", "Felony", "Ferocity", "Fight", "Fighting", "Fine", "Fingerprint", "Firebombing", "First-degree", "Flee", "Footprints", "Forbidden", "Force", "Forensics", "Forgery", "Formal charge", "Frantic", "Fraud", "Freedom", "Full-scale", "Fundamental", "Furtive"
,"Good guys", "Gory", "Government", "Grief", "Grievance", "Guarantee", "Guard", "Guilty", "Gun", "Gunrunning"
,"Hand-to-hand", "Handcuffs", "Handle", "Harassment", "Harm", "Harmful", "Headquarters", "Heinous", "Helicopter"," Help", "Helpful", "High-powered rifle", "High-profile", "Hijack", "Hire", "Holding cell", "Holster", "Homicide", "Honesty", "Honor", "Hostage", "Hot-line", "Humanity"
,"Identification", "Illegal", "Immoral", "Immunity", "Impeach", "Impression", "Imprison", "Improper", "Incarceration", "Incompetent", "Incriminating", "Indictment", "Influence", "Informant", "Information", "Initiative", "Injury", "Inmate", "Innocence", "Innocent", "Inquest", "Instruct", "Integrity", "Intelligence", "Interests", "Interference", "International", "Interpol", "Interpretation", "Interrogate", "Interrogate", "Interstate", "Intervention", "Interview", "Intrastate", "Intruder", "Invasive", "Investigate", "Investigation", "Irregular", "Irresponsible", "Issue","Jail", "John Doe", "Judge", "Judgment", "Judicial", "Judiciary", "Jurisdiction", "Jury", "Justice", "Juvenile"
,"Kidnapping", "Kill", "Killer", "Kin"
,"Laboratory", "Larceny", "Law", "Law-abiding", "Lawfully", "Lawsuit", "Lawyer", "Leaks", "Lease", "Legal", "Legislation", "Legitimate", "Lethal", "Libel", "Liberty", "License", "Lie detector", "Lien", "Lieutenant", "Limits", "Long hours", "Lowlife", "Loyalty", "Lynch"
,"Mace", "Maintain", "Majority", "Malice", "Malpractice", "Manacled", "Manslaughter", "Marshal", "Mayhem", "Metal detector", "Minor", "Minority", "Miscreant", "Misdemeanor", "Missing person", "Mission", "Model", "Money laundering", "Moratorium", "Motorist", "Murder", "Murderer"
,"National", "Negligent", "Negotiable", "Negotiate", "Neighborhood", "Network", "Nine-one-one", "Notation", "Notification", "Nuisance"
,"Oath", "Obey", "Obligation", "Offender", "Offense", "Officer", "Official", "On-going", "Open case", "Opinion", "Opportunity", "Order", "Organize", "Ownership"
,"Partner", "Partnership", "Pathology", "Patrol", "Pattern", "Pedestrian", "Peeping Tom", "Penalize", "Penalty", "Perjury", "Perpetrator", "Petition", "Petty theft", "Phony", "Plainclothes officer", "Plea", "Plead", "Police", "Policy", "Power", "Precedent", "Precinct", "Preliminary findings", "Prevention", "Principle", "Prior", "Prison", "Private", "Probable cause", "Probation", "Probation officer", "Procedure", "Professional", "Profile", "Prohibit", "Proof", "Property", "Prosecute", "Prosecutor", "Prostitution", "Protection", "Protocol", "Provision", "Public", "Punishment"
,"Quake", "Qualification", "Quality", "Quantify", "Quantity", "Quarrel", "Quell", "Question", "Quickly", "Quirk", "Quiver"
,"Radar", "Raid", "Rank", "Rap sheet", "Rape", "Reason", "Reckless endangerment", "Record", "Recovery", "Recruit", "Redress", "Reduction", "Refute", "Register", "Regulations", "Reinforcement", "Reject", "Release", "Repeal", "Reported", "Reports", "Reprobate", "Reputation", "Requirement", "Resist", "Responsibility", "Restitution", "Restraining order", "Restriction", "Revenge", "Rights", "Riot", "Robbery", "Rogue", "Rough", "Rules", "Rulings"
,"Sabotage", "Safeguard", "Sanction", "Scene", "Sealed record", "Search and rescue team", "Secret", "Seize", "Seizure", "Selection", "Sentence", "Sergeant", "Serial killer", "Seriousness", "Services", "Sex crimes", "Shackles", "Sheriff", "Shooting", "Shyster", "Sighting", "Situation", "Skillful", "Slander", "Slashing","Slaying", "Smuggling", "Sorrow", "Speculation", "Spying", "Squad", "Stabbing", "Stalking", "Statute", "Statute of limitation", "Stigma", "Stipulation", "Subdue", "Subpoena", "Successful", "Summons", "Supervise", "Suppress", "Surveillance", "Survivor", "Suspect", "Suspected", "Suspicion", "Suspicious", "Sworn", "System"
,"Tactic", "Task force", "Terrorism", "Testify", "Testimony", "Theft", "Threatening", "Three-strikes law", "Thwart", "Tire-slashing", "Torture", "Toxicology", "Trace", "Traffic", "Trafficking", "Tragedy", "Transfer", "Trauma", "Treatment", "Trespass", "Trial", "Trooper", "Trust"
,"Unacceptable", "Unauthorized", "Unclaimed", "Unconstitutional", "Undercover", "Underpaid", "Understaffed", "Unexpected", "Unharmed", "Uniform", "Unintentional", "Unit", "Unjust", "Unknown", "Unlawful", "Unsolved", "Uphold"
,"Vagrancy", "Vandalism", "Viable", "Vice", "Victim", "Victimize", "Victory", "Vigilance", "Vigilante", "Violate", "Violation", "Violence", "Volunteer", "Vow", "Voyeurism", "Vulnerable"
,"Wanted poster", "Ward", "Warning", "Warped", "Warrant", "Watch", "Weapon", "Will", "Wiretap", "Wisdom", "Witness", "Worse", "Wrong"
,"Youth","Zeal", "Zealous"
}};


/* Function declarations */
int countOccurrences(FILE *fptr, const char *word);


int main()
{
    FILE *fptr;
    char path[100];

    char *word;

    int i,j,wCount;

    /* Input file path */
    printf("Enter file path: ");
    scanf("%s", path);

    /* Input word to search in file */


    /* Try to open file */
    fptr = fopen(path, "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }
    
    for(i=0;i<=311;i++)
	{	word=d.d_words[i];
		wCount = countOccurrences(fptr, word);
		printf("'%s' is found %d times in file.\n", word, wCount);
	}


    // Call function to count all occurrence of word
   




    // Close file
    fclose(fptr);

    return 0;
}


/**
 * Returns total occurrences of a word in given file.
 */
int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;
    printf("%s",word);
	
    // Read line from file till end of file.
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
    	printf("samee");
        index = 0;
        printf("%s",word);
		
        // Find next occurrence of word in str
        while ((pos = strstr(str + index,word)) != NULL)
        {	printf("%s",word);
            // Index of word in str is
            // Memory address of pos - memory
            // address of str.
            index = (pos - str) + 1;

            count++;
        }
    }

    return count;
}
