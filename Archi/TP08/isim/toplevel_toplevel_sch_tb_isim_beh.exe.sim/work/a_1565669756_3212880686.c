/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x141a37e9 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/l2/houplon/Documents/Archi/TP/TP08/x7seg.vhd";



static void work_a_1565669756_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    int t44;
    char *t45;
    int t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 1424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 3052);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB21:    t6 = (t0 + 3056);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB22:    t9 = (t0 + 3060);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB23:    t12 = (t0 + 3064);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB24:    t15 = (t0 + 3068);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB25:    t18 = (t0 + 3072);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB26:    t21 = (t0 + 3076);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB27:    t24 = (t0 + 3080);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB28:    t27 = (t0 + 3084);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB29:    t30 = (t0 + 3088);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB14;

LAB30:    t33 = (t0 + 3092);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB15;

LAB31:    t36 = (t0 + 3096);
    t38 = xsi_mem_cmp(t36, t3, 4U);
    if (t38 == 1)
        goto LAB16;

LAB32:    t39 = (t0 + 3100);
    t41 = xsi_mem_cmp(t39, t3, 4U);
    if (t41 == 1)
        goto LAB17;

LAB33:    t42 = (t0 + 3104);
    t44 = xsi_mem_cmp(t42, t3, 4U);
    if (t44 == 1)
        goto LAB18;

LAB34:    t45 = (t0 + 3108);
    t47 = xsi_mem_cmp(t45, t3, 4U);
    if (t47 == 1)
        goto LAB19;

LAB35:
LAB20:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3217);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(41, ng0);

LAB39:    t2 = (t0 + 1740);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB40;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng0);
    t48 = (t0 + 3112);
    t50 = (t0 + 1784);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 32U);
    t54 = *((char **)t53);
    memcpy(t54, t48, 7U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB4;

LAB6:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3119);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3126);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB8:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3133);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB9:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3140);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB10:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3147);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3154);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3161);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB13:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3168);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3175);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB15:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3182);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB16:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3189);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB17:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3196);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3203);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB19:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3210);
    t4 = (t0 + 1784);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB4;

LAB36:;
LAB37:    t3 = (t0 + 1740);
    *((int *)t3) = 0;
    goto LAB2;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

}

static void work_a_1565669756_3212880686_p_1(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 3224);
    t3 = (t0 + 1820);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1565669756_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1565669756_3212880686_p_0,(void *)work_a_1565669756_3212880686_p_1};
	xsi_register_didat("work_a_1565669756_3212880686", "isim/toplevel_toplevel_sch_tb_isim_beh.exe.sim/work/a_1565669756_3212880686.didat");
	xsi_register_executes(pe);
}
