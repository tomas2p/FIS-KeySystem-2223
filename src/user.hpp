#pragma once
// Gestión de la clase user (user.hpp)
#include <iostream>
#include <string>

class User {
 public:
  // Constructor vacio
  User() : id_(0) {}
  // Constructor usuario normal
  User(const std::string& name, const std::string& password)
      : name_(name), password_(password), id_(0) {}
  // Constructor usuario normal
  User(const std::string& name, const std::string& password,
       const bool& access_level)
      : name_(name), password_(password), access_level_(access_level), id_(0) {}

  // Getters y Setters
  std::string getName() const { return name_; }
  void setName(const std::string& name) { name_ = name; }
  std::string getPassword() const { return password_; }
  void setPassword(const std::string& password) { password_ = password; }
  unsigned getId() const { return id_; }
  void setId(const unsigned& id) { id_ = id; }
  bool getAccessLevel() const { return access_level_; }
  void setAccessLevel(const bool& access_level) {
    access_level_ = access_level;
  }

 private:
  // Nombre del usuario
  std::string name_;
  // Contraseña del usuario
  std::string password_;
  // ID del usuario
  unsigned id_;
  // Nivel de acceso del usuario (0=normal; 1=administrador)
  bool access_level_;
};