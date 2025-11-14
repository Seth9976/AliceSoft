// 函数: sub_5e8c70
// 地址: 0x5e8c70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[1] == 0 || arg1[3] == 0 || *arg1 == 0xffffffff)
    arg1.b = 0
    return arg1

int32_t arg_4
int32_t arg_8
int32_t arg_c
int32_t arg_10
sub_5e87c0(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
int32_t edi = arg_10
int32_t ebx = arg_c
int32_t ebp = arg_8

if (sub_5e8700(arg1, arg_4, ebp, ebx, edi) != 0)
    return 0

int32_t eax_4 = sub_5e81e0(arg1)
void* esi_1 = arg1[3]

if (*(esi_1 + 4) != 0)
    (*(**(esi_1 + 4) + 0x30))(eax_4, arg_4, ebp, ebx, edi, arg2)

eax_4.b = 1
return eax_4
