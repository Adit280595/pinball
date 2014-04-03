/*
* Copyright (c) 2006-2009 Erin Catto http://www.box2d.org
*
* This software is provided 'as-is', without any express or implied
* warranty.  In no event will the authors be held liable for any damages
* arising from the use of this software.
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
* 1. The origin of this software must not be misrepresented; you must not
* claim that you wrote the original software. If you use this software
* in a product, an acknowledgment in the product documentation would be
* appreciated but is not required.
* 2. Altered source versions must be plainly marked as such, and must not be
* misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*/

/* 
 * Base code for CS 296 Software Systems Lab 
 * Department of Computer Science and Engineering, IIT Bombay
 * Instructor: Parag Chaudhuri
 */

#ifndef _DOMINOS_HPP_
#define _DOMINOS_HPP_

#ifndef DEGTORAD
#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f
#endif

//structure to store current surface velocity of a fixture

namespace cs296
{
  //! This is the class that sets up the Box2D simulation world
  //! Notice the public inheritance - why do we inherit the base_sim_t class?
  class dominos_t : public base_sim_t
  {
  public:
    dominos_t();
	
	b2Body* lflipstatv;
	b2Body* lflipstatd;
	b2Body* rflipstatv;
	b2Body* rflipstatd;
	b2Body* lflipper;
	b2Body* rflipper;
	b2Body* rightsep1;
	b2Body* rightsep2;
	b2Body* launcher;
	b2Body* ball;
	b2Body* stopper;
	b2Body* temp2;
	b2Body* temp1;
	b2Body* temp;
	b2Body* horz;
	b2Body* hormov;
	b2Body* vermov;
	b2RevoluteJoint* lflip;
	b2RevoluteJoint* rflip;
	b2PrismaticJoint* right;
	b2PrismaticJoint* up;
    void keyboard(unsigned char key);
    void keyboardUp(unsigned char key);
	static base_sim_t* create()
	{
		return new dominos_t;
	}
	
	
  };
}
  
#endif
