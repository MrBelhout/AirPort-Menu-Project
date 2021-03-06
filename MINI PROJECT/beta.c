#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//FILE *planes_file ;
//FIRST AIRPLANE EVER MADE IN 1903

typedef struct node
{
    plane pln ;
    node *next ;
}node;



typedef struct date
{
    int year ;
    int day ;
    int month ;
}date;


typedef struct plane
{
    char ID[10] ;
    char state ;
    date fabrication ;
    int max_flights ;
    int assured_flights ;
    char company[10] ;

}plane;

plane P ;

void AddPlane(FILE *planes_file)
{
    FILE *IDs ;
    char id[10];
    int i = 0 ;
    char enter = "y";
    bool collision = false ;

    IDs = fopen("IDs.txt","w");

    while (fscanf("%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {
        i += 1 ; 
        fprintf(IDs,"%s\n",P.ID) ;
    }
    
    fclose(planes_file) ;
    fclose(IDs);

    planes_file = fopen("planes_file.txt","a") ;

    if (i < 21 && enter == "y")
    {
        IDs = fopen("IDs.txt","r");
        planes_file = fopen("planes_file.txt","a");

        scanf("%s %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
        P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company);


        while (collision != true && fscanf(IDs,"%s",id) != EOF)j
        {
            if (id = P.ID)
            {
                collision = true ;
            }
            
        }

        fclose(IDs)

        if (collision = false)
        {
            fprintf(planes_file,"%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
            P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company);
        }
        
        enter = "n" ;

        printf("do you want to enter more planes ? n for no y for yes");
        scanf("%c",enter);

    }

    fclose(planes_file) ;

    
}


bool present(FILE planes_file , plane G)
    bool found = false ;

    while (scanf(planes_file,"%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF && found==false)
    {
        if (P.ID == G.ID  )
        {
            found = true
        }
        
    }
    
    return found ;
}

plane *ToLinkedList(FILE *planes_file)
{
    date oldest ; 
    fscanf(planes_file,"%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)

    oldest = P.farication ;

    while (fscanf(planes_file,"%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {

        if (present(P) == true)
        {
            //possible switch cas here
            if (P.fabrication.year < oldest.year)
            {
                oldes = P.fabrication ;
                else
                {
                    if (P.fabtication.year == oldest.year)
                    {
                        if (P.fabrication.month < oldest.month)
                        {
                            oldes = P.fabrication ;
                            else if (P.fabrication.month == oldest.month)
                            {
                                if (P.fabricaion.day <= oldest.day)
                                {
                                    oldes = P.fabrication ;
                                    
                                }
                                 
                            }
                            
                        }
                        
                    }
                
                }
                

            }
            
        }
        
    }
    fclose(planes_file);
    planes_file = fopen("planes_file.txt","r");
    int k = 1 ;
    //u can change inter by header and not use inter at all
    node *header , *nd , *inter;
    inter = NULL ;


    while (scanf("%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {
        if (P.fabrication.year == oldest.year && P.fabrication.month == oldest.month && P.fabrication.day == oldest.day)
        {
            nd = malloc(sizeof(node)) ;
            nd->pln = P ;
            nd->next = inter ;
            inter = nd ;
            
        }
        
    }
    

    while (scanf("%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {
        if (P.company == "Air France")
        {
            nd = malloc(sizeof(node)) ;
            nd->pln = P ;
            nd->next = inter ;
            inter = nd ;            
            
        }
        
    }


    while (scanf("%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {
        if (P.assured_flights >= 110)
        {
            nd = malloc(sizeof(node)) ;
            nd->pln = P ;
            nd->next = inter ;
            inter = nd ;            
            
        }
    }
    

    while (scanf("%c %c %d %d %d %d %d %c",P.ID ,P.state ,P.fabrication.year ,
    P.fabrication.month ,P.fabrication.day ,P.max_flights ,P.assured_flights ,P.company)!=EOF)
    {
        if (P.assured_flights < 110 && P.company != "air france" && P.fabrication.year != oldest.year && P.fabrication.month != oldest.month && P.fabrication.day != oldest.day)
        {
            nd = malloc(sizeof(node)) ;
            nd->pln = P ;
            nd->next = inter ;
            inter = nd ;            
            
        }
    }
    
}

void GetByBirthday(int d ,int m ,int y)
{
    node *scope ;  //chercheur
    while (scope != NULL)
    {
        if (scope->pln.assured_flights >= 110)
        {
            printf("there you have it , plane with ID %s has more than 109 flights \n",scope->pln.ID) ;
        }
        
        scope = scope->next ;
    }
}

void disect(node *header)
{
    node *decoll?? , *atterrie , *maintenance , *inter ;
    inter = NULL ;
    header2 = header ;

    while (header2->next != NULL)
    {
        if(header2->pln.state == "d")
        {
            decloll?? = malloc(sizeof(node)) ;
            decloll??->pln = header2->pln ;
            decloll??->next = inter ;
            inter = decoll?? ;  
        }
    }
    header2 = header ;

    while (header2->next != NULL)
    {
        if(header2->pln.state == "a")
        {
            atterrit = malloc(sizeof(node)) ;
            atterrit->pln = header2->pln ;
            atterrit->next = inter ;
            inter = decoll?? ;  
        }
    }
    header2 = header ;

    while (header2->next != NULL)
    {
        if(header2->pln.state == "a")
        {
            maintenance = malloc(sizeof(node)) ;
            maintenance->pln = header2->pln ;
            maintenance->next = inter ;
            inter = decoll?? ;  
        }
    }
    
}

void ToFile(node *decoll?? ,node *atterrie ,node *maintenance ,node *inter)
{
    node *decoll??1 , *atterrie1 , *maintenance1 , *inter1 ;
    FILE *decoll?? , *atterrie , *maintenance , *inter ;

    decoll?? = fopen("decoll??.txt","w");
    atterrie = fopen("atterrie.txt","w");
    maintenance = fopen("maintenance.txt","w");


    while (decoll??1 != NULL || atterrie1 != NULL || maintenance1 != NULL)
    {
        if (decoll??1 != NULL)
        {
            fprintf(decoll?? ,"%s %c %d %d %d %d %d %s", decoll??1->pln.ID , decoll??1->pln.state , decoll??1->pln.date.year ,
            decoll??1->pln.date.month , decoll??1->pln.date.day , decoll??1->pln.max_flights , decoll??1->pln.assured_flights ,decoll??1->pln.company) ;
        }
        if (atterrie1 != NULL)
        {
            fprintf(atterrie ,"%s %c %d %d %d %d %d %s", atterrie->pln.ID , atterrie->pln.state , atterrie->pln.date.year ,
            atterrie->pln.date.month , atterrie->pln.date.day , atterrie->pln.max_flights , atterrie->pln.assured_flights ,atterrie->pln.company) ;
        }
        if (maintenance1 != NULL)
        {
            fprintf(maintenance ,"%s %c %d %d %d %d %d %s", maintenance->pln.ID , maintenance->pln.state , maintenance->pln.date.year ,
            maintenance->pln.date.month , maintenance->pln.date.day , maintenance->pln.max_flights , maintenance->pln.assured_flights ,maintenance->pln.company) ;
        }
        
        
    }
    
}

void DelLufth(node * decoll??)
{
    node *Ddecoll?? ;
    node *inter ;
    Ddecoll?? = decoll?? ;
    
    if(decoll??->pln.state == "d")
    {
        while (Ddecoll?? != NULL) 
        {
            
            if (Ddecoll??->pln.company = "lufthansa")
            {
                inter = Ddecoll?? ;
                Ddecoll?? = Ddecoll??->next ;
                free(inter);
            }
            Ddecoll?? = Ddecoll??->next ;
        }
    }
}

void The100(node *atterris)
{
    node *attrr ;
    attrr = atterris ;

    if (attearris->pln.state == "a")
    {
        while (attrr != NULL)
        {
            if (attrr->pln.max_flights < 101)
            {
                printf("there u have it plane %s has less than 100 passanger" , attrr->pln.ID) ;
            }
            
        }
        
    }
    
}



int main()
{

}