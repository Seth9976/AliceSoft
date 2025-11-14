// 函数: sub_592e50
// 地址: 0x592e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
(*(*arg1 + 0x18))()
HANDLE hEvent = arg1[0x23]

if (hEvent != 0)
    ResetEvent(hEvent)

HANDLE hEvent_1 = arg1[0x24]

if (hEvent_1 != 0)
    ResetEvent(hEvent_1)

HANDLE hEvent_2 = arg1[0x25]

if (hEvent_2 != 0)
    ResetEvent(hEvent_2)

arg1[0x20].b = 0
*(arg1 + 0x81) = 0
arg1[0xd] = 0
HANDLE hHandle = arg1[0x22]

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    CloseHandle(arg1[0x22])
    arg1[0x22] = 0

HANDLE result = sub_6b5700(nullptr, 0, sub_593440, arg1, THREAD_CREATE_RUN_IMMEDIATELY, &var_4)

if (result != 0)
    arg1[0x22] = result

result.b = 1
return result
