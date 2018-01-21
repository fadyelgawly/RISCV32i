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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/.Xilinx/RiscV_CPU_G7/Immediate_Gen.v";
static unsigned int ng1[] = {19U, 0U};
static int ng2[] = {21, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {35U, 0U};
static unsigned int ng5[] = {99U, 0U};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {20, 0};
static unsigned int ng8[] = {55U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {23U, 0U};
static unsigned int ng11[] = {111U, 0U};
static int ng12[] = {12, 0};



static void Cont_26_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 127U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 127U);
    t12 = (t0 + 3192);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 127U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 6);
    t25 = (t0 + 3096);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t7[16];
    char t8[8];
    char t18[8];
    char t22[8];
    char t31[8];
    char t39[8];
    char t42[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3112);
    *((int *)t2) = 1;
    t3 = (t0 + 2808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t4, 7);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 20);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 20);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4095U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 4095U);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    xsi_vlog_mul_concat(t18, 21, 1, t19, 1U, t22, 1);
    xsi_vlogtype_concat(t7, 33, 33, 2U, t18, 21, t8, 12);
    t30 = (t0 + 1608);
    xsi_vlogvar_assign_value(t30, t7, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 20);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 20);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4095U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 4095U);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1048U);
    t19 = *((char **)t11);
    memset(t22, 0, 8);
    t11 = (t22 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t20);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t11) = t29;
    xsi_vlog_mul_concat(t18, 21, 1, t10, 1U, t22, 1);
    xsi_vlogtype_concat(t7, 33, 33, 2U, t18, 21, t8, 12);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 7);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 7);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 31U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 31U);
    t10 = (t0 + 1048U);
    t11 = *((char **)t10);
    memset(t18, 0, 8);
    t10 = (t18 + 4);
    t19 = (t11 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (t24 >> 25);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t19);
    t27 = (t26 >> 25);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 127U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 127U);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1048U);
    t23 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t31 + 4);
    t30 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t21) = t37;
    xsi_vlog_mul_concat(t22, 21, 1, t20, 1U, t31, 1);
    xsi_vlogtype_concat(t7, 33, 33, 3U, t22, 21, t18, 7, t8, 5);
    t38 = (t0 + 1608);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 8);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 8);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 15U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 15U);
    t11 = (t0 + 1048U);
    t19 = *((char **)t11);
    memset(t22, 0, 8);
    t11 = (t22 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 25);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 25);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t28 & 63U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 63U);
    t21 = (t0 + 1048U);
    t23 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t31 + 4);
    t30 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t21) = t37;
    t38 = ((char*)((ng7)));
    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t40 = (t42 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 31);
    t46 = (t45 & 1);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 31);
    t49 = (t48 & 1);
    *((unsigned int *)t40) = t49;
    xsi_vlog_mul_concat(t39, 20, 1, t38, 1U, t42, 1);
    xsi_vlogtype_concat(t8, 32, 32, 5U, t39, 20, t31, 1, t22, 6, t18, 4, t3, 1);
    t50 = (t0 + 1608);
    xsi_vlogvar_assign_value(t50, t8, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 12);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t11 = (t0 + 1048U);
    t19 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 20);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 20);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 2047U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 2047U);
    t21 = ((char*)((ng9)));
    t23 = (t0 + 1048U);
    t30 = *((char **)t23);
    memset(t31, 0, 8);
    t23 = (t31 + 4);
    t38 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t38);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t23) = t37;
    xsi_vlog_mul_concat(t22, 2, 1, t21, 1U, t31, 1);
    xsi_vlogtype_concat(t7, 33, 33, 4U, t22, 2, t18, 11, t8, 8, t3, 12);
    t40 = (t0 + 1608);
    xsi_vlogvar_assign_value(t40, t7, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 12);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 12);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 255U);
    t11 = (t0 + 1048U);
    t19 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 20);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 20);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 2047U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 2047U);
    t21 = ((char*)((ng9)));
    t23 = (t0 + 1048U);
    t30 = *((char **)t23);
    memset(t31, 0, 8);
    t23 = (t31 + 4);
    t38 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t38);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t23) = t37;
    xsi_vlog_mul_concat(t22, 2, 1, t21, 1U, t31, 1);
    xsi_vlogtype_concat(t7, 33, 33, 4U, t22, 2, t18, 11, t8, 8, t3, 12);
    t40 = (t0 + 1608);
    xsi_vlogvar_assign_value(t40, t7, 0, 0, 32);
    goto LAB21;

LAB19:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    memset(t18, 0, 8);
    t4 = (t18 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 21);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 21);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 15U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 15U);
    t11 = (t0 + 1048U);
    t19 = *((char **)t11);
    memset(t22, 0, 8);
    t11 = (t22 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 25);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 25);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t28 & 63U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 63U);
    t21 = (t0 + 1048U);
    t23 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t31 + 4);
    t30 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (t32 >> 20);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 20);
    t37 = (t36 & 1);
    *((unsigned int *)t21) = t37;
    t38 = (t0 + 1048U);
    t40 = *((char **)t38);
    memset(t39, 0, 8);
    t38 = (t39 + 4);
    t41 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 12);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t41);
    t47 = (t46 >> 12);
    *((unsigned int *)t38) = t47;
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 255U);
    t49 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t49 & 255U);
    t43 = ((char*)((ng12)));
    t50 = (t0 + 1048U);
    t51 = *((char **)t50);
    memset(t52, 0, 8);
    t50 = (t52 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 31);
    t56 = (t55 & 1);
    *((unsigned int *)t52) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 >> 31);
    t59 = (t58 & 1);
    *((unsigned int *)t50) = t59;
    xsi_vlog_mul_concat(t42, 12, 1, t43, 1U, t52, 1);
    xsi_vlogtype_concat(t8, 32, 32, 6U, t42, 12, t39, 8, t31, 1, t22, 6, t18, 4, t3, 1);
    t60 = (t0 + 1608);
    xsi_vlogvar_assign_value(t60, t8, 0, 0, 32);
    goto LAB21;

}


extern void work_m_00000000001045438096_0301420127_init()
{
	static char *pe[] = {(void *)Cont_26_0,(void *)Always_28_1};
	xsi_register_didat("work_m_00000000001045438096_0301420127", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000001045438096_0301420127.didat");
	xsi_register_executes(pe);
}
