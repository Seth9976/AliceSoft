// 函数: sub_5058e0
// 地址: 0x5058e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4c8b60(arg1)
int32_t ecx = arg1[0x78]
arg1[6] = arg1[0x77]
arg1[7] = ecx
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x50] = 0x320
arg1[0x51] = 0x258
float ecx_1
int32_t edx_1
ecx_1, edx_1 = sub_503530(&arg1[0x35], arg1[0x50], arg1[0x51], fconvert.s(fconvert.t(10f)), 
    fconvert.s(fconvert.t(70f)), fconvert.s(fconvert.t(45f)))
int32_t result
int80_t st0
st0, result = sub_4cb740(arg1[0x68], edx_1, ecx_1)
result.b = 1
return result
