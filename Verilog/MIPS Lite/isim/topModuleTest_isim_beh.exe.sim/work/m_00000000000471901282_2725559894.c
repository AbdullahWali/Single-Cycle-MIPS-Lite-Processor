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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Google Drive/Bilkent/Semester IV/CS224/Labs/Lab 3/Verilog/Lab3/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {1, 0};
static int ng8[] = {0, 0};



static void Always_10_0(char *t0)
{
    char t9[8];
    char t22[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1968);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(12, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t8 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 4294967295U);
    if (t14 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB25:    t16 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB26;

LAB27:    memcpy(t29, t9, 8);

LAB28:    t61 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t61, t29, 0, 0, 32, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 4294967295U);
    if (t14 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t3) != 0)
        goto LAB38;

LAB39:    t8 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = (!(t17));
    t19 = *((unsigned int *)t8);
    t23 = (t18 || t19);
    if (t23 > 0)
        goto LAB40;

LAB41:    memcpy(t29, t9, 8);

LAB42:    t43 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t43, t29, 0, 0, 32, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t9, 0, 0, 32, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(17, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB51;

LAB50:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB52;

LAB53:    t16 = (t9 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB57:    goto LAB21;

LAB22:    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB24:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    t20 = (t0 + 692U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t21 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 & 4294967295U);
    if (t27 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t20) != 0)
        goto LAB31;

LAB32:    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t22);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t33 = (t9 + 4);
    t34 = (t22 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t22) = 1;
    goto LAB32;

LAB31:    t28 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB32;

LAB33:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t9 + 4);
    t44 = (t22 + 4);
    t45 = *((unsigned int *)t9);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t22);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t55);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t56);
    goto LAB35;

LAB36:    *((unsigned int *)t9) = 1;
    goto LAB39;

LAB38:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    memset(t22, 0, 8);
    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t30 = (t27 & 4294967295U);
    if (t30 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t15) != 0)
        goto LAB45;

LAB46:    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t22);
    t36 = (t31 | t32);
    *((unsigned int *)t29) = t36;
    t21 = (t9 + 4);
    t28 = (t22 + 4);
    t33 = (t29 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t28);
    t39 = (t37 | t38);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t33);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB42;

LAB43:    *((unsigned int *)t22) = 1;
    goto LAB46;

LAB45:    t20 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB46;

LAB47:    t42 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t33);
    *((unsigned int *)t29) = (t42 | t45);
    t34 = (t9 + 4);
    t35 = (t22 + 4);
    t46 = *((unsigned int *)t34);
    t47 = (~(t46));
    t48 = *((unsigned int *)t9);
    t53 = (t48 & t47);
    t49 = *((unsigned int *)t35);
    t50 = (~(t49));
    t51 = *((unsigned int *)t22);
    t54 = (t51 & t50);
    t52 = (~(t53));
    t55 = (~(t54));
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t52);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t55);
    goto LAB49;

LAB51:    t15 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(17, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    goto LAB57;

}

static void Always_21_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1976);
    *((int *)t2) = 1;
    t3 = (t0 + 1800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB5:    if (t20 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;

LAB8:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB2;

LAB7:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(22, ng0);
    t30 = ((char*)((ng7)));
    t31 = (t0 + 1104);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB11;

}


extern void work_m_00000000000471901282_2725559894_init()
{
	static char *pe[] = {(void *)Always_10_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000000471901282_2725559894", "isim/topModuleTest_isim_beh.exe.sim/work/m_00000000000471901282_2725559894.didat");
	xsi_register_executes(pe);
}
