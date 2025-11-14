// 函数: sub_6fb8d0
// 地址: 0x6fb8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_8 = 0xffffffff
int32_t var_c = 0x79bb0c
int32_t var_10 = 0x70c1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_a4
int32_t* var_1c = &var_a4
var_a4 = *(arg1 + 0x37f0)
int32_t var_8_1 = 0
void* var_a0 = nullptr
int32_t result = 0
int32_t var_8_2

if (*(arg1 + 0x4e04) == 0)
    char* lpString = "Intel(R) JPEG Library, version %s"
    void var_88
    var_a0 = &var_88
    data_797c44(&var_88, 0x50)
    void* var_38_1 = &data_78d5c0
    int32_t eax_7 = lstrlenA(lpString)
    int32_t eax_9 = data_797c58(var_a0 + 4, lpString, *(var_38_1 + 0x14), &var_a4)
    sub_6fb760(0xfe, &var_a0)
    sub_6fb780(eax_9 + 3, &var_a0)
    
    if (eax_9 s<= eax_7)
        var_8_2 = 0xffffffff
    else
        int32_t result_2 = (*(var_a4 + 0x5c))(&var_88, eax_9 + 5, arg1 + 0x37e8, &var_a4)
        result = result_2
        
        if (result_2 == 0)
            var_8_2 = 0xffffffff
else
    uint32_t edx_1 = zx.d(*(arg1 + 0x4e08))
    
    if (edx_1 == 0)
        var_8_2 = 0xffffffff
    else
        if (edx_1 s> 0xfffb)
            *(arg1 + 0x4e08) = 0xfffb
            edx_1 = 0xfffb
        
        int32_t* var_a8_1 = &var_a4
        void* eax_2 = operator new(edx_1 + 4)
        var_a0 = eax_2
        
        if (eax_2 != 0)
            void* var_94 = eax_2
            data_797c44(eax_2, edx_1 + 4)
            sub_6fb760(0xfe, &var_94)
            sub_6fb780(edx_1 + 2, &var_94)
            char* i = nullptr
            int32_t var_90_1 = 0
            
            if (zx.d(*(arg1 + 0x4e08)) s> 0)
                do
                    uint32_t ecx_1
                    ecx_1.b = i[*(arg1 + 0x4e04)]
                    *(i + var_94) = ecx_1.b
                    i = &i[1]
                    char* i_1 = i
                while (i s< zx.d(*(arg1 + 0x4e08)))
            
            int32_t result_1 = (*(var_a4 + 0x5c))(var_a0, edx_1 + 4, arg1 + 0x37e8, &var_a4)
            result = result_1
            
            if (result_1 == 0)
                int32_t* var_a8_6 = &var_a4
                void* var_ac_5 = var_a0
                sub_6b4d5b()
                var_8_2 = 0xffffffff
        else
            result = 0xfffffffb
fsbase->NtTib.ExceptionList = ExceptionList
return result
