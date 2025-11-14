// 函数: sub_4230a0
// 地址: 0x4230a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4234a0(arg1)

if (arg1[0x27] u>= 0x10)
    int32_t var_10_1 = arg1[0x22]
    sub_6b4d5b()

arg1[0x27] = 0xf
arg1[0x26] = 0
arg1[0x22].b = 0
int32_t eax_2 = arg1[0x1e]

if (eax_2 != 0)
    int32_t var_10_2 = eax_2
    sub_6b4d5b()

arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20] = 0

if (arg1[0x1c] u>= 0x10)
    int32_t var_10_3 = arg1[0x17]
    sub_6b4d5b()

arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0

if (arg1[0x15] u>= 0x10)
    int32_t var_10_4 = arg1[0x10]
    sub_6b4d5b()

arg1[0x15] = 0xf
arg1[0x14] = 0
arg1[0x10].b = 0

if (arg1[0xe] u>= 0x10)
    int32_t var_10_5 = arg1[9]
    sub_6b4d5b()

arg1[0xe] = 0xf
arg1[0xd] = 0
arg1[9].b = 0

if (arg1[7] u>= 0x10)
    int32_t var_10_6 = arg1[2]
    sub_6b4d5b()

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
HANDLE hEvent = arg1[1]

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[1])
    arg1[1] = 0

BOOL hHandle = *arg1

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(*arg1)
    *arg1 = 0

return hHandle
