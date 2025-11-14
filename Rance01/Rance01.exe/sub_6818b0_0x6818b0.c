// 函数: sub_6818b0
// 地址: 0x6818b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 == 0)
    return 0

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
int32_t* ecx = eax_1[0xe]

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

int32_t* eax_5 = data_797da0
eax_2[3] = eax_1[0xc]
eax_2[4] = eax_1
void* eax_6
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** ecx_3
eax_6, ecx_3 = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)

if (eax_6 != 0)
    void* eax_7 = sub_5f3910(ecx_3, eax_6, arg2)
    
    if (eax_7 != 0)
        void* eax_9 = *(*(eax_7 + 0x40) + 0x70)
        
        if (eax_9 != 0)
            void* eax_10 = *(eax_9 + 0x1c)
            
            if (eax_10 != 0)
                void* eax_11 = *(eax_10 + 0x24)
                
                if (eax_11 != 0)
                    return *(eax_11 + 0x18)

return 0xffffffff
