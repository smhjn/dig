/*
    libdtw is derived from the UCR Suite.  The original license is below.
 */
    
/***********************************************************************/
/************************* DISCLAIMER **********************************/
/***********************************************************************/
/** This UCR Suite software is copyright protected © 2012 by          **/
/** Thanawin Rakthanmanon, Bilson Campana, Abdullah Mueen,            **/
/** Gustavo Batista and Eamonn Keogh.                                 **/
/**                                                                   **/
/** Unless stated otherwise, all software is provided free of charge. **/
/** As well, all software is provided on an "as is" basis without     **/
/** warranty of any kind, express or implied. Under no circumstances  **/
/** and under no legal theory, whether in tort, contract,or otherwise,**/
/** shall Thanawin Rakthanmanon, Bilson Campana, Abdullah Mueen,      **/
/** Gustavo Batista, or Eamonn Keogh be liable to you or to any other **/
/** person for any indirect, special, incidental, or consequential    **/
/** damages of any character including, without limitation, damages   **/
/** for loss of goodwill, work stoppage, computer failure or          **/
/** malfunction, or for any and all other damages or losses.          **/
/**                                                                   **/
/** If you do not agree with these terms, then you you are advised to **/
/** not use this software.                                            **/
/***********************************************************************/
/***********************************************************************/

#ifndef edtw_deque_h
#define edtw_deque_h

#include "type_defs.h"

typedef tick_t deq_data;	// type of data this deque stores

#ifdef __cplusplus
extern "C" {
#endif

/// Data structure (circular array) for finding minimum and maximum for LB_Keogh envolop
typedef struct deque {
	deq_data *dq;
    length_t size, capacity;
    idx_t f, r;
} deque;

void deq_new(deque *d, length_t capacity);
void deq_free(deque *d);

void deq_push_back(deque *d, deq_data v);
void deq_pop_front(deque *d);
void deq_pop_back(deque *d);

deq_data deq_front(deque *d);
deq_data deq_back(deque *d);
short int deq_empty(deque *d);

void deq_clear(deque *d);
	
#ifdef __cplusplus
}
#endif


#endif