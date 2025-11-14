// 函数: sub_613060
// 地址: 0x613060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi
int32_t var_4 = esi
int32_t* eax_1 = (*(**(*(arg1 + 0xd0) + 0xc) + 4))(arg2)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t eax_3 = (*(*eax_1 + 0x18))()

if (eax_3 == 0)
    eax_3.b = 0
    return eax_3

int32_t* edi_2 = arg3 * 4

if (edi_2 s>= (*(*eax_1 + 0x14))())
    int32_t eax_5
    eax_5.b = 0
    return eax_5

*arg4 = *(edi_2 + eax_3)
int32_t eax_6
eax_6.b = 1
return eax_6
