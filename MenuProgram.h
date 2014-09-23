/**************************************************************************************************/
/* Copyright (C)  SSE@USTC, 2014-2015                                                             */
/*                                                                                                */
/*  FILE NAME             :  MenuProgram.h                                                        */
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


/* menu program */

int Help();

static tDataNode head[] = 
{
    {"help", "this is help cmd!", Help, &head[1]},
    {"version", "menu program v1.0", NULL, NULL}
};

