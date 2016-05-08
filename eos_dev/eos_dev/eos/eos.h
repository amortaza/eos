#pragma once

#include "bellina/bl-node.h"

namespace eos {
	void render(bl::Node *);

	namespace _ {
		void renderLabel(bl::Node *node, int dx, int dy);
		void renderBorder(bl::Node *node, bool mustTopCanvas, int deltaX, int deltaY);
	}
}
