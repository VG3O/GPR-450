/*
	Copyright 2011-2025 Daniel S. Buckstein

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

/*
	animal3D SDK: Minimal 3D Animation Framework
	By Daniel S. Buckstein

	a3_Scene_Animation-unload.c/.cpp
	Demo mode implementations: animation scene.

	********************************************
	*** UNLOADING FOR ANIMATION SCENE MODE   ***
	********************************************
*/

//-----------------------------------------------------------------------------

#include "../a3_Scene_Animation.h"

#include "../a3_DemoState.h"


//-----------------------------------------------------------------------------

void a3animation_unload(a3_DemoState const* demoState, a3_Scene_Animation* scene)
{
//-----------------------------------------------------------------------------
//****TO-DO-ANIM-PREP-4: UNLOAD BLEND
//-----------------------------------------------------------------------------
	


//-----------------------------------------------------------------------------
//****END-TO-DO-PREP-4
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//****TO-DO-ANIM-PREP-2: UNLOAD SKELETAL
//-----------------------------------------------------------------------------
	


//-----------------------------------------------------------------------------
//****END-TO-DO-PREP-2
//-----------------------------------------------------------------------------

	// scene graph
	a3hierarchyStateRelease(scene->sceneGraphState);
	a3hierarchyRelease(scene->sceneGraph);

	// clips
	a3clipPoolRelease(scene->clipPool);
}


void a3animation_unloadValidate(a3_DemoState* demoState, a3_Scene_Animation* scene)
{

}


//-----------------------------------------------------------------------------
