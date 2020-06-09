#ifndef _PSTAT_H_ 
#define _PSTAT_H_ 
#include "param.h" 

struct pstat{
    int inuse[NPROC];
    int tickets[NPROC]; 
    int pid[NPROC];     
    int ticks[NPROC];   
    int stride[NPROC];
    int passValue[NPROC];
 };
 
 #endif // _PSTAT_H_
