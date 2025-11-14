// 函数: sub_683490
// 地址: 0x683490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* eax_2 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_2 == 0)
    return 0

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(eax_2)
int32_t* ecx = eax_2[0xe]

if (ecx != 0 && eax_3[2] == 0)
    eax_3[8] = ecx
    eax_3[2] = (**ecx)(1)

eax_3[3] = eax_2[0xc]
eax_3[4] = eax_2
return (*eax_3)->vFunc_11()
