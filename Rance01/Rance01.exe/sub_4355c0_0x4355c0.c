// 函数: sub_4355c0
// 地址: 0x4355c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == 0)
    arg1.b = 0
    return arg1

int32_t* esi = *(arg3 + 4)
int32_t* ecx = *(arg1 + 4)

if (esi != 0 && ecx != 0)
    int32_t ebx
    ebx.b = (*(*ecx + 0x28))()
    return (*(*esi + 0x28))() == ebx.b

arg1.b = 0
return arg1
