// 函数: sub_68d170
// 地址: 0x68d170
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg1
void* ebp = arg2
arg2.b = ebx.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 0x18).b
int32_t ecx_2
int32_t edx
ecx_2, edx = sub_54e400(&arg2, ebp + 4)
char* eax_7

switch (*arg1 - 1)
    case nullptr
        sub_4101f0(ebp, arg1[1])
        char* eax_9
        eax_9.b = 1
        return eax_9
    case 1
        int32_t var_10_1 = ecx_2
        sub_4101f0(ebp, fconvert.s(fconvert.t(arg1[2])))
        char* eax_11
        eax_11.b = 1
        return eax_11
    case 2
        eax_7.b = arg1[3].b != 0
        arg2.b = eax_7.b
        sub_54e400(&arg2, ebp + 4)
        char* eax_13
        eax_13.b = 1
        return eax_13
    case 3
        sub_410280(&arg1[4], edx, ebp)

eax_7.b = 1
return eax_7
