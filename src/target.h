/*
** Copyright (C) 2002, 2003, 2004, 2005, 2006 Christophe Kalt
**
** This file is part of shmux
** see the LICENSE file for details on your rights.
**
** $Id$
*/

#if !defined(_TARGET_H_)
# define _TARGET_H_

void target_default(char *);
int target_add(char *);
int target_getmax(void);
int target_setbyname(char *);
int target_setbyhname(char *);
int target_setbynum(u_int);
char *target_getname(void);
int target_getnum(void);
char **target_getcmd(char *);
int target_next(int);
void target_start(void);
void target_result(int);
int target_pong(char *);
void target_cmdstatus(int);
void target_status(int);
void target_results(int);

#define CMD_FAILURE	-2
#define CMD_TIMEOUT	-1
#define CMD_SUCCESS	 1
#define CMD_ERROR	 2

#define STATUS_ALL	0xFF
#define STATUS_PENDING	0x01
#define STATUS_ACTIVE	0x02
#define STATUS_FAILED	0x10
#define STATUS_ERROR	0x20
#define STATUS_SUCCESS	0x40

#endif
