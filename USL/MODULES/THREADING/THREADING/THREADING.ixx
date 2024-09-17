module;
#include "Windows.h"
#include "processthreadsapi.h"
export module THREADING;
namespace Threading {
	class _Internal__Thread {
		
	};
}
export namespace Threading {
	class Thread {

	};
	Thread Create_Thread(){
		return Thread();
	}
}