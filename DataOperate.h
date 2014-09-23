/**************************************************************************************************/
/* Copyright (C)  SSE@USTC, 2014-2015                                                             */
/*                                                                                                */
/*  FILE NAME             :  DataOperate.h                                                        */
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
 * Created by zhuyiliang, 2014/09/22
 *
 */


/* data struct and its operations */

typedef struct DataNode
{
    char*  cmd;
    char*  desc;
    int    (*handler)();
    struct DataNode *next;
} tDataNode;

tDataNode* FindCmd(tDataNode * head, char * cmd);

int ShowAllCmd(tDataNode * head);
