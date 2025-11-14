// 函数: sub_4c04c0
// 地址: 0x4c04c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t ebx = 0
int32_t eax = 0
int32_t var_4 = 0
int32_t edi = 0
int32_t edx = 2

do
    eax += arg1 s>> (edx.b - 2) & 1
    edi += arg1 s>> (edx.b - 1) & 1
    int32_t ebp_8 = arg1 s>> edx.b
    char ecx_4 = edx.b + 1
    edx += 4
    ebx += ebp_8 & 1
    var_4 += arg1 s>> ecx_4 & 1
while (edx - 2 s< 0x20)

return eax + var_4 + ebx + edi
