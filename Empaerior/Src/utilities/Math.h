#pragma once
#include "defines/Defines.h"


#define PI    3.1415926535897932384626433832795028

namespace Empaerior
{
	namespace Math {

		//dergrees to radians
		inline Empaerior::fl_point d2r(Empaerior::fl_point d)
		{
			return (d / 180.0f) * Empaerior::fl_point(PI);
		}

		//sin & cos in degress
		inline Empaerior::fl_point sind(Empaerior::fl_point x)
		{

			return std::sin(d2r(x));
		}


		inline Empaerior::fl_point cosd(Empaerior::fl_point x)
		{
			return std::cos(d2r(x));
		}







	}

}