// 函数: sub_502ad0
// 地址: 0x502ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0xd8)
int32_t edx

if (ecx != 0)
    edx = (*(*ecx + 4))()
    *(arg1 + 0xd8) = 0

int32_t* ecx_1 = *(arg1 + 0xd4)

if (ecx_1 != 0)
    edx, ecx_1 = (*(*ecx_1 + 4))()
    *(arg1 + 0xd4) = 0

int32_t* esi = *(arg1 + 0x10)
*(arg1 + 0x160) = 0

if (esi != 0)
    ecx_1, edx = sub_4f8480(esi)
    *(arg1 + 0x10) = 0

*(arg1 + 0xdc) = 0
sub_51ca40(arg1 + 0x34, edx, ecx_1)
sub_4ce2c0(arg1 + 0x24)
void* result = sub_4ccdc0(arg1 + 0x14)
*(arg1 + 0x160) = 0
*(arg1 + 0xc) = 0
return result
