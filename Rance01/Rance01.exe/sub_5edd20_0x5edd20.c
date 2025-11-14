// 函数: sub_5edd20
// 地址: 0x5edd20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx_7 = arg1[8]
void* ebp = arg2
void* eax = &arg1[4]
int32_t esi = *(eax + 0x14)

if (esi u< 0x10)
    arg2 = eax
else
    arg2 = *eax

if (esi u>= 0x10)
    eax = *eax

void* var_10 = arg2
sub_4102d0(ebp + 4, *(ebp + 8), eax, arg2 + edx_7)
arg2.b = 0
sub_54e400(&arg2, ebp + 4)
int32_t ecx_1 = arg1[0x10]
void* eax_2 = &arg1[0xb]
void* ebx_5

if (ecx_1 u< 0x10)
    ebx_5 = eax_2
else
    ebx_5 = *eax_2

if (ecx_1 u>= 0x10)
    eax_2 = *eax_2

void* var_10_1 = arg2
sub_4102d0(ebp + 4, *(ebp + 8), eax_2, ebx_5 + arg1[0xf])
arg2.b = 0
sub_54e400(&arg2, ebp + 4)
int32_t ebx_7 = *arg1
arg2.b = ebx_7.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_7 u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_7 u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_7 u>> 0x18).b
sub_54e400(&arg2, ebp + 4)
int32_t ebx_9 = arg1[1]
arg2.b = ebx_9.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_9 u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_9 u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_9 u>> 0x18).b
sub_54e400(&arg2, ebp + 4)
int32_t ebx_11 = arg1[2]
arg2.b = ebx_11.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_11 u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_11 u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_11 u>> 0x18).b
sub_54e400(&arg2, ebp + 4)
int32_t ebx_13 = arg1[3]
arg2.b = ebx_13.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_13 u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_13 u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx_13 u>> 0x18).b
return sub_54e400(&arg2, ebp + 4)
