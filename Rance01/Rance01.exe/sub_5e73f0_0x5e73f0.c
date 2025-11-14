// 函数: sub_5e73f0
// 地址: 0x5e73f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x30)
int32_t edi

if (ebx != 0)
    int32_t eax_1 = *(arg1 + 0x2c)
    
    if (eax_1 != 0xffffffff)
        edi = sub_5f9f90(eax_1)
    else
        edi = 0
else
    edi = 0

int32_t eax_3

if (ebx != 0)
    int32_t eax_4 = *(arg1 + 0x2c)
    
    if (eax_4 != 0xffffffff)
        eax_3 = sub_5f9f40(eax_4)
    else
        eax_3 = 0
else
    eax_3 = 0

void var_10
sub_5f7e90(arg1 + 0x40, &var_10, eax_3, edi)
int32_t var_4

if (arg3 - 1 u<= 8)
    switch (arg3 + &jump_table_5e748c[2]:3)
        case &lookup_table_5e7498[3], &lookup_table_5e7498[4], &lookup_table_5e7498[5]
            int32_t eax_10
            int32_t edx
            edx:eax_10 = sx.q(var_4)
            return neg.d((eax_10 - edx) s>> 1) + arg2
        case &lookup_table_5e7498[6], &lookup_table_5e7498[7], &lookup_table_5e7498[8]
            return neg.d(var_4) + arg2
return arg2
