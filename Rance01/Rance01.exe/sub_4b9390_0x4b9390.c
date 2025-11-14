// 函数: sub_4b9390
// 地址: 0x4b9390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg6
void* eax = arg5
int32_t ebx = arg1 * 2

if (ebx s<= ebp)
    do
        void* edx = &arg3[arg1]
        int32_t var_14_1 = arg7
        int32_t* esi_1 = edx + (arg1 << 2)
        eax = sub_4b9410(arg5, edx, arg3, edx, edx, esi_1)
        ebp -= ebx
        arg5 = eax
        arg3 = esi_1
    while (ebp s>= ebx)

if (ebp s> arg1)
    int32_t __saved_esi_1 = arg7
    void* edi_1 = &arg3[arg1]
    return sub_4b9410(eax, arg4, arg3, edi_1, edi_1, arg4)

return sub_6b49d0(eax, arg3, ((arg4 - arg3) s>> 2) * 4)
