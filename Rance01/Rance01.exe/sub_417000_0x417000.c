// 函数: sub_417000
// 地址: 0x417000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4_1 = ecx
int32_t eax_2 = (arg3 - arg1) s>> 2
int32_t eax_47

if (eax_2 s<= 0x28)
    if (sub_416ef0(*arg2, *arg1) != 0)
        int32_t eax_51 = *arg2
        *arg2 = *arg1
        *arg1 = eax_51
    
    if (sub_416ef0(*arg3, *arg2) != 0)
        int32_t eax_54 = *arg3
        *arg3 = *arg2
        *arg2 = eax_54
    
    eax_47 = sub_416ef0(*arg2, *arg1)
    
    if (eax_47.b != 0)
        eax_47 = *arg2
        *arg2 = *arg1
        *arg1 = eax_47
else
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(eax_2 + 1)
    int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
    int32_t ebx_1 = eax_6 << 2
    
    if (sub_416ef0(arg1[eax_6], *arg1) != 0)
        int32_t eax_10 = arg1[eax_6]
        arg1[eax_6] = *arg1
        *arg1 = eax_10
    
    if (sub_416ef0(arg1[eax_6 * 2], arg1[eax_6]) != 0)
        int32_t eax_13 = arg1[eax_6 * 2]
        arg1[eax_6 * 2] = arg1[eax_6]
        arg1[eax_6] = eax_13
    
    if (sub_416ef0(arg1[eax_6], *arg1) != 0)
        int32_t eax_16 = arg1[eax_6]
        arg1[eax_6] = *arg1
        *arg1 = eax_16
    
    void* ebp_3 = arg2 - ebx_1
    
    if (sub_416ef0(*arg2, *ebp_3) != 0)
        int32_t eax_19 = *arg2
        *arg2 = *ebp_3
        *ebp_3 = eax_19
    
    if (sub_416ef0(arg2[eax_6], *arg2) != 0)
        int32_t eax_22 = arg2[eax_6]
        arg2[eax_6] = *arg2
        *arg2 = eax_22
    
    if (sub_416ef0(*arg2, *ebp_3) != 0)
        int32_t eax_25 = *arg2
        *arg2 = *ebp_3
        *ebp_3 = eax_25
    
    int32_t* eax_27 = arg3 - (eax_6 << 3)
    int32_t* ebp_5 = arg3 - ebx_1
    
    if (sub_416ef0(*ebp_5, *eax_27) != 0)
        int32_t eax_30 = *ebp_5
        *ebp_5 = *eax_27
        *eax_27 = eax_30
    
    if (sub_416ef0(*arg3, *ebp_5) != 0)
        int32_t eax_34 = *arg3
        *arg3 = *ebp_5
        *ebp_5 = eax_34
    
    if (sub_416ef0(*ebp_5, *eax_27) != 0)
        int32_t eax_38 = *ebp_5
        *ebp_5 = *eax_27
        *eax_27 = eax_38
    
    if (sub_416ef0(*arg2, arg1[eax_6]) != 0)
        int32_t eax_42 = *arg2
        *arg2 = arg1[eax_6]
        arg1[eax_6] = eax_42
    
    if (sub_416ef0(*ebp_5, *arg2) != 0)
        int32_t eax_45 = *ebp_5
        *ebp_5 = *arg2
        *arg2 = eax_45
    
    eax_47 = sub_416ef0(*arg2, arg1[eax_6])
    
    if (eax_47.b != 0)
        int32_t eax_48 = *arg2
        *arg2 = arg1[eax_6]
        arg1[eax_6] = eax_48
        return eax_48

return eax_47
