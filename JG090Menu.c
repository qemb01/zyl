/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  JG090menu.c                                                          */
/*  PRINCIPAL AUTHOR      :  Zhuyiliang                                                           */
/*  SUBSYSTEM NAME        :  Menu                                                                 */
/*  MODULE NAME           :  Menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a menu program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Zhuyiliang   , 2014/09/22
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "linktable.h"

#define CMD_MAX_LEN 128

tLinkTable *Node;

int getHelp()
{
    showAllCmd(Node);
    return 1;
}

/***translate char* variable into int variable ************************************************************/
int StringToInt(const char *s)
{   
    int n = 0;   
    int i = 0;   
    while (s[i] != '\0')    
    {        
        n *= 10;        
        n += s[i] - '0';
        i++;    
    }    
    return n;
}

tDataNode menu[] =
{
    {NULL,"help", "this is help!","help you find cmd", getHelp},
    {NULL,"version", "menu's version.", "zhuyiliang_v1", NULL},
   
   
};


main()
{
   /* cmd line begins */  
    Node=changeToLinkTable(menu);
    printf("Hint: Please Input a cmd, and exit by input 'exit'\n");
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        tDataNode *p;
        printf("menu> ");
        scanf("%s", cmd);
        if(cmd == NULL) 
        {
            printf("This is a wrong cmd\n");
            continue;
        }
        if(!strcmp(cmd, "exit")) 
        {
            return 0;
        }
        p=getByCmd(Node,cmd); 
        if(p!=NULL)
        {
            printf("%s - %s - %s\n", p->cmd, p->desc, p->value);
            if(p->handler != NULL)
            {
                p->handler();
            } 
        }
	else
        {
            printf("This is a wrong cmd\n");
            continue;
        }
    }
}


