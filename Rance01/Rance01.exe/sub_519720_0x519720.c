// 函数: sub_519720
// 地址: 0x519720
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg1
int32_t eax = arg2[1]
int32_t ecx_1

if (esi u< eax)
    ecx_1 = *arg2

if (esi u< eax && ecx_1 u<= esi)
    if (eax == arg2[2])
        sub_4b7ab0(arg2)
    
    esi = ((esi - ecx_1) & 0xfffffff0) + *arg2
else if (eax == arg2[2])
    sub_4b7ab0(arg2)

int32_t* result = arg2[1]

if (result != 0)
    *result = *esi
    result[1] = esi[1]
    result[2] = esi[2]
    result[3] = esi[3]

arg2[1] += 0x10
return result
