// 函数: sub_56c2e0
// 地址: 0x56c2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sys40::CSoundVolumeManager::`vftable'{for `IVolumeValancer'}

if (arg1[0xf] u>= 0x10)
    int32_t __saved_edi_1 = arg1[0xa]
    sub_6b4d5b()

arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
int32_t __saved_edi_3 = arg1[6]

if (__saved_edi_3 != 0)
    int32_t __saved_edi_2 = __saved_edi_3
    sub_6b4d5b()

arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
void* result = arg1[1]

if (result != 0)
    struct IVolumeValancer::sys40::CSoundVolumeManager::VTable** var_14_1 = arg1
    sub_62a5b0(result, arg1[2])
    int32_t var_18_1 = arg1[1]
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
return result
