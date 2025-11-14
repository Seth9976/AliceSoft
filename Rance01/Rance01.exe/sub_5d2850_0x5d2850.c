// 函数: sub_5d2850
// 地址: 0x5d2850
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[7] == 0)
    sub_40da60("CDirectMusicBuffer::Play()\n")
    void* result
    result.b = 0
    return result

(*(*arg1 + 0x18))()
HANDLE hEvent = arg1[0x24]

if (hEvent != 0)
    ResetEvent(hEvent)

HANDLE hEvent_1 = arg1[0x25]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)

HANDLE hEvent_2 = arg1[0x26]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)

arg1[0x21].b = 0
*(arg1 + 0x85) = 0
arg1[0x10] = 0
return sub_576230(&arg1[0x23], sub_5d2e70, arg1) != 0
