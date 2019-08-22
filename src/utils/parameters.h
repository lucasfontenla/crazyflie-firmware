#ifndef parameters_h
#define parameters_h

// Physical constants
const float pi = 3.1416f;
const float g = 9.81f;              // m/s^2

// Quadcopter dimensions
const float m = 30e-3f;             // kg
const float I_xx = 16.0e-6f;        // kg.m^2
const float I_yy = 16.0e-6f;        // kg.m^2
const float I_zz = 29.0e-6f;        // kg.m^2
const float l = 33e-3f;             // m

// Quadcopter constants
const float kl = 1.927e-8;          // N.s²/rad²
const float kd = 3.655e-10;         // N.m.s²/rad²

#endif