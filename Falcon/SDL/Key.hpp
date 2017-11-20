#pragma once

#include <SDL2/SDL.h>

namespace falcon::sdl::events
{

enum class Key
{
  Zero = SDLK_0,
  One = SDLK_1,
  Two = SDLK_2,
  Three = SDLK_3,
  Four = SDLK_4,
  Five = SDLK_5,
  Six = SDLK_6,
  Seven = SDLK_7,
  Eight = SDLK_8,
  Nine = SDLK_9,
  A = SDLK_a,
  B = SDLK_b,
  C = SDLK_c,
  D = SDLK_d,
  E = SDLK_e,
  F = SDLK_f,
  G = SDLK_g,
  H = SDLK_h,
  I = SDLK_i,
  J = SDLK_j,
  K = SDLK_k,
  L = SDLK_l,
  M = SDLK_m,
  N = SDLK_n,
  O = SDLK_o,
  P = SDLK_p,
  Q = SDLK_q,
  R = SDLK_r,
  S = SDLK_s,
  T = SDLK_t,
  U = SDLK_u,
  V = SDLK_v,
  W = SDLK_w,
  X = SDLK_x,
  Y = SDLK_y,
  Z = SDLK_z,
  Up = SDLK_UP,
  Down = SDLK_DOWN,
  Left = SDLK_LEFT,
  Right = SDLK_RIGHT,
  Space = SDLK_SPACE,
  Backspace = SDLK_BACKSPACE,
  Return = SDLK_RETURN,
  Escape = SDLK_ESCAPE
};

} // namespace falcon::sdl::events