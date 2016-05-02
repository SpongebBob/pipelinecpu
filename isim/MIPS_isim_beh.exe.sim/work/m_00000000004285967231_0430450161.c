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
static const char *ng0 = "C:/Documents and Settings/P6/p6xin/P6/DM_EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {24, 0};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {16, 0};



static void Always_31_0(char *t0)
{
    char t7[8];
    char t29[8];
    char t30[8];
    char t42[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(37, ng0);

LAB18:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB19:    if (t19 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t7) = 1;

LAB22:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t7) = 1;

LAB29:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB36;

LAB33:    if (t19 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t7) = 1;

LAB36:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 24, t29, 8);
    t9 = (t0 + 1012);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);

LAB39:
LAB32:
LAB25:    goto LAB17;

LAB11:    xsi_set_current_line(48, ng0);

LAB40:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB44;

LAB41:    if (t19 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t7) = 1;

LAB44:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB51;

LAB48:    if (t19 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t7) = 1;

LAB51:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB58;

LAB55:    if (t19 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t7) = 1;

LAB58:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 784U);
    t22 = *((char **)t9);
    memset(t42, 0, 8);
    t9 = (t42 + 4);
    t23 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t42) = t18;
    t19 = *((unsigned int *)t23);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t9) = t21;
    xsi_vlog_mul_concat(t30, 24, 1, t8, 1U, t42, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t30, 24, t29, 8);
    t31 = (t0 + 1012);
    xsi_vlogvar_assign_value(t31, t7, 0, 0, 32);

LAB61:
LAB54:
LAB47:    goto LAB17;

LAB13:    xsi_set_current_line(59, ng0);

LAB62:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB66;

LAB63:    if (t19 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t7) = 1;

LAB66:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB73;

LAB70:    if (t19 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t7) = 1;

LAB73:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB74;

LAB75:
LAB76:
LAB69:    goto LAB17;

LAB15:    xsi_set_current_line(66, ng0);

LAB77:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB78:    if (t19 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t7) = 1;

LAB81:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t2 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB88;

LAB85:    if (t19 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t7) = 1;

LAB88:    t22 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB89;

LAB90:
LAB91:
LAB84:    goto LAB17;

LAB21:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(39, ng0);
    t31 = (t0 + 784U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 24, t30, 8);
    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 32);
    goto LAB25;

LAB28:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(41, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1012);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB32;

LAB35:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(43, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1012);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB39;

LAB43:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(50, ng0);
    t31 = (t0 + 784U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = ((char*)((ng4)));
    t41 = (t0 + 784U);
    t43 = *((char **)t41);
    memset(t44, 0, 8);
    t41 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 7);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 7);
    t51 = (t50 & 1);
    *((unsigned int *)t41) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t40, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t52 = (t0 + 1012);
    xsi_vlogvar_assign_value(t52, t29, 0, 0, 32);
    goto LAB47;

LAB50:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(52, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng4)));
    t40 = (t0 + 784U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t43 = (t41 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t40) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t33, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t45 = (t0 + 1012);
    xsi_vlogvar_assign_value(t45, t29, 0, 0, 32);
    goto LAB54;

LAB57:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(54, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng4)));
    t40 = (t0 + 784U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t43 = (t41 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 23);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 >> 23);
    t51 = (t50 & 1);
    *((unsigned int *)t40) = t51;
    xsi_vlog_mul_concat(t42, 24, 1, t33, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 24, t30, 8);
    t45 = (t0 + 1012);
    xsi_vlogvar_assign_value(t45, t29, 0, 0, 32);
    goto LAB61;

LAB65:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(61, ng0);
    t31 = (t0 + 784U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 16, t30, 16);
    t41 = (t0 + 1012);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 32);
    goto LAB69;

LAB72:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(63, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 65535U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 16, t30, 16);
    t40 = (t0 + 1012);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB76;

LAB80:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(68, ng0);
    t31 = (t0 + 784U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = ((char*)((ng7)));
    t41 = (t0 + 784U);
    t43 = *((char **)t41);
    memset(t44, 0, 8);
    t41 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t41) = t51;
    xsi_vlog_mul_concat(t42, 16, 1, t40, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 16, t30, 16);
    t52 = (t0 + 1012);
    xsi_vlogvar_assign_value(t52, t29, 0, 0, 32);
    goto LAB84;

LAB87:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(70, ng0);
    t23 = (t0 + 784U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 65535U);
    t33 = ((char*)((ng7)));
    t40 = (t0 + 784U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t40 = (t44 + 4);
    t43 = (t41 + 4);
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 31);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 >> 31);
    t51 = (t50 & 1);
    *((unsigned int *)t40) = t51;
    xsi_vlog_mul_concat(t42, 16, 1, t33, 1U, t44, 1);
    xsi_vlogtype_concat(t29, 32, 32, 2U, t42, 16, t30, 16);
    t45 = (t0 + 1012);
    xsi_vlogvar_assign_value(t45, t29, 0, 0, 32);
    goto LAB91;

}


extern void work_m_00000000004285967231_0430450161_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000004285967231_0430450161", "isim/MIPS_isim_beh.exe.sim/work/m_00000000004285967231_0430450161.didat");
	xsi_register_executes(pe);
}
