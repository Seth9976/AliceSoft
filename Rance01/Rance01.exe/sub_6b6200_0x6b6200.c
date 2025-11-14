// 函数: sub_6b6200
// 地址: 0x6b6200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

EXCEPTION_RECORD ExceptionRecord
ExceptionRecord.ExceptionCode = 0x80000026
ExceptionRecord.ExceptionFlags = 0
ExceptionRecord.ExceptionRecord = 0
ExceptionRecord.ExceptionAddress = 0
ExceptionRecord.NumberParameters = 0
int32_t ebp = *arg1
void* TargetFrame = arg1[6]
TEB* fsbase

if (TargetFrame != fsbase->NtTib.ExceptionList)
    RtlUnwind(TargetFrame, 0x6b624e, &ExceptionRecord, nullptr)

if (TargetFrame != 0)
    int32_t eax_2
    int32_t edi
    eax_2, ebp = sub_6bffd7(TargetFrame, edi, &arg1[8])
    
    if (eax_2 == 0 || arg1[8] != 0x56433230)
        __local_unwind2(TargetFrame, arg1[7])
    else
        int32_t eax_5 = arg1[9]
        
        if (eax_5 != 0)
            eax_5(arg1)

__NLG_Notify(arg1[5], ebp, 0)
arg1[1]
arg1[2]
arg1[3]
arg1[4]
jump(*(arg1 + 0x14))
