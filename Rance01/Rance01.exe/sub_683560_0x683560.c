// 函数: sub_683560
// 地址: 0x683560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* eax_2 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_2 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(eax_2)
    int32_t* ecx = eax_2[0xe]
    
    if (ecx != 0 && eax_3[2] == 0)
        eax_3[8] = ecx
        eax_3[2] = (**ecx)(1)
    
    int32_t* eax_6 = data_797da0
    eax_3[3] = eax_2[0xc]
    eax_3[4] = eax_2
    void* eax_7 = sub_5f7370(*eax_6, eax_3[2]->vFunc_1)
    
    if (eax_7 != 0)
        return *(*(eax_7 + 0xc) + 0x28)

return 0
