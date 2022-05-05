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
    node *decollé , *atterrie , *maintenance , *inter ;
    inter = NULL ;
    header2 = header ;

    while (header2->next != NULL)
    {
        if(header2->pln.state == "d")
        {
            declollé = malloc(sizeof(node)) ;
            declollé->pln = header2->pln ;
            declollé->next = inter ;
            inter = decollé ;  
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
            inter = decollé ;  
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
            inter = decollé ;  
        }
    }
    
}

void ToFile(node *decollé ,node *atterrie ,node *maintenance ,node *inter)
{
    node *decollé1 , *atterrie1 , *maintenance1 , *inter1 ;
    FILE *decollé , *atterrie , *maintenance , *inter ;

    decollé = fopen("decollé.txt","w");
    atterrie = fopen("atterrie.txt","w");
    maintenance = fopen("maintenance.txt","w");


    while (decollé1 != NULL || atterrie1 != NULL || maintenance1 != NULL)
    {
        if (decollé1 != NULL)
        {
            fprintf(decollé ,"%s %c %d %d %d %d %d %s", decollé1->pln.ID , decollé1->pln.state , decollé1->pln.date.year ,
            decollé1->pln.date.month , decollé1->pln.date.day , decollé1->pln.max_flights , decollé1->pln.assured_flights ,decollé1->pln.company) ;
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

void DelLufth(node * decollé)
{
    node *Ddecollé ;
    node *inter ;
    Ddecollé = decollé ;
    
    if(decollé->pln.state == "d")
    {
        while (Ddecollé != NULL) 
        {
            
            if (Ddecollé->pln.company = "lufthansa")
            {
                inter = Ddecollé ;
                Ddecollé = Ddecollé->next ;
                free(inter);
            }
            Ddecollé = Ddecollé->next ;
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