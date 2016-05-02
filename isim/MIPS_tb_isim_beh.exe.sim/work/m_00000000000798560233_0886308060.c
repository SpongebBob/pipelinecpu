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

/* This file is designed for use with ISim build 0x36e8438f */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Documents and Settings/P6/p6xin/P6/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {13U, 0U};
static unsigned int ng6[] = {1U, 0U, 0U, 0U};
static unsigned int ng7[] = {14U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {16, 0};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {10U, 0U};
static unsigned int ng18[] = {11U, 0U};
static unsigned int ng19[] = {12U, 0U};



static void Cont_33_0(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 2448);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t5, 0, 32);
    t10 = (t0 + 2388);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 2484);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t5, 0, 32);
    t10 = (t0 + 2396);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_40_2(char *t0)
{
    char t7[16];
    char t9[8];
    char t17[16];
    char t21[8];
    char t29[16];
    char t32[8];
    char t56[8];
    char t57[8];
    char t58[8];
    char t59[8];
    char t67[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;

LAB0:    t1 = (t0 + 2192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2404);
    *((int *)t2) = 1;
    t3 = (t0 + 2220);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB38:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t9, 1, t5, 32);
    t18 = (t0 + 784U);
    t19 = *((char **)t18);
    t18 = (t0 + 784U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_add(t29, 33, t7, 33, t17, 33);
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 8);
    t18 = (t5 + 12);
    t11 = *((unsigned int *)t10);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t19 = (t0 + 1288);
    t20 = (t19 + 36U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t9 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB40;

LAB39:    if (t44 != 0)
        goto LAB41;

LAB42:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB37;

LAB9:    xsi_set_current_line(55, ng0);

LAB46:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlogtype_concat(t7, 33, 33, 2U, t9, 1, t5, 32);
    t18 = (t0 + 784U);
    t19 = *((char **)t18);
    t18 = (t0 + 784U);
    t20 = *((char **)t18);
    memset(t21, 0, 8);
    t18 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlogtype_concat(t17, 33, 33, 2U, t21, 1, t19, 32);
    xsi_vlog_unsigned_minus(t29, 33, t7, 33, t17, 33);
    t30 = (t0 + 1288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 33);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t5 + 8);
    t18 = (t5 + 12);
    t11 = *((unsigned int *)t10);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t18);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t19 = (t0 + 1288);
    t20 = (t19 + 36U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t30 = (t21 + 4);
    t31 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t31);
    t27 = (t26 >> 31);
    t28 = (t27 & 1);
    *((unsigned int *)t30) = t28;
    memset(t32, 0, 8);
    t33 = (t9 + 4);
    t34 = (t21 + 4);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t21);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB48;

LAB47:    if (t44 != 0)
        goto LAB49;

LAB50:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB37;

LAB11:    xsi_set_current_line(62, ng0);

LAB54:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t5, 32, t8, 32);
    t4 = (t9 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB57:    goto LAB37;

LAB13:    xsi_set_current_line(67, ng0);

LAB58:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t0 + 968U);
    t8 = *((char **)t4);
    xsi_vlog_signed_less(t7, 33, t5, 33, t8, 33);
    t4 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB61:    goto LAB37;

LAB15:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_and(t9, 32, t5, 32, t8, 32);
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    goto LAB37;

LAB17:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_or(t9, 32, t5, 32, t8, 32);
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    goto LAB37;

LAB19:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_bit_xor(t9, 32, t5, 32, t8, 32);
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    goto LAB37;

LAB21:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng12)));
    memset(t9, 0, 8);
    xsi_vlog_signed_lshift(t9, 32, t5, 32, t4, 32);
    t8 = (t0 + 1196);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB37;

LAB23:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t8 = *((char **)t4);
    memset(t21, 0, 8);
    xsi_vlog_signed_bit_or(t21, 32, t5, 32, t8, 32);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t21 + 4);
    memcpy(t9, t21, 8);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t12 | t13);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    goto LAB37;

LAB25:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 6);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t21, 0, 8);
    xsi_vlog_signed_lshift(t21, 32, t5, 32, t9, 5);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 32);
    goto LAB37;

LAB27:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 6);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 6);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t21, 0, 8);
    xsi_vlog_signed_rshift(t21, 32, t5, 32, t9, 5);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 32);
    goto LAB37;

LAB29:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t32) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    memset(t21, 0, 8);
    t10 = (t32 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t10) != 0)
        goto LAB64;

LAB65:    t19 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t19);
    t36 = (t28 || t35);
    if (t36 > 0)
        goto LAB66;

LAB67:    t63 = *((unsigned int *)t21);
    t64 = (~(t63));
    t65 = *((unsigned int *)t19);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t19) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t21) > 0)
        goto LAB72;

LAB73:    memcpy(t9, t76, 8);

LAB74:    t77 = (t0 + 1196);
    xsi_vlogvar_assign_value(t77, t9, 0, 0, 32);
    goto LAB37;

LAB31:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t21, 0, 8);
    xsi_vlog_signed_lshift(t21, 32, t5, 32, t9, 5);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 32);
    goto LAB37;

LAB33:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 31U);
    memset(t21, 0, 8);
    xsi_vlog_signed_rshift(t21, 32, t5, 32, t9, 5);
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 32);
    goto LAB37;

LAB35:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t32) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t4) = t16;
    memset(t21, 0, 8);
    t10 = (t32 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (~(t23));
    t25 = *((unsigned int *)t32);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t10) != 0)
        goto LAB77;

LAB78:    t19 = (t21 + 4);
    t28 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t19);
    t36 = (t28 || t35);
    if (t36 > 0)
        goto LAB79;

LAB80:    t63 = *((unsigned int *)t21);
    t64 = (~(t63));
    t65 = *((unsigned int *)t19);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t19) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t21) > 0)
        goto LAB85;

LAB86:    memcpy(t9, t76, 8);

LAB87:    t77 = (t0 + 1196);
    xsi_vlogvar_assign_value(t77, t9, 0, 0, 32);
    goto LAB37;

LAB40:    *((unsigned int *)t32) = 1;
    goto LAB42;

LAB41:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(52, ng0);
    t54 = ((char*)((ng4)));
    t55 = (t0 + 1380);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    goto LAB45;

LAB48:    *((unsigned int *)t32) = 1;
    goto LAB50;

LAB49:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(59, ng0);
    t54 = ((char*)((ng4)));
    t55 = (t0 + 1380);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    goto LAB53;

LAB55:    xsi_set_current_line(63, ng0);
    t10 = ((char*)((ng6)));
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 32);
    goto LAB57;

LAB59:    xsi_set_current_line(68, ng0);
    t10 = ((char*)((ng6)));
    t18 = (t0 + 1196);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 32);
    goto LAB61;

LAB62:    *((unsigned int *)t21) = 1;
    goto LAB65;

LAB64:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB65;

LAB66:    t20 = (t0 + 784U);
    t22 = *((char **)t20);
    memset(t57, 0, 8);
    t20 = (t57 + 4);
    t30 = (t22 + 4);
    memcpy(t57, t22, 8);
    t37 = *((unsigned int *)t57);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t38 | t39);
    *((unsigned int *)t57) = t40;
    t41 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t41 & 4294967295U);
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & 4294967295U);
    t31 = (t0 + 692U);
    t33 = *((char **)t31);
    memset(t58, 0, 8);
    t31 = (t58 + 4);
    t34 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = (t43 >> 6);
    *((unsigned int *)t58) = t44;
    t45 = *((unsigned int *)t34);
    t46 = (t45 >> 6);
    *((unsigned int *)t31) = t46;
    t49 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t49 & 31U);
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & 31U);
    memset(t59, 0, 8);
    xsi_vlog_signed_rshift(t59, 32, t57, 32, t58, 5);
    memset(t56, 0, 8);
    t47 = (t56 + 4);
    t48 = (t59 + 4);
    memcpy(t56, t59, 8);
    t51 = *((unsigned int *)t56);
    t52 = (~(t51));
    t53 = *((unsigned int *)t47);
    t60 = (t52 | t53);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & 4294967295U);
    t62 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t62 & 4294967295U);
    goto LAB67;

LAB68:    t54 = (t0 + 784U);
    t55 = *((char **)t54);
    t54 = (t0 + 692U);
    t68 = *((char **)t54);
    memset(t67, 0, 8);
    t54 = (t67 + 4);
    t69 = (t68 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (t70 >> 6);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 6);
    *((unsigned int *)t54) = t73;
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & 31U);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & 31U);
    memset(t76, 0, 8);
    xsi_vlog_signed_rshift(t76, 32, t55, 32, t67, 5);
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t9, 32, t56, 32, t76, 32);
    goto LAB74;

LAB72:    memcpy(t9, t56, 8);
    goto LAB74;

LAB75:    *((unsigned int *)t21) = 1;
    goto LAB78;

LAB77:    t18 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB78;

LAB79:    t20 = (t0 + 784U);
    t22 = *((char **)t20);
    memset(t57, 0, 8);
    t20 = (t57 + 4);
    t30 = (t22 + 4);
    memcpy(t57, t22, 8);
    t37 = *((unsigned int *)t57);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t38 | t39);
    *((unsigned int *)t57) = t40;
    t41 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t41 & 4294967295U);
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & 4294967295U);
    t31 = (t0 + 692U);
    t33 = *((char **)t31);
    memset(t58, 0, 8);
    t31 = (t58 + 4);
    t34 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = (t43 >> 0);
    *((unsigned int *)t58) = t44;
    t45 = *((unsigned int *)t34);
    t46 = (t45 >> 0);
    *((unsigned int *)t31) = t46;
    t49 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t49 & 31U);
    t50 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t50 & 31U);
    memset(t59, 0, 8);
    xsi_vlog_signed_rshift(t59, 32, t57, 32, t58, 5);
    memset(t56, 0, 8);
    t47 = (t56 + 4);
    t48 = (t59 + 4);
    memcpy(t56, t59, 8);
    t51 = *((unsigned int *)t56);
    t52 = (~(t51));
    t53 = *((unsigned int *)t47);
    t60 = (t52 | t53);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & 4294967295U);
    t62 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t62 & 4294967295U);
    goto LAB80;

LAB81:    t54 = (t0 + 784U);
    t55 = *((char **)t54);
    t54 = (t0 + 692U);
    t68 = *((char **)t54);
    memset(t67, 0, 8);
    t54 = (t67 + 4);
    t69 = (t68 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (t70 >> 0);
    *((unsigned int *)t67) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 0);
    *((unsigned int *)t54) = t73;
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t74 & 31U);
    t75 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t75 & 31U);
    memset(t76, 0, 8);
    xsi_vlog_signed_rshift(t76, 32, t55, 32, t67, 5);
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t9, 32, t56, 32, t76, 32);
    goto LAB87;

LAB85:    memcpy(t9, t56, 8);
    goto LAB87;

}


extern void work_m_00000000000798560233_0886308060_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000000798560233_0886308060", "isim/MIPS_tb_isim_beh.exe.sim/work/m_00000000000798560233_0886308060.didat");
	xsi_register_executes(pe);
}
