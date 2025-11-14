// 函数: sub_60ad80
// 地址: 0x60ad80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg2

if (arg1 == ebp)
    return 

int32_t ecx_2 = ebp[1] - *ebp
int32_t eax
int32_t edx_1
edx_1:eax = muls.dp.d(0x84210843, ecx_2)
int32_t edx_3 = (edx_1 + ecx_2) s>> 6
int32_t esi_3 = ecx_2 s/ 0x7c

if (edx_3 u>> 0x1f == neg.d(edx_3))
    sub_609ae0(arg1, &arg2, *arg1, arg1[1])
    return 

void* i_1 = *arg1
void* ecx_5 = arg1[1] - i_1
int32_t eax_3
void* edx_4
edx_4:eax_3 = muls.dp.d(0x84210843, ecx_5)
int32_t ecx_8 = ecx_5 s/ 0x7c

if (esi_3 u<= ecx_8)
    int32_t* ecx_9 = arg2
    int32_t* var_18_2 = ecx_9
    void* i_2 = i_1
    int32_t var_20_2 = ebp[1]
    int32_t* eax_6 = sub_60b2d0(*ebp, (edx_4 + ecx_5) s>> 6, ecx_9)
    int32_t ebx_1 = arg1[1]
    int32_t* esi_4 = eax_6
    
    if (eax_6 != ebx_1)
        do
            sub_607f00(esi_4)
            esi_4 = &esi_4[0x1f]
        while (esi_4 != ebx_1)
    
    arg1[1] = (ebp[1] - *ebp) s/ 0x7c * 0x7c + *arg1
    return 

int32_t* edx_11 = arg1[2] - i_1
arg2 = edx_11
int32_t eax_14
int32_t edx_12
edx_12:eax_14 = muls.dp.d(0x84210843, edx_11)
int32_t edx_14 = (edx_12 + arg2) s>> 6

if (esi_3 u<= (edx_14 u>> 0x1f) + edx_14)
    void* eax_18 = *ebp
    void* esi_5 = eax_18 + ecx_8 * 0x7c
    int32_t* ecx_13 = arg2
    int32_t* var_18_3 = ecx_13
    void* i_3 = i_1
    void* var_20_3 = esi_5
    sub_60b2d0(eax_18, edx_14, ecx_13)
    int32_t* edx_15 = arg2
    int32_t* eax_19 = arg1[1]
    int32_t* var_24 = edx_15
    arg1[1] = sub_60af50(eax_19, edx_15, esi_5, ebp[1], eax_19)
    return 

if (i_1 != 0)
    void* i = i_1
    
    for (int32_t ebx_2 = arg1[1]; i != ebx_2; i += 0x7c)
        sub_607f00(i)
    
    int32_t var_18_4 = *arg1
    sub_6b4d5b()

if (sub_60af10((ebp[1] - *ebp) s/ 0x7c, arg1) == 0)
    return 

int32_t* eax_28 = *arg1
int32_t edx_19 = ebp[1]
int32_t* var_18_5 = arg2
arg1[1] = sub_60af50(eax_28, edx_19, *ebp, edx_19, eax_28)
