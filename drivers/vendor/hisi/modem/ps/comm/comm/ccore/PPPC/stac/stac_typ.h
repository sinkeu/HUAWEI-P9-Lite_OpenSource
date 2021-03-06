

#if( VRP_MODULE_STAC == VRP_YES )

#ifndef		_STAC_TYP_H_
#define		_STAC_TYP_H_

#ifdef	__cplusplus
extern "C"{
#endif

/***************************************************************************/
typedef struct tagStacHashMatch
{
    VOS_UINT16    m_usLength;                        /*length of match*/
    VOS_UINT16    m_usOffset;					     /*offset of match*/
    UCHAR     ucStacHashMatchRev[4];             /*保留字段*/
} STAC_HASH_MATCH_S;
/***************************************************************************/
/*hash表局部的结构*/

typedef struct tagStacHashMinList
{
    struct tagStacHashMinNode * pstHash_Head;         /*          hash的索引表             */
}STAC_HASH_MINLIST_S;

typedef struct tagStacHashMinNode 
{
	VOS_UINT16  m_usSucc;				   /*           hash表节点的前驱          */
    VOS_UINT16  m_usPred;				   /*           hash表节点的后继          */
    UCHAR   ucStacHashMinNodeRev[4];             /*保留字段*/
}STAC_HASN_MINNODE_S;

typedef struct tagStacHashNode
{  

	struct tagStacHashMinNode  stHash_Node;            /* Node linkage monkey stuff.           */
	VOS_UINT16 usHistoryBuf_Offset;          /* Offset in stream of node's data.     */
    UCHAR  ucStacHashNodeRev[6];                /*保留字段*/
    
}STAC_HASH_HASHNODE_S;

typedef struct tagStacHashTable
{
    STAC_HASH_MINLIST_S  * pstHashTable_Lists;			/* Array of lists of hash nodes.        */
    struct tagStacHashNode * pstHashTable_Nodes;  /* Array of all hash nodes.             */
    VOS_UINT32             usHashTable_NodeCount;     /* Total number of nodes in pstHashTable_Nodes.   */
    VOS_UINT32             ulHashTable_NextNode;      /* Next node index to re-use.           */
    UCHAR             ucHashTable_Recycled;      /* Cycled flag                          */
    UCHAR             ucStacHashTableRev[7];     /*保留字段*/
}STAC_HASH_TABLE_S;


/***************************************************************************/

#ifdef	__cplusplus
}
#endif	/* end of __cplusplus */

#endif

#endif	/*end of the *.h file*/
