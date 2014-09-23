/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.c                                                               */
/*  PRINCIPAL AUTHOR      :  Zhuyiliang                                                           */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a the method's set of menu program                           */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Zhuyiliang, 2014/09/22
 *
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include "menu.h"
 #include "linktable.h"

/***get cmd list**************************************************************************************/
int showAllCmd(tLinkTable * head)
{
    printf("cmd list:\n");
    tDataNode * pNode = (tDataNode*)GetLinkTableHead(head);
    while(pNode != NULL)
    {
        printf("%s - %s\n", pNode->cmd, pNode->desc);
        pNode = (tDataNode*)GetNextLinkTableNode(head,(tLinkTableNode *)pNode);
    }
    return 0;
}

/***get desc by cmd**********************************************************************************/
tDataNode* getByCmd(tLinkTable * head, char * cmd)
{
    tDataNode * pNode = (tDataNode*)GetLinkTableHead(head);
    while(pNode != NULL)
    {
        if(!strcmp(pNode->cmd, cmd))
        {
            return  pNode;  
        }
        pNode = (tDataNode*)GetNextLinkTableNode(head,(tLinkTableNode *)pNode);
    }
    return NULL;
}

/***get Length of the tDataNode variable******************************************************************/
int getNodeLength(tLinkTable * head)
{
    tDataNode * pNode = (tDataNode*)GetLinkTableHead(head);
    int len=0;
    while(pNode != NULL)
    {
        len++;
        pNode = (tDataNode*)GetNextLinkTableNode(head,(tLinkTableNode *)pNode);
    }
    return len;
}


/***translate tDataNode[] into LinkTable******************************************************************/
tLinkTable *changeToLinkTable(tDataNode *menu)
{
    tLinkTable * head = CreateLinkTable();
    int i=0;
    for(i=0;i<2;i++)
    {
        AddLinkTableNode(head,(tLinkTableNode *)&menu[i]);
    }
    return head;
}
