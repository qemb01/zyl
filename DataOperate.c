/**************************************************************************************************/
/* Copyright (C)  SSE@USTC, 2014-2015                                                             */
/*                                                                                                */
/*  FILE NAME             :  DataOperate.c                                                        */
/*  PRINCIPAL AUTHOR      :  zhuyiliang                                                           */
/*  STUDENT NUMBER        :  JG14225090                                                           */
/*  SUBSYSTEM NAME        :  DataOperate                                                          */
/*  MODULE NAME           :  DataOperate                                                          */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a DataOperate program                                        */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by zhuyiliang, 2014/09/13
 *
 */


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"DataOperate.h"

tDataNode* FindCmd(tDataNode * head, char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
        
    }
    tDataNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(p->cmd, cmd))
        {
            return p;
            break;
        }
        p = p->next;
    }
    if(p == NULL)
    {
        printf("This is a wrong cmd!\n");
    }
    return NULL;
}

int ShowAllCmd(tDataNode * head)
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf("%s - %s\n", p->cmd, p->desc);
        p = p->next;
    }
    return 0;
}
