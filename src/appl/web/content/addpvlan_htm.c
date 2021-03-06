/*
 * $Id: addpvlan_htm.c,v 1.6 Broadcom SDK $
 *
 * $Copyright: Copyright 2016 Broadcom Corporation.
 * This program is the proprietary software of Broadcom Corporation
 * and/or its licensors, and may only be used, duplicated, modified
 * or distributed pursuant to the terms and conditions of a separate,
 * written license agreement executed between you and Broadcom
 * (an "Authorized License").  Except as set forth in an Authorized
 * License, Broadcom grants no license (express or implied), right
 * to use, or waiver of any kind with respect to the Software, and
 * Broadcom expressly reserves all rights in and to the Software
 * and all intellectual property rights therein.  IF YOU HAVE
 * NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE
 * IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE
 * ALL USE OF THE SOFTWARE.  
 *  
 * Except as expressly set forth in the Authorized License,
 *  
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use
 * all reasonable efforts to protect the confidentiality thereof,
 * and to use this information only in connection with your use of
 * Broadcom integrated circuit products.
 *  
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS
 * PROVIDED "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
 * REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
 * OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
 * DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
 * NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
 * ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
 * OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 * 
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * BROADCOM OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL,
 * INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER
 * ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY
 * TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF
 * THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR USD 1.00,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING
 * ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.$
 *
 */

/***** GENERATED FILE; DO NOT EDIT. *****/

#include "appl/ssp.h"

static RES_CONST_DECL unsigned char CODE _text0000[] = {
    0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50,      /* <!DOCTYP */
    0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20, 0x50,      /* E HTML P */
    0x55, 0x42, 0x4c, 0x49, 0x43, 0x20, 0x22, 0x2d,      /* UBLIC "- */
    0x2f, 0x2f, 0x57, 0x33, 0x43, 0x2f, 0x2f, 0x44,      /* //W3C//D */
    0x54, 0x44, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20,      /* TD HTML  */
    0x34, 0x2e, 0x30, 0x31, 0x20, 0x54, 0x72, 0x61,      /* 4.01 Tra */
    0x6e, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61,      /* nsitiona */
    0x6c, 0x2f, 0x2f, 0x45, 0x4e, 0x22, 0x3e, 0x0a,      /* l//EN">. */
    0x3c, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x48,      /* <HTML><H */
    0x45, 0x41, 0x44, 0x3e, 0x0a, 0x3c, 0x54, 0x49,      /* EAD>.<TI */
    0x54, 0x4c, 0x45, 0x3e, 0x41, 0x64, 0x64, 0x20,      /* TLE>Add  */
    0x50, 0x56, 0x4c, 0x41, 0x4e, 0x3c, 0x2f, 0x54,      /* PVLAN</T */
    0x49, 0x54, 0x4c, 0x45, 0x3e, 0x0a, 0x3c, 0x6d,      /* ITLE>.<m */
    0x65, 0x74, 0x61, 0x20, 0x68, 0x74, 0x74, 0x70,      /* eta http */
    0x2d, 0x65, 0x71, 0x75, 0x69, 0x76, 0x3d, 0x22,      /* -equiv=" */
    0x43, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d,      /* Content- */
    0x54, 0x79, 0x70, 0x65, 0x22, 0x20, 0x63, 0x6f,      /* Type" co */
    0x6e, 0x74, 0x65, 0x6e, 0x74, 0x3d, 0x22, 0x74,      /* ntent="t */
    0x65, 0x78, 0x74, 0x2f, 0x68, 0x74, 0x6d, 0x6c,      /* ext/html */
    0x3b, 0x20, 0x63, 0x68, 0x61, 0x72, 0x73, 0x65,      /* ; charse */
    0x74, 0x3d, 0x55, 0x54, 0x46, 0x2d, 0x38, 0x22,      /* t=UTF-8" */
    0x3e, 0x20, 0x0a, 0x3c, 0x4d, 0x45, 0x54, 0x41,      /* > .<META */
    0x20, 0x68, 0x74, 0x74, 0x70, 0x2d, 0x65, 0x71,      /*  http-eq */
    0x75, 0x69, 0x76, 0x3d, 0x43, 0x6f, 0x6e, 0x74,      /* uiv=Cont */
    0x65, 0x6e, 0x74, 0x2d, 0x54, 0x79, 0x70, 0x65,      /* ent-Type */
    0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74,      /*  content */
    0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x68,      /* ="text/h */
    0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x0a, 0x3c, 0x4c,      /* tml">.<L */
    0x49, 0x4e, 0x4b, 0x20, 0x68, 0x72, 0x65, 0x66,      /* INK href */
    0x3d, 0x22, 0x66, 0x6f, 0x72, 0x6d, 0x2e, 0x63,      /* ="form.c */
    0x73, 0x73, 0x22, 0x20, 0x72, 0x65, 0x6c, 0x3d,      /* ss" rel= */
    0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65,      /* styleshe */
    0x65, 0x74, 0x3e, 0x0a, 0x3c, 0x53, 0x43, 0x52,      /* et>.<SCR */
    0x49, 0x50, 0x54, 0x20, 0x4c, 0x41, 0x4e, 0x47,      /* IPT LANG */
    0x55, 0x41, 0x47, 0x45, 0x3d, 0x22, 0x4a, 0x41,      /* UAGE="JA */
    0x56, 0x41, 0x53, 0x43, 0x52, 0x49, 0x50, 0x54,      /* VASCRIPT */
    0x22, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22,      /* " type=" */
    0x74, 0x65, 0x78, 0x74, 0x2f, 0x6a, 0x61, 0x76,      /* text/jav */
    0x61, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x22,      /* ascript" */
    0x3e, 0x0a, 0x76, 0x61, 0x72, 0x20, 0x6e, 0x75,      /* >.var nu */
    0x6d, 0x5f, 0x70, 0x6f, 0x72, 0x74, 0x73, 0x20,      /* m_ports  */
    0x3d, 0x20, 0x22,                                    /* = "      */
};

static RES_CONST_DECL unsigned char CODE _text0001[] = {
    0x22, 0x3b, 0x0a, 0x0a, 0x66, 0x75, 0x6e, 0x63,      /* ";..func */
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x76, 0x6c, 0x61,      /* tion vla */
    0x6e, 0x5f, 0x70, 0x6f, 0x72, 0x74, 0x5f, 0x63,      /* n_port_c */
    0x68, 0x65, 0x63, 0x6b, 0x28, 0x29, 0x20, 0x7b,      /* heck() { */
    0x0a, 0x09, 0x76, 0x61, 0x72, 0x20, 0x69, 0x3b,      /* ..var i; */
    0x0a, 0x09, 0x76, 0x61, 0x72, 0x20, 0x63, 0x6e,      /* ..var cn */
    0x74, 0x3b, 0x0a, 0x09, 0x0a, 0x09, 0x63, 0x6e,      /* t;....cn */
    0x74, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x09,      /* t = 0;.. */
    0x66, 0x6f, 0x72, 0x20, 0x28, 0x69, 0x20, 0x3d,      /* for (i = */
    0x20, 0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20,      /*  0; i <  */
    0x6e, 0x75, 0x6d, 0x5f, 0x70, 0x6f, 0x72, 0x74,      /* num_port */
    0x73, 0x20, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29,      /* s ; i++) */
    0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,      /*  {.      */
    0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x64,      /*    if (d */
    0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e,      /* ocument. */
    0x61, 0x64, 0x64, 0x76, 0x6c, 0x61, 0x6e, 0x2e,      /* addvlan. */
    0x70, 0x6f, 0x72, 0x74, 0x5b, 0x69, 0x5d, 0x2e,      /* port[i]. */
    0x63, 0x68, 0x65, 0x63, 0x6b, 0x65, 0x64, 0x20,      /* checked  */
    0x3d, 0x3d, 0x20, 0x74, 0x72, 0x75, 0x65, 0x29,      /* == true) */
    0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,      /*  {.      */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63,      /*        c */
    0x6e, 0x74, 0x20, 0x3d, 0x20, 0x63, 0x6e, 0x74,      /* nt = cnt */
    0x20, 0x2b, 0x20, 0x31, 0x3b, 0x0a, 0x20, 0x20,      /*  + 1;.   */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a,      /*       }. */
    0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x20, 0x20,      /*     }.   */
    0x20, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72,      /*   .    r */
    0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x6e,      /* eturn cn */
    0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x66, 0x75,      /* t;.}..fu */
    0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x64,      /* nction d */
    0x6f, 0x53, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x28,      /* oSubmit( */
    0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20,      /* ).{.     */
    0x76, 0x61, 0x72, 0x20, 0x53, 0x74, 0x72, 0x20,      /* var Str  */
    0x3d, 0x20, 0x22, 0x22, 0x3b, 0x0a, 0x20, 0x20,      /* = "";.   */
    0x20, 0x20, 0x76, 0x61, 0x72, 0x20, 0x76, 0x69,      /*   var vi */
    0x64, 0x20, 0x3d, 0x20, 0x22,                        /* d = "    */
};

static RES_CONST_DECL unsigned char CODE _text0002[] = {
    0x22, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76,      /* ";.    v */
    0x61, 0x72, 0x20, 0x69, 0x73, 0x70, 0x6f, 0x72,      /* ar ispor */
    0x74, 0x73, 0x65, 0x6c, 0x20, 0x3d, 0x20, 0x66,      /* tsel = f */
    0x61, 0x6c, 0x73, 0x65, 0x3b, 0x0a, 0x09, 0x0a,      /* alse;... */
    0x09, 0x69, 0x66, 0x20, 0x28, 0x76, 0x6c, 0x61,      /* .if (vla */
    0x6e, 0x5f, 0x70, 0x6f, 0x72, 0x74, 0x5f, 0x63,      /* n_port_c */
    0x68, 0x65, 0x63, 0x6b, 0x28, 0x29, 0x20, 0x3d,      /* heck() = */
    0x3d, 0x20, 0x30, 0x29, 0x20, 0x7b, 0x0a, 0x09,      /* = 0) {.. */
    0x09, 0x61, 0x6c, 0x65, 0x72, 0x74, 0x28, 0x22,      /* .alert(" */
    0x61, 0x74, 0x20, 0x6c, 0x65, 0x61, 0x73, 0x74,      /* at least */
    0x20, 0x6f, 0x6e, 0x65, 0x20, 0x70, 0x6f, 0x72,      /*  one por */
    0x74, 0x20, 0x69, 0x6e, 0x20, 0x61, 0x20, 0x76,      /* t in a v */
    0x6c, 0x61, 0x6e, 0x22, 0x29, 0x3b, 0x0a, 0x09,      /* lan");.. */
    0x7d, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b,      /* } else { */
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /* .        */
    0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e,      /*  documen */
    0x74, 0x2e, 0x61, 0x64, 0x64, 0x70, 0x76, 0x6c,      /* t.addpvl */
    0x61, 0x6e, 0x73, 0x75, 0x62, 0x2e, 0x76, 0x6c,      /* ansub.vl */
    0x61, 0x6e, 0x69, 0x64, 0x2e, 0x76, 0x61, 0x6c,      /* anid.val */
    0x75, 0x65, 0x20, 0x3d, 0x20, 0x76, 0x69, 0x64,      /* ue = vid */
    0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x0a, 0x20,      /* ;.    .  */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66,      /*        f */
    0x6f, 0x72, 0x20, 0x28, 0x69, 0x20, 0x3d, 0x20,      /* or (i =  */
    0x30, 0x3b, 0x20, 0x69, 0x20, 0x3c, 0x20, 0x6e,      /* 0; i < n */
    0x75, 0x6d, 0x5f, 0x70, 0x6f, 0x72, 0x74, 0x73,      /* um_ports */
    0x20, 0x3b, 0x20, 0x69, 0x2b, 0x2b, 0x29, 0x20,      /*  ; i++)  */
    0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /* {.       */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66,      /*       if */
    0x20, 0x28, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65,      /*  (docume */
    0x6e, 0x74, 0x2e, 0x61, 0x64, 0x64, 0x76, 0x6c,      /* nt.addvl */
    0x61, 0x6e, 0x2e, 0x70, 0x6f, 0x72, 0x74, 0x5b,      /* an.port[ */
    0x69, 0x5d, 0x2e, 0x63, 0x68, 0x65, 0x63, 0x6b,      /* i].check */
    0x65, 0x64, 0x20, 0x3d, 0x3d, 0x20, 0x74, 0x72,      /* ed == tr */
    0x75, 0x65, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20,      /* ue) {.   */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /*          */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x74,      /*       St */
    0x72, 0x20, 0x2b, 0x3d, 0x20, 0x22, 0x31, 0x22,      /* r += "1" */
    0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /* ;.       */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d, 0x20,      /*       }  */
    0x65, 0x6c, 0x73, 0x65, 0x20, 0x7b, 0x0a, 0x20,      /* else {.  */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /*          */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53,      /*        S */
    0x74, 0x72, 0x20, 0x2b, 0x3d, 0x20, 0x22, 0x30,      /* tr += "0 */
    0x22, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,      /* ";.      */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x7d,      /*        } */
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,      /* .        */
    0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,      /*  }.      */
    0x20, 0x20, 0x20, 0x64, 0x6f, 0x63, 0x75, 0x6d,      /*    docum */
    0x65, 0x6e, 0x74, 0x2e, 0x61, 0x64, 0x64, 0x70,      /* ent.addp */
    0x76, 0x6c, 0x61, 0x6e, 0x73, 0x75, 0x62, 0x2e,      /* vlansub. */
    0x6d, 0x65, 0x6d, 0x62, 0x65, 0x72, 0x73, 0x2e,      /* members. */
    0x76, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x3d, 0x20,      /* value =  */
    0x53, 0x74, 0x72, 0x3b, 0x0a, 0x20, 0x20, 0x20,      /* Str;.    */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x63,      /*      doc */
    0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x61, 0x64,      /* ument.ad */
    0x64, 0x70, 0x76, 0x6c, 0x61, 0x6e, 0x73, 0x75,      /* dpvlansu */
    0x62, 0x2e, 0x73, 0x75, 0x62, 0x6d, 0x69, 0x74,      /* b.submit */
    0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,      /* ();.     */
    0x7d, 0x0a, 0x7d, 0x0a, 0x66, 0x75, 0x6e, 0x63,      /* }.}.func */
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x73, 0x65, 0x74,      /* tion set */
    0x41, 0x6c, 0x6c, 0x28, 0x29, 0x0a, 0x7b, 0x0a,      /* All().{. */
    0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20,      /*     for  */
    0x28, 0x69, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20,      /* (i = 0;  */
    0x69, 0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x5f,      /* i < num_ */
    0x70, 0x6f, 0x72, 0x74, 0x73, 0x20, 0x3b, 0x20,      /* ports ;  */
    0x69, 0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x20,      /* i++) {.  */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64,      /*        d */
    0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e,      /* ocument. */
    0x61, 0x64, 0x64, 0x76, 0x6c, 0x61, 0x6e, 0x2e,      /* addvlan. */
    0x70, 0x6f, 0x72, 0x74, 0x5b, 0x69, 0x5d, 0x2e,      /* port[i]. */
    0x63, 0x68, 0x65, 0x63, 0x6b, 0x65, 0x64, 0x20,      /* checked  */
    0x3d, 0x20, 0x74, 0x72, 0x75, 0x65, 0x3b, 0x0a,      /* = true;. */
    0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x7d, 0x0a,      /*     }.}. */
    0x0a, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f,      /* .functio */
    0x6e, 0x20, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x41,      /* n clearA */
    0x6c, 0x6c, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20,      /* ll().{.  */
    0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x28,      /*    for ( */
    0x69, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x20, 0x69,      /* i = 0; i */
    0x20, 0x3c, 0x20, 0x6e, 0x75, 0x6d, 0x5f, 0x70,      /*  < num_p */
    0x6f, 0x72, 0x74, 0x73, 0x20, 0x3b, 0x20, 0x69,      /* orts ; i */
    0x2b, 0x2b, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20,      /* ++) {.   */
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f,      /*       do */
    0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x2e, 0x61,      /* cument.a */
    0x64, 0x64, 0x76, 0x6c, 0x61, 0x6e, 0x2e, 0x70,      /* ddvlan.p */
    0x6f, 0x72, 0x74, 0x5b, 0x69, 0x5d, 0x2e, 0x63,      /* ort[i].c */
    0x68, 0x65, 0x63, 0x6b, 0x65, 0x64, 0x20, 0x3d,      /* hecked = */
    0x20, 0x66, 0x61, 0x6c, 0x73, 0x65, 0x3b, 0x0a,      /*  false;. */
    0x20, 0x20, 0x20, 0x20, 0x7d, 0x0a, 0x7d, 0x0a,      /*     }.}. */
    0x3c, 0x2f, 0x53, 0x43, 0x52, 0x49, 0x50, 0x54,      /* </SCRIPT */
    0x3e, 0x0a, 0x3c, 0x2f, 0x48, 0x45, 0x41, 0x44,      /* >.</HEAD */
    0x3e, 0x0a, 0x0a, 0x3c, 0x42, 0x4f, 0x44, 0x59,      /* >..<BODY */
    0x3e, 0x0a, 0x3c, 0x48, 0x31, 0x3e, 0x56, 0x4c,      /* >.<H1>VL */
    0x41, 0x4e, 0x20, 0x53, 0x65, 0x74, 0x74, 0x69,      /* AN Setti */
    0x6e, 0x67, 0x3c, 0x2f, 0x48, 0x31, 0x3e, 0x0a,      /* ng</H1>. */
    0x3c, 0x46, 0x4f, 0x52, 0x4d, 0x20, 0x6e, 0x61,      /* <FORM na */
    0x6d, 0x65, 0x3d, 0x22, 0x61, 0x64, 0x64, 0x76,      /* me="addv */
    0x6c, 0x61, 0x6e, 0x22, 0x20, 0x61, 0x63, 0x74,      /* lan" act */
    0x69, 0x6f, 0x6e, 0x3d, 0x22, 0x61, 0x64, 0x64,      /* ion="add */
    0x70, 0x76, 0x6c, 0x61, 0x6e, 0x2e, 0x68, 0x74,      /* pvlan.ht */
    0x6d, 0x22, 0x3e, 0x0a, 0x3c, 0x49, 0x4e, 0x50,      /* m">.<INP */
    0x55, 0x54, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d,      /* UT type= */
    0x22, 0x68, 0x69, 0x64, 0x64, 0x65, 0x6e, 0x22,      /* "hidden" */
    0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x63,      /*  name="c */
    0x76, 0x69, 0x64, 0x22, 0x3e, 0x0a, 0x3c, 0x54,      /* vid">.<T */
    0x41, 0x42, 0x4c, 0x45, 0x20, 0x63, 0x65, 0x6c,      /* ABLE cel */
    0x6c, 0x73, 0x70, 0x61, 0x63, 0x69, 0x6e, 0x67,      /* lspacing */
    0x3d, 0x30, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65,      /* =0 borde */
    0x72, 0x3d, 0x31, 0x3e, 0x0a, 0x3c, 0x54, 0x42,      /* r=1>.<TB */
    0x4f, 0x44, 0x59, 0x3e, 0x0a, 0x3c, 0x54, 0x52,      /* ODY>.<TR */
    0x20, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3d, 0x63,      /*  align=c */
    0x65, 0x6e, 0x74, 0x65, 0x72, 0x3e, 0x0a, 0x09,      /* enter>.. */
    0x3c, 0x54, 0x44, 0x3e, 0x3c, 0x42, 0x3e, 0x49,      /* <TD><B>I */
    0x44, 0x3c, 0x2f, 0x42, 0x3e, 0x3c, 0x2f, 0x54,      /* D</B></T */
    0x44, 0x3e, 0x0a, 0x09, 0x3c, 0x54, 0x44, 0x3e,      /* D>..<TD> */
    0x3c, 0x42, 0x3e,                                    /* <B>      */
};

static RES_CONST_DECL unsigned char CODE _text0003[] = {
    0x3c, 0x2f, 0x42, 0x3e, 0x3c, 0x2f, 0x54, 0x44,      /* </B></TD */
    0x3e, 0x0a, 0x3c, 0x2f, 0x54, 0x52, 0x3e, 0x0a,      /* >.</TR>. */
    0x3c, 0x54, 0x52, 0x20, 0x20, 0x61, 0x6c, 0x69,      /* <TR  ali */
    0x67, 0x6e, 0x3d, 0x63, 0x65, 0x6e, 0x74, 0x65,      /* gn=cente */
    0x72, 0x3e, 0x0a, 0x09, 0x3c, 0x54, 0x44, 0x3e,      /* r>..<TD> */
    0x3c, 0x42, 0x3e, 0x50, 0x6f, 0x72, 0x74, 0x20,      /* <B>Port  */
    0x47, 0x72, 0x6f, 0x75, 0x70, 0x3c, 0x2f, 0x42,      /* Group</B */
    0x3e, 0x3c, 0x2f, 0x54, 0x44, 0x3e, 0x0a, 0x09,      /* ></TD>.. */
    0x3c, 0x54, 0x44, 0x3e, 0x0a, 0x09, 0x09, 0x3c,      /* <TD>...< */
    0x54, 0x41, 0x42, 0x4c, 0x45, 0x20, 0x62, 0x6f,      /* TABLE bo */
    0x72, 0x64, 0x65, 0x72, 0x3d, 0x27, 0x30, 0x27,      /* rder='0' */
    0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x54, 0x42, 0x4f,      /* >...<TBO */
    0x44, 0x59, 0x3e, 0x0a, 0x09, 0x09,                  /* DY>...   */
};

static RES_CONST_DECL unsigned char CODE _text0004[] = {
    0x0a, 0x09, 0x09, 0x20, 0x20, 0x3c, 0x54, 0x52,      /* ...  <TR */
    0x20, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3d, 0x63,      /*  align=c */
    0x65, 0x6e, 0x74, 0x65, 0x72, 0x3e, 0x0a, 0x09,      /* enter>.. */
    0x09, 0x20, 0x20,                                    /* .        */
};

static RES_CONST_DECL unsigned char CODE _text0005[] = {
    0x0a, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3c,      /* ...    < */
    0x54, 0x44, 0x3e, 0x3c, 0x42, 0x3e,                  /* TD><B>   */
};

static RES_CONST_DECL unsigned char CODE _text0006[] = {
    0x3c, 0x2f, 0x42, 0x3e, 0x3c, 0x2f, 0x54, 0x44,      /* </B></TD */
    0x3e, 0x0a, 0x09, 0x09, 0x20, 0x20,                  /* >...     */
};

static RES_CONST_DECL unsigned char CODE _text0007[] = {
    0x0a, 0x09, 0x09, 0x20, 0x20, 0x3c, 0x2f, 0x54,      /* ...  </T */
    0x52, 0x3e, 0x0a, 0x09, 0x09, 0x20, 0x20, 0x3c,      /* R>...  < */
    0x54, 0x52, 0x3e, 0x0a, 0x09, 0x09, 0x20, 0x20,      /* TR>...   */
};

static RES_CONST_DECL unsigned char CODE _text0008[] = {
    0x0a, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3c,      /* ...    < */
    0x54, 0x44, 0x3e, 0x3c, 0x49, 0x4e, 0x50, 0x55,      /* TD><INPU */
    0x54, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x63,      /* T type=c */
    0x68, 0x65, 0x63, 0x6b, 0x62, 0x6f, 0x78, 0x20,      /* heckbox  */
    0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x70, 0x6f, 0x72,      /* name=por */
    0x74, 0x20,                                          /* t        */
};

static RES_CONST_DECL unsigned char CODE _text0009[] = {
    0x3e, 0x3c, 0x2f, 0x54, 0x44, 0x3e, 0x0a, 0x09,      /* ></TD>.. */
    0x09, 0x20, 0x20,                                    /* .        */
};

static RES_CONST_DECL unsigned char CODE _text0010[] = {
    0x0a, 0x09, 0x09, 0x20, 0x20, 0x3c, 0x2f, 0x54,      /* ...  </T */
    0x52, 0x3e, 0x0a, 0x09, 0x09,                        /* R>...    */
};

static RES_CONST_DECL unsigned char CODE _text0011[] = {
    0x0a, 0x09, 0x09, 0x3c, 0x2f, 0x54, 0x42, 0x4f,      /* ...</TBO */
    0x44, 0x59, 0x3e, 0x0a, 0x09, 0x09, 0x3c, 0x2f,      /* DY>...</ */
    0x54, 0x41, 0x42, 0x4c, 0x45, 0x3e, 0x0a, 0x09,      /* TABLE>.. */
    0x3c, 0x2f, 0x54, 0x44, 0x3e, 0x0a, 0x3c, 0x2f,      /* </TD>.</ */
    0x54, 0x52, 0x3e, 0x0a, 0x3c, 0x2f, 0x54, 0x42,      /* TR>.</TB */
    0x4f, 0x44, 0x59, 0x3e, 0x0a, 0x3c, 0x2f, 0x54,      /* ODY>.</T */
    0x41, 0x42, 0x4c, 0x45, 0x3e, 0x0a, 0x0a, 0x3c,      /* ABLE>..< */
    0x42, 0x52, 0x3e, 0x0a, 0x0a, 0x3c, 0x54, 0x41,      /* BR>..<TA */
    0x42, 0x4c, 0x45, 0x3e, 0x0a, 0x3c, 0x54, 0x52,      /* BLE>.<TR */
    0x20, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3d, 0x63,      /*  align=c */
    0x65, 0x6e, 0x74, 0x65, 0x72, 0x3e, 0x0a, 0x3c,      /* enter>.< */
    0x54, 0x44, 0x3e, 0x3c, 0x49, 0x4e, 0x50, 0x55,      /* TD><INPU */
    0x54, 0x20, 0x54, 0x59, 0x50, 0x45, 0x3d, 0x22,      /* T TYPE=" */
    0x42, 0x55, 0x54, 0x54, 0x4f, 0x4e, 0x22, 0x20,      /* BUTTON"  */
    0x56, 0x41, 0x4c, 0x55, 0x45, 0x3d, 0x22, 0x41,      /* VALUE="A */
    0x70, 0x70, 0x6c, 0x79, 0x22, 0x20, 0x6f, 0x6e,      /* pply" on */
    0x63, 0x6c, 0x69, 0x63, 0x6b, 0x3d, 0x22, 0x64,      /* click="d */
    0x6f, 0x53, 0x75, 0x62, 0x6d, 0x69, 0x74, 0x28,      /* oSubmit( */
    0x29, 0x3b, 0x22, 0x3e, 0x3c, 0x2f, 0x54, 0x44,      /* );"></TD */
    0x3e, 0x0a, 0x3c, 0x54, 0x44, 0x3e, 0x3c, 0x49,      /* >.<TD><I */
    0x4e, 0x50, 0x55, 0x54, 0x20, 0x54, 0x59, 0x50,      /* NPUT TYP */
    0x45, 0x3d, 0x22, 0x42, 0x55, 0x54, 0x54, 0x4f,      /* E="BUTTO */
    0x4e, 0x22, 0x20, 0x56, 0x41, 0x4c, 0x55, 0x45,      /* N" VALUE */
    0x3d, 0x22, 0x53, 0x65, 0x74, 0x20, 0x41, 0x6c,      /* ="Set Al */
    0x6c, 0x22, 0x20, 0x6f, 0x6e, 0x63, 0x6c, 0x69,      /* l" oncli */
    0x63, 0x6b, 0x3d, 0x22, 0x73, 0x65, 0x74, 0x41,      /* ck="setA */
    0x6c, 0x6c, 0x28, 0x29, 0x3b, 0x22, 0x3e, 0x3c,      /* ll();">< */
    0x2f, 0x54, 0x44, 0x3e, 0x0a, 0x3c, 0x54, 0x44,      /* /TD>.<TD */
    0x3e, 0x3c, 0x49, 0x4e, 0x50, 0x55, 0x54, 0x20,      /* ><INPUT  */
    0x54, 0x59, 0x50, 0x45, 0x3d, 0x22, 0x42, 0x55,      /* TYPE="BU */
    0x54, 0x54, 0x4f, 0x4e, 0x22, 0x20, 0x56, 0x41,      /* TTON" VA */
    0x4c, 0x55, 0x45, 0x3d, 0x22, 0x43, 0x6c, 0x65,      /* LUE="Cle */
    0x61, 0x72, 0x20, 0x41, 0x6c, 0x6c, 0x22, 0x20,      /* ar All"  */
    0x6f, 0x6e, 0x63, 0x6c, 0x69, 0x63, 0x6b, 0x3d,      /* onclick= */
    0x22, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x41, 0x6c,      /* "clearAl */
    0x6c, 0x28, 0x29, 0x3b, 0x22, 0x3e, 0x3c, 0x2f,      /* l();"></ */
    0x54, 0x44, 0x3e, 0x0a, 0x3c, 0x2f, 0x54, 0x52,      /* TD>.</TR */
    0x3e, 0x0a, 0x3c, 0x2f, 0x54, 0x41, 0x42, 0x4c,      /* >.</TABL */
    0x45, 0x3e, 0x0a, 0x3c, 0x2f, 0x46, 0x4f, 0x52,      /* E>.</FOR */
    0x4d, 0x3e, 0x0a, 0x0a, 0x3c, 0x46, 0x4f, 0x52,      /* M>..<FOR */
    0x4d, 0x20, 0x4e, 0x41, 0x4d, 0x45, 0x3d, 0x22,      /* M NAME=" */
    0x61, 0x64, 0x64, 0x70, 0x76, 0x6c, 0x61, 0x6e,      /* addpvlan */
    0x73, 0x75, 0x62, 0x22, 0x20, 0x4d, 0x45, 0x54,      /* sub" MET */
    0x48, 0x4f, 0x44, 0x3d, 0x22, 0x47, 0x45, 0x54,      /* HOD="GET */
    0x22, 0x20, 0x41, 0x43, 0x54, 0x49, 0x4f, 0x4e,      /* " ACTION */
    0x3d, 0x22, 0x61, 0x64, 0x64, 0x70, 0x76, 0x6c,      /* ="addpvl */
    0x61, 0x6e, 0x2e, 0x63, 0x67, 0x69, 0x22, 0x3e,      /* an.cgi"> */
    0x0a, 0x3c, 0x49, 0x4e, 0x50, 0x55, 0x54, 0x20,      /* .<INPUT  */
    0x54, 0x59, 0x50, 0x45, 0x3d, 0x22, 0x48, 0x49,      /* TYPE="HI */
    0x44, 0x44, 0x45, 0x4e, 0x22, 0x20, 0x4e, 0x41,      /* DDEN" NA */
    0x4d, 0x45, 0x3d, 0x22, 0x76, 0x6c, 0x61, 0x6e,      /* ME="vlan */
    0x69, 0x64, 0x22, 0x3e, 0x0a, 0x3c, 0x49, 0x4e,      /* id">.<IN */
    0x50, 0x55, 0x54, 0x20, 0x54, 0x59, 0x50, 0x45,      /* PUT TYPE */
    0x3d, 0x22, 0x48, 0x49, 0x44, 0x44, 0x45, 0x4e,      /* ="HIDDEN */
    0x22, 0x20, 0x4e, 0x41, 0x4d, 0x45, 0x3d, 0x22,      /* " NAME=" */
    0x64, 0x65, 0x73, 0x63, 0x72, 0x22, 0x3e, 0x0a,      /* descr">. */
    0x3c, 0x49, 0x4e, 0x50, 0x55, 0x54, 0x20, 0x54,      /* <INPUT T */
    0x59, 0x50, 0x45, 0x3d, 0x22, 0x48, 0x49, 0x44,      /* YPE="HID */
    0x44, 0x45, 0x4e, 0x22, 0x20, 0x4e, 0x41, 0x4d,      /* DEN" NAM */
    0x45, 0x3d, 0x22, 0x6d, 0x65, 0x6d, 0x62, 0x65,      /* E="membe */
    0x72, 0x73, 0x22, 0x3e, 0x0a, 0x3c, 0x2f, 0x46,      /* rs">.</F */
    0x4f, 0x52, 0x4d, 0x3e, 0x0a, 0x3c, 0x2f, 0x42,      /* ORM>.</B */
    0x4f, 0x44, 0x59, 0x3e, 0x0a, 0x3c, 0x2f, 0x48,      /* ODY>.</H */
    0x54, 0x4d, 0x4c, 0x3e, 0x0a, 0x0a,                  /* TML>..   */
};

#include "sspmacro_pvlan.h"
void sspvar_ports_tag_portcount(SSPTAG_PARAM *params, SSPVAR_RET *ret, SSP_PSMH psmem) REENTRANT;
void sspvar_pvlan_tag_set(SSPTAG_PARAM *params, SSPVAR_RET *ret, SSP_PSMH psmem) REENTRANT;
SSPLOOP_RETVAL ssploop_pvlan_tag_ports_rows(SSPTAG_PARAM *params, SSPLOOP_INDEX index, SSP_PSMH psmem) REENTRANT;
SSPLOOP_RETVAL ssploop_pvlan_tag_ports_per_row(SSPTAG_PARAM *params, SSPLOOP_INDEX index, SSP_PSMH psmem) REENTRANT;

RES_CONST_DECL SSP_DATA_ENTRY CODE sspfile_addpvlan_htm[] = {
    { 0x00, 0, 331, 0, 0, _text0000 },
    { 0x02, 0, 0, 0, 0, sspvar_ports_tag_portcount },
    { 0x00, 0, 277, 0, 0, _text0001 },
    { 0x02, 0, SSPMACRO_PVLAN_CUR_VID_NUM, 0, 0, sspvar_pvlan_tag_set },
    { 0x00, 0, 915, 0, 0, _text0002 },
    { 0x02, 0, SSPMACRO_PVLAN_CUR_VID, 0, 0, sspvar_pvlan_tag_set },
    { 0x00, 0, 102, 0, 0, _text0003 },
    { 0x01, 14, 0, 0, 0, ssploop_pvlan_tag_ports_rows },
    { 0x00, 0, 27, 0, 0, _text0004 },
    { 0x01, 4, 0, 0, 0, ssploop_pvlan_tag_ports_per_row },
    { 0x00, 0, 14, 0, 0, _text0005 },
    { 0x62, 0, SSPMACRO_PVLAN_PORT_ID, 0, 1, sspvar_pvlan_tag_set },
    { 0x00, 0, 14, 0, 0, _text0006 },
    { 0x01, 4, 0, 0, 0, NULL },
    { 0x00, 0, 24, 0, 0, _text0007 },
    { 0x01, 4, 0, 0, 0, ssploop_pvlan_tag_ports_per_row },
    { 0x00, 0, 42, 0, 0, _text0008 },
    { 0x62, 0, SSPMACRO_PVLAN_MEMBER, 0, 1, sspvar_pvlan_tag_set },
    { 0x00, 0, 11, 0, 0, _text0009 },
    { 0x01, 4, 0, 0, 0, NULL },
    { 0x00, 0, 13, 0, 0, _text0010 },
    { 0x01, 14, 0, 0, 0, NULL },
    { 0x80, 0, 510, 0, 0, _text0011 },
};
