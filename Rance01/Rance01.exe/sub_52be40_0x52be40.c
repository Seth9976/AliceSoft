// 函数: sub_52be40
// 地址: 0x52be40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_710f08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t frequency
int32_t var_34 = data_78c474 ^ &frequency
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *(arg1 + 0x20)

if (result != *(arg1 + 0x24))
    struct win32only::CHighResolutionTimer::VTable* const var_20_1 =
        &win32only::CHighResolutionTimer::`vftable'
    
    if ((data_797de8 | data_797dec) == 0)
        QueryPerformanceFrequency(&frequency)
        data_797de8 = frequency
        int32_t var_2c
        data_797dec = var_2c
    
    int32_t var_4 = 0
    int32_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int32_t performanceCount_1 = performanceCount
    result = *(arg1 + 0x24)
    int32_t performanceCount_2 = performanceCount_1
    int32_t ecx_4 = performanceCount_1 - *(result - 8)
    int32_t var_24
    int32_t var_14_1 = var_24
    int32_t edx_2 = sbb.d(var_24, *(result - 4), performanceCount_1 u< *(result - 8))
    int32_t temp2_1 = *(arg1 + 0x30)
    *(arg1 + 0x30) += ecx_4
    *(arg1 + 0x34) = adc.d(*(arg1 + 0x34), edx_2, temp2_1 + ecx_4 u< temp2_1)
    
    if (*(arg1 + 0x20) != result)
        result = (**(result - 0x10))(0)
        *(arg1 + 0x24) -= 0x10

fsbase->NtTib.ExceptionList = ExceptionList
return result
