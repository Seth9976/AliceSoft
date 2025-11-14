// 函数: sub_67ff10
// 地址: 0x67ff10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_2 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(eax_2)
int32_t* ecx = eax_2[0xe]

if (ecx != 0 && eax_3[2] == 0)
    eax_3[8] = ecx
    eax_3[2] = (**ecx)(1)

eax_3[3] = eax_2[0xc]
eax_3[4] = eax_2
int32_t ecx_2 = arg2[9]
int32_t vFunc_1 = eax_3[2]->vFunc_1
int32_t var_30 = ecx_2
int32_t var_38 = ecx_2
void* eax_7 = sub_6006c0(arg2[0xa], vFunc_1, ecx_2, vFunc_1, *arg2, arg2[1], arg2[2], arg2[3], 
    arg2[4], fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[6])))), arg2[8], 
    fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[7])))), arg3)
return eax_7
