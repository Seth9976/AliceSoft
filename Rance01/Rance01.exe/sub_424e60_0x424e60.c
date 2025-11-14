// 函数: sub_424e60
// 地址: 0x424e60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x1c)

if (edi != 0)
    if (*(edi + 0x18) u>= 0x10)
        int32_t var_c_1 = *(edi + 4)
        sub_6b4d5b()
    
    *(edi + 0x18) = 0xf
    *(edi + 0x14) = 0
    void* var_c_2 = edi
    *(edi + 4) = 0
    sub_6b4d5b()
    *(arg1 + 0x1c) = 0

int32_t* ecx = *(arg1 + 4)
*(arg1 + 0x18) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0xc) = 0

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

*(arg1 + 8) = 0
arg1[0x20] = 0
*arg1 = 0
