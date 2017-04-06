//
//  Key.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Key_h
#define Key_h

#include <SDL2/SDL.h>

namespace Falcon
{

namespace Events
{

enum Key
{
  ZERO = SDLK_0,
  ONE = SDLK_1,
  TWO = SDLK_2,
  THREE = SDLK_3,
  FOUR = SDLK_4,
  FIVE = SDLK_5,
  SIX = SDLK_6,
  SEVEN = SDLK_7,
  EIGHT = SDLK_8,
  NINE = SDLK_9,
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
  UP = SDLK_UP,
  DOWN = SDLK_DOWN,
  LEFT = SDLK_LEFT,
  RIGHT = SDLK_RIGHT,
  SPACE = SDLK_SPACE,
  BACKSPACE = SDLK_BACKSPACE,
  RETURN = SDLK_RETURN
};

} // namespace Events

} // namespace Falcon

#endif /* Key_h */
