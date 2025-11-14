// 函数: sub_683030
// 地址: 0x683030
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 == 0)
    return 

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
int32_t* ecx = eax_1[0xe]

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

int32_t* eax_5 = data_797da0
eax_2[3] = eax_1[0xc]
eax_2[4] = eax_1
void* eax_6 = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)

if (eax_6 == 0)
    return 

void* ecx_3 = *(eax_6 + 0xc)
long double x87_r7_1 = fconvert.t(*(ecx_3 + 0x1a0))
long double x87_r6_1 = fconvert.t(arg2)
x87_r6_1 - x87_r7_1
eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    *(ecx_3 + 0x1a0) = fconvert.s(x87_r7_1)
    *(ecx_3 + 0xc) = 1
