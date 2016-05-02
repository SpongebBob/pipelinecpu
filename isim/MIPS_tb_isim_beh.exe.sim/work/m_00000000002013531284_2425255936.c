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
static const char *ng0 = "C:/Documents and Settings/P6/p6xin/P6/MULTDIV.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {0, 0};
static int ng4[] = {5, 0};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {10, 0};
static int ng8[] = {31, 0};
static int ng9[] = {63, 0};
static int ng10[] = {32, 0};
static int ng11[] = {3, 0};



static void Initial_50_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(51, ng0);

LAB2:    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_59_1(char *t0)
{
    char t13[8];
    char t35[16];
    char t36[16];
    char t37[16];
    char t38[16];
    char t39[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    char *t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    char *t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2888);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t13) = 1;

LAB53:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB61;

LAB58:    if (t18 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t13) = 1;

LAB61:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);

LAB9:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t27 = (t13 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t13) = 1;

LAB25:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t13) = 1;

LAB33:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB36:
LAB28:
LAB20:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(71, ng0);

LAB21:    xsi_set_current_line(72, ng0);
    t33 = ((char*)((ng4)));
    t34 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 4, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t35, 64, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t36, 64, 33, 2U, t4, 1, t5, 32);
    xsi_vlog_unsigned_multiply(t37, 64, t35, 64, t36, 64);
    t11 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t11, t37, 0, 0, 64, 0LL);
    goto LAB20;

LAB24:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(76, ng0);

LAB29:    xsi_set_current_line(77, ng0);
    t26 = ((char*)((ng4)));
    t27 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 4, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t35, 64, t3, 32, t4, 32);
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t35, 0, 0, 64, 0LL);
    goto LAB28;

LAB32:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(81, ng0);

LAB37:    xsi_set_current_line(82, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t36, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t37, 33, 33, 2U, t4, 1, t5, 32);
    xsi_vlog_unsigned_divide(t38, 33, t36, 33, t37, 33);
    xsi_vlogtype_concat(t35, 33, 33, 1U, t38, 33);
    t11 = (t0 + 1932);
    t12 = (t0 + 1932);
    t26 = (t12 + 44U);
    t27 = *((char **)t26);
    t33 = ((char*)((ng8)));
    t34 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t39, t40, ((int*)(t27)), 2, t33, 32, 1, t34, 32, 1);
    t41 = (t13 + 4);
    t6 = *((unsigned int *)t41);
    t42 = (!(t6));
    t43 = (t39 + 4);
    t7 = *((unsigned int *)t43);
    t44 = (!(t7));
    t45 = (t42 && t44);
    t46 = (t40 + 4);
    t8 = *((unsigned int *)t46);
    t47 = (!(t8));
    t48 = (t45 && t47);
    if (t48 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t36, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t37, 33, 33, 2U, t4, 1, t5, 32);
    xsi_vlog_unsigned_mod(t38, 33, t36, 33, t37, 33);
    xsi_vlogtype_concat(t35, 33, 33, 1U, t38, 33);
    t11 = (t0 + 1932);
    t12 = (t0 + 1932);
    t26 = (t12 + 44U);
    t27 = *((char **)t26);
    t33 = ((char*)((ng9)));
    t34 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t13, t39, t40, ((int*)(t27)), 2, t33, 32, 1, t34, 32, 1);
    t41 = (t13 + 4);
    t6 = *((unsigned int *)t41);
    t42 = (!(t6));
    t43 = (t39 + 4);
    t7 = *((unsigned int *)t43);
    t44 = (!(t7));
    t45 = (t42 && t44);
    t46 = (t40 + 4);
    t8 = *((unsigned int *)t46);
    t47 = (!(t8));
    t48 = (t45 && t47);
    if (t48 == 1)
        goto LAB40;

LAB41:    goto LAB36;

LAB38:    t9 = *((unsigned int *)t40);
    t49 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t39);
    t50 = (t10 - t14);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t11, t35, t49, *((unsigned int *)t39), t51, 0LL);
    goto LAB39;

LAB40:    t9 = *((unsigned int *)t40);
    t49 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t14 = *((unsigned int *)t39);
    t50 = (t10 - t14);
    t51 = (t50 + 1);
    xsi_vlogvar_wait_assign_value(t11, t35, t49, *((unsigned int *)t39), t51, 0LL);
    goto LAB41;

LAB44:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(87, ng0);

LAB49:    xsi_set_current_line(88, ng0);
    t26 = ((char*)((ng7)));
    t27 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 4, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_signed_divide(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 1152U);
    t5 = *((char **)t2);
    t2 = (t0 + 1244U);
    t11 = *((char **)t2);
    memset(t39, 0, 8);
    xsi_vlog_signed_mod(t39, 32, t5, 32, t11, 32);
    xsi_vlogtype_concat(t35, 64, 64, 2U, t39, 32, t13, 32);
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t35, 0, 0, 64, 0LL);
    goto LAB48;

LAB52:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(95, ng0);

LAB57:    xsi_set_current_line(96, ng0);
    t33 = (t0 + 2024);
    t34 = (t33 + 36U);
    t41 = *((char **)t34);
    t43 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t41, 4, t43, 32);
    t46 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t46, t39, 0, 0, 4, 0LL);
    goto LAB56;

LAB60:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(100, ng0);

LAB65:    xsi_set_current_line(101, ng0);
    t33 = (t0 + 1932);
    t34 = (t33 + 36U);
    t41 = *((char **)t34);
    memset(t39, 0, 8);
    t43 = (t39 + 4);
    t46 = (t41 + 8);
    t52 = (t41 + 12);
    t28 = *((unsigned int *)t46);
    t29 = (t28 >> 0);
    *((unsigned int *)t39) = t29;
    t30 = *((unsigned int *)t52);
    t31 = (t30 >> 0);
    *((unsigned int *)t43) = t31;
    t32 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t32 & 4294967295U);
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 4294967295U);
    t54 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t54, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 4294967295U);
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB64;

LAB66:    xsi_set_current_line(107, ng0);

LAB69:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB73;

LAB70:    if (t23 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t27 = (t13 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB80;

LAB77:    if (t18 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t13) = 1;

LAB80:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB81;

LAB82:
LAB83:
LAB76:    goto LAB68;

LAB72:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(109, ng0);
    t33 = (t0 + 1152U);
    t34 = *((char **)t33);
    t33 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 32, 0LL);
    goto LAB76;

LAB79:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(111, ng0);
    t26 = (t0 + 1152U);
    t27 = *((char **)t26);
    t26 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t26, t27, 0, 0, 32, 0LL);
    goto LAB83;

}


extern void work_m_00000000002013531284_2425255936_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_59_1};
	xsi_register_didat("work_m_00000000002013531284_2425255936", "isim/MIPS_tb_isim_beh.exe.sim/work/m_00000000002013531284_2425255936.didat");
	xsi_register_executes(pe);
}
