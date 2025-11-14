// 函数: sub_4d9970
// 地址: 0x4d9970
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0x13c)
int32_t edx

if (ecx != 0)
    edx = (*(*ecx + 4))()
    *(arg1 + 0x13c) = 0

*(arg1 + 0x140) = 0
int32_t* ecx_1 = *(arg1 + 0x84)

if (ecx_1 != 0)
    edx = (*(*ecx_1 + 4))()
    *(arg1 + 0x84) = 0

int32_t* ecx_2 = *(arg1 + 0x80)

if (ecx_2 != 0)
    edx, ecx_2 = (*(*ecx_2 + 4))()
    *(arg1 + 0x80) = 0

*(arg1 + 0x120) = 0
*(arg1 + 0x134) = 0
*(arg1 + 0x14) = 0xffffffff
*(arg1 + 0x88) = 0
sub_51ca40(arg1 + 0x38, edx, ecx_2)
int32_t __saved_ecx
sub_4c87d0(arg1 + 0x124, &__saved_ecx, *(arg1 + 0x124), *(arg1 + 0x128))
sub_4c87d0(arg1 + 0x110, &__saved_ecx, *(arg1 + 0x110), *(arg1 + 0x114))
sub_4ce2c0(arg1 + 0x28)
void* result = sub_4ccdc0(arg1 + 0x18)
long double x87_r7 = float.t(0)
*(arg1 + 0x120) = 0
*(arg1 + 0x144) = fconvert.s(x87_r7)
*(arg1 + 0x148) = fconvert.s(x87_r7)
*(arg1 + 0x14c) = fconvert.s(x87_r7)
*(arg1 + 0x150) = fconvert.s(x87_r7)
*(arg1 + 0x14) = 0xffffffff
int32_t* esi = *(arg1 + 0x10)
*(arg1 + 0x139) = 0

if (esi != 0)
    result = sub_4f8480(esi)
    *(arg1 + 0x10) = 0

*(arg1 + 0xc) = 0
return result
