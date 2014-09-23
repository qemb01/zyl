/**************************************************************************************************/
/* Copyright (C)  SSE@USTC, 2014-2015                                                             */
/*                                                                                                */
/*  FILE NAME             :  JG090Main.c                                                          */
/*  PRINCIPAL AUTHOR      :  zhuyiliang                                                           */
/*  STUDENT NUMBER        :  JG14225090                                                           */
/*  SUBSYSTEM NAME        :  JG090Main                                                            */
/*  MODULE NAME           :  DataOperate                                                          */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a Main program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by zhuyiliang, 2014/09/22
 *
 */

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "DataOperate.h"
#include "MenuProgram.h"

#define CMD_MAX_LEN 128


void main()
{
    /* cmd line begins */
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd > ");
        scanf("%s", cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("This is a wrong cmd!\n");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}
