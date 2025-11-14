// 函数: sub_4ff6e0
// 地址: 0x4ff6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg6
void* eax = arg5
int32_t ebx = arg1 * 2

if (ebx s<= ebp)
    do
        int32_t* edx = arg3 + (arg1 << 2)
        int32_t var_14_1 = arg7
        int128_t* esi_1 = &edx[arg1]
        int128_t* var_18_1 = esi_1
        int32_t* var_1c_1 = edx
        eax = sub_4ff760(arg5, edx, arg3, arg3, edx)
        ebp -= ebx
        arg5 = eax
        arg3 = esi_1
    while (ebp s>= ebx)

if (ebp s<= arg1)
    return sub_6b49d0(eax, arg3, ((arg4 - arg3) s>> 2) * 4)

int32_t __saved_esi_1 = arg7
int32_t* var_14_3 = arg4
void* edi_1 = arg3 + (arg1 << 2)
void* var_18_3 = edi_1
return sub_4ff760(eax, arg4, arg3, arg3, edi_1)
