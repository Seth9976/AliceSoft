// 函数: sub_680e30
// 地址: 0x680e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* eax_2 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_2 == 0)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    sub_401270(arg2, nullptr, 0x72d0c2)
    return arg2

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(eax_2)
int32_t* ecx = eax_2[0xe]

if (ecx != 0 && eax_3[2] == 0)
    eax_3[8] = ecx
    eax_3[2] = (**ecx)(1)

eax_3[3] = eax_2[0xc]
eax_3[4] = eax_2
sub_41b2b0(eax_3, arg2, arg3)
return arg2
