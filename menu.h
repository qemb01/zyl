/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.h                                                               */
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
 * Created by Zhuyiliang , 2014/09/22
 *
 */
#include "linktable.h"

typedef struct DataNode
{  
    tLinkTableNode * pNext;	
    char*   cmd;
    char*   desc;
    char*   value;
    int     (*handler)();
    
} tDataNode;

/***get cmd list*************************************************************************************/
int showAllCmd(tLinkTable * head);

/***get desc by cmd**********************************************************************************/
tDataNode* getByCmd(tLinkTable * head, char * cmd);

/***get Length of the tDataNode variable***************************************************************/
int getNodeLength(tLinkTable * head);

/***translate tDataNode[] into LinkTable******************************************************************/
tLinkTable *changeToLinkTable(tDataNode *menu);


