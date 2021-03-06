/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2011

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2014-09-03
 * @file
 * @brief
 * The interface between 1X Call Control and Packet Data Service Adapter.
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef XCC_MMA_PIF_H
#define XCC_MMA_PIF_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/
#include "vos.h"


#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/

/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/
/** ****************************************************************************
 * Name        : XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16
 * Description :
 *******************************************************************************/
enum XCC_MMA_PIF_MSG_TYPE_ENUM
{
    ID_XCC_MMA_1X_CALL_STATE_IND,       /* _H2ASN_MsgChoice XCC_MMA_1X_CALL_STATE_IND_STRU*/ /**< @sa XCC_MMA_1X_CALL_STATE_IND_STRU */
    ID_XCC_MMA_PIF_MSG_TYPE_BUTT
};
typedef VOS_UINT16 XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16;

enum XCC_MMA_1X_CALL_STATE_ENUM
{
    XCC_MMA_1X_CALL_STATE_IDLE,
    XCC_MMA_1X_CALL_STATE_ORIG_CALL,
    XCC_MMA_1X_CALL_STATE_INCOMMING_CALL,
    XCC_MMA_1X_CALL_STATE_CONVERSATION,
    XCC_MMA_1X_CALL_STATE_BUTT
};
typedef VOS_UINT8 XCC_MMA_1X_CALL_STATE_ENUM_UINT8;
/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/
/** ****************************************************************************
 * Name        : XCC_MMA_1X_CALL_STATE_IND_STRU
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                          /* _H2ASN_Skip */
    XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16    enMsgId;            /* _H2ASN_Skip */
    XCC_MMA_1X_CALL_STATE_ENUM_UINT8    enCallState;
    VOS_UINT8                           aucRslv[1];
}XCC_MMA_1X_CALL_STATE_IND_STRU;

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/




/** ****************************************************************************
 * Name        : XCC_MMA_PIF_MSG_DATA
 * Description : H2ASN top level message structure definition
 *******************************************************************************/
typedef struct
{
    XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16    enMsgId;     /* _H2ASN_MsgChoice_Export XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16 */
    VOS_UINT8                           aucMsgBlock[2];

    /* _H2ASN_MsgChoice_When_Comment XCC_MMA_PIF_MSG_TYPE_ENUM_UINT16 */
}XCC_MMA_PIF_MSG_DATA;

/* _H2ASN_Length UINT32*/
/** ****************************************************************************
 * Name        : Xcc_mma_pif_MSG
 * Description : H2ASN top level message structure definition
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    XCC_MMA_PIF_MSG_DATA                stMsgData;
}Xcc_mma_pif_MSG;


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif
