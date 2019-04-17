#include <iostream>
using namespace std;

class Entity {
public:
	Entity() {
		m_x = 5;
	}
	int m_x;
	virtual void print() {
		cout << "Entity: " <<m_x <<endl;
	}
};

class Player : public Entity {
public:
	void print() {
		cout << "Player: " << m_x << endl;
	}

	Player() {
		m_x = 6;
	}
};


void virtualFunctions() {

	Player* ply = new Player;
	ply->print();
	Entity* ent = (Entity*)(ply);
	ent->print();
	
}
/*
.LC0:
		.string "Entity"
Entity::print():
		push    rbp
		mov     rbp, rsp
		sub     rsp, 16
		mov     QWORD PTR [rbp-8], rdi
		mov     esi, OFFSET FLAT:.LC0
		mov     edi, OFFSET FLAT:_ZSt4cout
		call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
		mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
		mov     rdi, rax
		call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
		nop
		leave
		ret
.LC1:
		.string "Player"
Player::print():
		push    rbp
		mov     rbp, rsp
		sub     rsp, 16
		mov     QWORD PTR [rbp-8], rdi
		mov     esi, OFFSET FLAT:.LC1
		mov     edi, OFFSET FLAT:_ZSt4cout
		call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
		mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
		mov     rdi, rax
		call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
		nop
		leave
		ret
Entity::Entity() [base object constructor]:
		push    rbp
		mov     rbp, rsp
		mov     QWORD PTR [rbp-8], rdi
		mov     edx, OFFSET FLAT:vtable for Entity+16
		mov     rax, QWORD PTR [rbp-8]
		mov     QWORD PTR [rax], rdx
		nop
		pop     rbp
		ret
Player::Player() [base object constructor]:
		push    rbp
		mov     rbp, rsp
		sub     rsp, 16
		mov     QWORD PTR [rbp-8], rdi
		mov     rax, QWORD PTR [rbp-8]
		mov     rdi, rax
		call    Entity::Entity() [base object constructor]
		mov     edx, OFFSET FLAT:vtable for Player+16
		mov     rax, QWORD PTR [rbp-8]
		mov     QWORD PTR [rax], rdx
		nop
		leave
		ret
virtualFunctions():
		push    rbp
		mov     rbp, rsp
		push    rbx
		sub     rsp, 24
		mov     edi, 8
		call    operator new(unsigned long)
		mov     rbx, rax
		mov     rdi, rbx
		call    Player::Player() [complete object constructor]
		mov     QWORD PTR [rbp-32], rbx
		mov     rdx, QWORD PTR [rbp-32]
		mov     rax, QWORD PTR [rbp-32]
		mov     rax, QWORD PTR [rax]
		mov     rax, QWORD PTR [rax]
		mov     rdi, rdx
		call    rax
		mov     rax, QWORD PTR [rbp-32]
		mov     QWORD PTR [rbp-24], rax
		mov     rax, QWORD PTR [rbp-24]
		mov     rax, QWORD PTR [rax]
		mov     rax, QWORD PTR [rax]
		mov     rdx, QWORD PTR [rbp-24]
		mov     rdi, rdx
		call    rax
		nop
		add     rsp, 24
		pop     rbx
		pop     rbp
		ret
vtable for Player:
		.quad   0
		.quad   typeinfo for Player
		.quad   Player::print()
vtable for Entity:
		.quad   0
		.quad   typeinfo for Entity
		.quad   Entity::print()
typeinfo for Player:
		.quad   vtable for __cxxabiv1::__si_class_type_info+16
		.quad   typeinfo name for Player
		.quad   typeinfo for Entity
typeinfo name for Player:
		.string "6Player"
typeinfo for Entity:
		.quad   vtable for __cxxabiv1::__class_type_info+16
		.quad   typeinfo name for Entity
typeinfo name for Entity:
		.string "6Entity"
__static_initialization_and_destruction_0(int, int):
		push    rbp
		mov     rbp, rsp
		sub     rsp, 16
		mov     DWORD PTR [rbp-4], edi
		mov     DWORD PTR [rbp-8], esi
		cmp     DWORD PTR [rbp-4], 1
		jne     .L8
		cmp     DWORD PTR [rbp-8], 65535
		jne     .L8
		mov     edi, OFFSET FLAT:_ZStL8__ioinit
		call    std::ios_base::Init::Init() [complete object constructor]
		mov     edx, OFFSET FLAT:__dso_handle
		mov     esi, OFFSET FLAT:_ZStL8__ioinit
		mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
		call    __cxa_atexit
.L8:
		nop
		leave
		ret
_GLOBAL__sub_I_virtualFunctions():
		push    rbp
		mov     rbp, rsp
		mov     esi, 65535
		mov     edi, 1
		call    __static_initialization_and_destruction_0(int, int)
		pop     rbp
		ret
*/