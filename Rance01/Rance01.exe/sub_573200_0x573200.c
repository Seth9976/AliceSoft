// 函数: sub_573200
// 地址: 0x573200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HGDIOBJ ho = arg1[0x38]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x38] = 0

arg1[0x43] = 0xffffffff
arg1[0x44] = 0
sub_572ae0(&arg1[0x25])
sub_572ae0(&arg1[0x12])
int32_t result = (*(arg1[2] + 4))()
int32_t* ecx_1 = arg1[1]
arg1[0xe] = 0
arg1[0xf] = 0

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    arg1[1] = 0

int32_t* ecx_2 = *arg1

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *arg1 = 0

return result
