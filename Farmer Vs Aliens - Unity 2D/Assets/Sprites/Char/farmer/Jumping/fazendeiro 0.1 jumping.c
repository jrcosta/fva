#include <stdint.h>

#define FAZENDEIRO_JUMP_FRAME_COUNT 3
#define FAZENDEIRO_JUMP_FRAME_WIDTH 32
#define FAZENDEIRO_JUMP_FRAME_HEIGHT 32

/* Piskel data for "fazendeiro jump" */

static const uint32_t fazendeiro_jump_data[3][1024] = {
{
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0xff000000, 0xff000000, 0xff38a7e6, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050586, 0xff000000, 0xff79cfff, 0xff000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050595, 0xff000000, 0xff000000, 0xff38a7e6, 0xff2f94cd, 0xff0c3943, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050595, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff38a7e6, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff052f38, 0xff052f38, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff79cfff, 0xff000000, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff0707c2, 0xff040468, 0xff577699, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff577699, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0707d1, 0xff0606a4, 0xff050595, 0xff000000, 0xff79cfff, 0xff577699, 0xff79cfff, 0xff858591, 0xff0d3c47, 0xff577699, 0xff9fdcfe, 0xff858591, 0xff0d3c47, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0xff9191a4, 0xffc4c4e0, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xffdbdbf6, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xffc4c4e0, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xff7676a2, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff9191a4, 0xffc4c4e0, 0xff7676a2, 0xff7676a2, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xffc4c4e0, 0xffc4c4e0, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff2c2826, 0xff413b38, 0xffafa6a1, 0xff9191a4, 0xff9191a4, 0xffafa6a1, 0xff473f3b, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff413b38, 0xff564c47, 0xff615c59, 0xffffffff, 0xffd5c7c0, 0xffafa6a1, 0xff473f3b, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff615c59, 0xffffffff, 0xffffffff, 0xffd5c7c0, 0xff413b38, 0xff3a3432, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff564c47, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xffdbdbf6, 0xffcccce6, 0xff2b241f, 0xff342d27, 0xff342d27, 0xff342d27, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff3b342e, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff615c59, 0xff615c59, 0xff615c59, 0xff615c59, 0xffdbdbf6, 0xffcccce6, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff473f3b, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff564c47, 0xffdbdbf6, 0xffcccce6, 0xffd5c7c0, 0xff2c2826, 0xffb0b0ca, 0xffb0b0ca, 0xff033652, 0xff004266, 0xff033652, 0xff004266, 0xff033652, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff2c2826, 0xff564c47, 0xff564c47, 0xff564c47, 0xffffffff, 0xffffffff, 0xffd5c7c0, 0xff2c2826, 0xffb0b0ca, 0xffb0b0ca, 0xffcccce6, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff413b38, 0xff413b38, 0xff103e65, 0xff104c7d, 0xff104c7d, 0xff3a3432, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff6c4731, 0xffcd7744, 0xffcd7744, 0xffcd7744, 0xffe79b6f, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff6c4731, 0xffcd7744, 0xffcd7744, 0xffaf5c2b, 0xffcd7744, 0xffd8946d, 0xffe4b295, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff615c59, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xff8e634a, 0xff6c4731, 0xffcd7744, 0xffb37856, 0xffe4b295, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0d3c47, 0xffaf5c2b, 0xffaf5c2b, 0xff16505d, 0xff6c4731, 0xff0c252b, 0xff0d3c47, 0xffe79b6f, 0xffaf5c2b, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0d3c47, 0xff16505d, 0xff0b313a, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0d3c47, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff16505d, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff38a7e6, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff79cfff, 0xff000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff38a7e6, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff38a7e6, 0xff2f94cd, 0xff0c3943, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff050595, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff38a7e6, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050595, 0xff050595, 0xff000000, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff052f38, 0xff052f38, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0xff000000, 0xff050586, 0xff000000, 0xff000000, 0xff79cfff, 0xff000000, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff040468, 0xff577699, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff577699, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0707c2, 0xff040468, 0xff79cfff, 0xff577699, 0xff79cfff, 0xff858591, 0xff0d3c47, 0xff577699, 0xff9fdcfe, 0xff858591, 0xff0d3c47, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0606a4, 0xff050595, 0xff000000, 0xff9191a4, 0xffc4c4e0, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xffdbdbf6, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0707d1, 0xff000000, 0x00000000, 0xff000000, 0xffc4c4e0, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xff7676a2, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0xff9191a4, 0xffc4c4e0, 0xff7676a2, 0xff7676a2, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xffc4c4e0, 0xffc4c4e0, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff2c2826, 0xff413b38, 0xffafa6a1, 0xff9191a4, 0xff9191a4, 0xffafa6a1, 0xffafa6a1, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff413b38, 0xff564c47, 0xff413b38, 0xffffffff, 0xffffffff, 0xffffffff, 0xffafa6a1, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff2b241f, 0xff38302b, 0xff38302b, 0xffd5c7c0, 0xffafa6a1, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff564c47, 0xff564c47, 0xff564c47, 0xff615c59, 0xff2b241f, 0xff2b241f, 0xff38302b, 0xff2b241f, 0xffafa6a1, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff615c59, 0xff2b241f, 0xff2b241f, 0xff38302b, 0xff2b241f, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff615c59, 0xffcccce6, 0xff2b241f, 0xff38302b, 0xff2b241f, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xffcccce6, 0xffdbdbf6, 0xff38302b, 0xff2c2826, 0xff2b241f, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff033652, 0xffcccce6, 0xffdbdbf6, 0xff38302b, 0xff473f3b, 0xff2b241f, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff615c59, 0xff000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff413b38, 0xff413b38, 0xffcd7744, 0xffcd7744, 0xffd8946d, 0xff033652, 0xff38302b, 0xff473f3b, 0xff2b241f, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff413b38, 0xff2c2826, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff6c4731, 0xffcd7744, 0xffcd7744, 0xffcd7744, 0xff6c4731, 0xffd8946d, 0xffdbdbf6, 0xff033652, 0xff38302b, 0xff473f3b, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff615c59, 0xff615c59, 0xff615c59, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xff8e634a, 0xff6c4731, 0xffcd7744, 0xffb37856, 0xffe4b295, 0xffdbdbf6, 0xff004266, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff6c4731, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xffcd7744, 0xff8e634a, 0xff6c4731, 0xffb37856, 0xffcd7744, 0xffcd7744, 0xffcd7744, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0d3c47, 0xffaf5c2b, 0xffaf5c2b, 0xffaf5c2b, 0xff6c4731, 0xff0c252b, 0xff0d3c47, 0xffcd7744, 0xffaf5c2b, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0d3c47, 0xff16505d, 0xff16505d, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0d3c47, 0xff16505d, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff16505d, 0xff000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
},
{
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff38a7e6, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff38a7e6, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff000000, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050586, 0xff000000, 0xff79cfff, 0xff000000, 0xff2f94cd, 0xff0c3943, 0xff38a7e6, 0xff79cfff, 0xff79cfff, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050595, 0xff000000, 0xff000000, 0xff38a7e6, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff38a7e6, 0xff79cfff, 0xff9fdcfe, 0xff0c3943, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff050595, 0xff2f94cd, 0xff79cfff, 0xff79cfff, 0xff2f94cd, 0xff38a7e6, 0xff052f38, 0xff052f38, 0xff052f38, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff79cfff, 0xff2f94cd, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff9fdcfe, 0xff000000, 0xff9fdcfe, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff79cfff, 0xff000000, 0xff79cfff, 0xff577699, 0xff2f94cd, 0xff79cfff, 0xff2f94cd, 0xff79cfff, 0xff38a7e6, 0xff9fdcfe, 0xff38a7e6, 0xff577699, 0xff000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff0707c2, 0xff040468, 0xff79cfff, 0xff577699, 0xff79cfff, 0xff858591, 0xff0d3c47, 0xff577699, 0xff9fdcfe, 0xff858591, 0xff0d3c47, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0707d1, 0xff0606a4, 0xff050595, 0xff000000, 0xff9191a4, 0xffc4c4e0, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xffdbdbf6, 0xffdbdbf6, 0xfff5f5f6, 0xff0c3943, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0xff000000, 0xffc4c4e0, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xff7676a2, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff9191a4, 0xffc4c4e0, 0xff7676a2, 0xff7676a2, 0xffdbdbf6, 0xffdbdbf6, 0xffdbdbf6, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xffc4c4e0, 0xffc4c4e0, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xffe6e6fc, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff2c2826, 0xff413b38, 0xffafa6a1, 0xff9191a4, 0xff9191a4, 0xffafa6a1, 0xffafa6a1, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff413b38, 0xff38302b, 0xff38302b, 0xffffffff, 0xffffffff, 0xffffffff, 0xffafa6a1, 0xff3a3432, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff615c59, 0xffffffff, 0xffffffff, 0xffd5c7c0, 0xff413b38, 0xff3a3432, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff564c47, 0xff564c47, 0xff564c47, 0xff2b241f, 0xff2b241f, 0xffdbdbf6, 0xffcccce6, 0xff2b241f, 0xff342d27, 0xff342d27, 0xff342d27, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff2b241f, 0xff3b342e, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff615c59, 0xff615c59, 0xff615c59, 0xff615c59, 0xffdbdbf6, 0xffcccce6, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff38302b, 0xff473f3b, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff564c47, 0xff564c47, 0xff564c47, 0xff564c47, 0xffdbdbf6, 0xffcccce6, 0xffd5c7c0, 0xff2c2826, 0xffb0b0ca, 0xffb0b0ca, 0xff033652, 0xff004266, 0xff033652, 0xff004266, 0xff033652, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff2c2826, 0xff564c47, 0xff564c47, 0xff564c47, 0xffffffff, 0xffffffff, 0xffd5c7c0, 0xff2c2826, 0xffb0b0ca, 0xffb0b0ca, 0xffcccce6, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff413b38, 0xff413b38, 0xff103e65, 0xff104c7d, 0xff104c7d, 0xff3a3432, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff615c59, 0xff000000, 0xff000000, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff6c4731, 0xffcd7744, 0xffcd7744, 0xffd8946d, 0xffd8946d, 0xffe4b295, 0xff000000, 0xff615c59, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff413b38, 0xff2c2826, 0xff2c2826, 0xff413b38, 0xff615c59, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xffcd7744, 0xffcd7744, 0xffcd7744, 0xffd8946d, 0xff000000, 0xff3a3432, 0xff615c59, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff615c59, 0xff615c59, 0xff615c59, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xffcd7744, 0xff6c4731, 0xff6c4731, 0xffcd7744, 0xffcd7744, 0xffe4b295, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xffcd7744, 0xff8e634a, 0xff8e634a, 0xff6c4731, 0xff8e634a, 0xffcd7744, 0xffcd7744, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0d3c47, 0xff8e634a, 0xffcd7744, 0xff16505d, 0xff000000, 0xff0c252b, 0xff0d3c47, 0xff8e634a, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0d3c47, 0xff0d3c47, 0xff16505d, 0xff000000, 0xff0b313a, 0xff0d3c47, 0xff0d3c47, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff0c252b, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff16505d, 0xff000000, 0xff0b313a, 0xff0b313a, 0xff0b313a, 0xff16505d, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff0c252b, 0xff16505d, 0xff000000, 0xff000000, 0xff000000, 0xff0c252b, 0xff16505d, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
}
};
