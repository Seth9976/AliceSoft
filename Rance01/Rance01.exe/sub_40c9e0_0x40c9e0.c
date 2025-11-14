// 函数: sub_40c9e0
// 地址: 0x40c9e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
int32_t eax_1
eax_1.b = *(arg2 + 0x28)
*(arg1 + 0x28) = eax_1.b
int32_t ecx_2
ecx_2.b = *(arg2 + 0x29)
*(arg1 + 0x29) = ecx_2.b
int32_t edx_2
edx_2.b = *(arg2 + 0x2a)
*(arg1 + 0x2a) = edx_2.b
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x54) = *(arg2 + 0x54)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x64) = *(arg2 + 0x64)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x74) = *(arg2 + 0x74)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x8c) = *(arg2 + 0x8c)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x9c) = *(arg2 + 0x9c)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa4) = *(arg2 + 0xa4)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xac) = *(arg2 + 0xac)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
int32_t* ecx_16 = *(arg1 + 0xcc)
*(arg1 + 0xc4) = *(arg2 + 0xc4)
*(arg1 + 0xc8) = *(arg2 + 0xc8)

if (ecx_16 != 0)
    (*(*ecx_16 + 4))()
    *(arg1 + 0xcc) = 0

int32_t* ecx_17 = *(arg2 + 0xcc)
*(arg1 + 0xcc) = ecx_17

if (ecx_17 != 0)
    (**ecx_17)()

int32_t* ecx_18 = *(arg1 + 0xd0)

if (ecx_18 != 0)
    (*(*ecx_18 + 4))()
    *(arg1 + 0xd0) = 0

int32_t* ecx_19 = *(arg2 + 0xd0)
*(arg1 + 0xd0) = ecx_19

if (ecx_19 != 0)
    (**ecx_19)()

int32_t result
result.b = 1
return result
