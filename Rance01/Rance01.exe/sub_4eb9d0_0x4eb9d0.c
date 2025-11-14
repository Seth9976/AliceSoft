// 函数: sub_4eb9d0
// 地址: 0x4eb9d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** edi = *(arg1 + 0x64)

if (edi != 0)
    int32_t* ecx_1 = edi[1]
    *edi = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        edi[1] = 0
    
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** var_10_1 = edi
    edi[2] = 0
    sub_6b4d5b()
    *(arg1 + 0x64) = 0

bool cond:0 = *(arg1 + 0x24) u< 0x10
void* result = arg1 + 0x10
*(result + 0x10) = 0

if (not(cond:0))
    result = *result

*result = 0

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    int32_t* ebp_1 = *i
    
    if (ebp_1 != 0)
        sub_4ed980(ebp_1)
        int32_t* var_10_3 = ebp_1
        result = sub_6b4d5b()

int128_t* ecx_2 = *(arg1 + 0x34)
int128_t* edi_1 = *(arg1 + 0x30)

if (edi_1 != ecx_2)
    void* ebp_2 = 0 s>> 2 << 2
    result = sub_6b49d0(edi_1, ecx_2, ebp_2)
    *(arg1 + 0x34) = ebp_2 + edi_1

int32_t* ecx_3 = *(arg1 + 0x50)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x50) = 0

*(arg1 + 0xc) = 0
return result
