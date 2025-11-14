// 函数: sub_4315f0
// 地址: 0x4315f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx_6 = arg2
int32_t ecx = *(arg1 + 0x1c)
int32_t ebp = *(arg1 + 0x18)
void* eax = arg1 + 8

if (ecx u< 0x10)
    arg2 = eax
else
    arg2 = *eax

if (ecx u>= 0x10)
    eax = *eax

void* var_14 = arg2
sub_4102d0(edx_6 + 4, *(edx_6 + 8), eax, arg2 + ebp)
arg2.b = 0
sub_54e400(&arg2, edx_6 + 4)
int32_t ebx_1 = *(arg1 + 0x2c)
arg2.b = ebx_1.b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_1 u>> 8).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_1 u>> 0x10).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_1 u>> 0x18).b
sub_54e400(&arg2, edx_6 + 4)
int32_t ebx_3 = *(arg1 + 0x30)
arg2.b = ebx_3.b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_3 u>> 8).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_3 u>> 0x10).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_3 u>> 0x18).b
sub_54e400(&arg2, edx_6 + 4)
int32_t ebx_5 = *(arg1 + 0x34)
arg2.b = ebx_5.b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_5 u>> 8).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_5 u>> 0x10).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_5 u>> 0x18).b
sub_54e400(&arg2, edx_6 + 4)
int32_t ebx_7 = *(arg1 + 0x38)
arg2.b = ebx_7.b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_7 u>> 8).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_7 u>> 0x10).b
sub_54e400(&arg2, edx_6 + 4)
arg2.b = (ebx_7 u>> 0x18).b
sub_54e400(&arg2, edx_6 + 4)
char* result
result.b = 1
return result
