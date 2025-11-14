// 函数: sub_6b569b
// 地址: 0x6b569b
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_6bb81d()
void* eax_1 = sub_6bb7fd(sub_6bb817())

if (eax_1 != 0)
    *(eax_1 + 0x54) = arg1[0x15]
    *(eax_1 + 0x58) = arg1[0x16]
    *(eax_1 + 4) = arg1[1]
    sub_6bb9f2(arg1)
else
    if (sub_6bb851(sub_6bb817(), arg1) == 0)
        ExitThread(GetLastError())
        noreturn
    
    *arg1 = GetCurrentThreadId()

__callthreadstartex()
noreturn
