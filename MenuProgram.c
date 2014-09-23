/**************************************************************************************************/
/* Copyright (C)  SSE@USTC, 2014-2015                                                             */
/*                                                                                                */
/*  FILE NAME             :  MenuProgram.c                                                        */
/*  PRINCIPAL AUTHOR      :  zhuyiliang                                                           */
/*  STUDENT NUMBER        :  JG14225090                                                           */
/*  SUBSYSTEM NAME        :  MenuProgram                                                          */
/*  MODULE NAME           :  MenuProgram                                                          */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a MenuProgram program                                        */
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

int Help()
{
    ShowAllCmd(head);
    return 0;
}
