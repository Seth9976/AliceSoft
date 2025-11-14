// 函数: sub_51e370
// 地址: 0x51e370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r6 = fconvert.t(255.0)
long double x87_r7_1 = fconvert.t(arg1[3]) * x87_r6
int32_t var_c = 0
int32_t var_14 = 0xff
int32_t eax = sub_70c710(x87_r7_1)
int32_t var_10 = eax
int32_t* eax_1

if (eax s<= 0xff)
    eax_1 = &var_c
    
    if (eax s>= 0)
        eax_1 = &var_10
else
    eax_1 = &var_14

int32_t eax_2 = *eax_1
long double x87_r6_3 = fconvert.t(*arg1) * x87_r6
var_14 = 0
var_c = 0xff
int32_t eax_3 = sub_70c710(x87_r6_3)
var_10 = eax_3
int32_t* eax_4

if (eax_3 s<= 0xff)
    eax_4 = &var_14
    
    if (eax_3 s>= 0)
        eax_4 = &var_10
else
    eax_4 = &var_c

int32_t ecx_2 = *eax_4
long double x87_r6_5 = fconvert.t(arg1[1]) * x87_r6
var_14 = 0
var_c = 0xff
int32_t eax_5 = sub_70c710(x87_r6_5)
var_10 = eax_5
int32_t* eax_6

if (eax_5 s<= 0xff)
    eax_6 = &var_14
    
    if (eax_5 s>= 0)
        eax_6 = &var_10
else
    eax_6 = &var_c

int32_t edi = *eax_6
long double x87_r7_3 = x87_r6 * fconvert.t(arg1[2])
var_14 = 0
var_c = 0xff
int32_t eax_7 = sub_70c710(x87_r7_3)
var_10 = eax_7
int32_t* ecx_4

if (eax_7 s<= 0xff)
    ecx_4 = &var_10
    
    if (eax_7 s< 0)
        ecx_4 = &var_14
else
    ecx_4 = &var_c

return ((eax_2 << 8 | ecx_2) << 8 | edi) << 8 | *ecx_4
