// 函数: sub_6825f0
// 地址: 0x6825f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
    int32_t* ecx = eax_1[0xe]
    
    if (ecx != 0 && eax_2[2] == 0)
        eax_2[8] = ecx
        eax_2[2] = (**ecx)(1)
    
    int32_t* eax_5 = data_797da0
    eax_2[3] = eax_1[0xc]
    eax_2[4] = eax_1
    void* eax_6 = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)
    
    if (eax_6 != 0)
        void* eax_7 = sub_5f3790(eax_6, arg2)
        
        if (eax_7 != 0)
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = muls.dp.d(0x5397829d, *(eax_7 + 0x2c) - *(eax_7 + 0x28))
            int32_t edx_4 = edx_3 s>> 6
            return (edx_4 u>> 0x1f) + edx_4

return 0
