#include "pch.h"
#include "State.h"
#include "Application.h"



Empaerior::State::State()

{
	
	

}


	
void Empaerior::State::set_camera(const Empaerior::Int_Rect& rect)
{
	camera.set_dimensions(rect.w,rect.h);
	camera.set_position(rect.x, rect.y);
}


 