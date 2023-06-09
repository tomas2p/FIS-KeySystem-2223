#pragma once
// Funciones utiles para main.cpp
#include <fstream>
#include <iostream>

#include "keysystem.hpp"

// Directivas para la función Pausar() que depende del SO.
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// Limpia la pantalla
inline void clear() { system("clear"); }

// Lee el menu de menus.txt (de linea de inicio a linea final)
void read(const int& start, const int& end);

// Usa Read para leer el menu de login
inline void readLoginMenu() { read(0, 8); }
// Usa Read para leer el menu de administrador general
inline void readGeneralAdminMenu() { read(8, 19); }
// Usa Read para leer el menu de administrador cerradura
inline void readKeyAdminMenu() { read(19, 30); }
// Usa Read para leer el menu de usuario
inline void readUserMenu() { read(30, 40); }

// Opciones menu login
void loginMenu(KeySystem& system, const unsigned& option);
// Opciones menu general administrador
void generalAdminMenu(KeySystem& system, const unsigned& option);
// Opciones menu cerradura administrador
void keyAdminMenu(KeySystem& system, const unsigned& option);
// Opciones menu usuario
void userMenu(KeySystem& system, const unsigned& option);

// Muestra el menu correspondiente o la logica (0=text; 1=logic)
void whichMenu(const unsigned& menu, const bool& logic, KeySystem& system,
               const unsigned& option);

// Opciones menu (0=loginMenu; 1=generalAdminMenu; 2=keyAdminMenu; 3=userMenu)
void optionsMenu(KeySystem& system, const unsigned& menu, const unsigned& id_user);