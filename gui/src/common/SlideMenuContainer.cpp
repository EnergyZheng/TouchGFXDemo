#include <gui/common/SlideMenuContainer.hpp>
#include <touchgfx/EasingEquations.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>

using namespace touchgfx;

SlideMenuContainer::SlideMenuContainer():
	currentState(NO_ANIMATION),
	menuChangeAction(0)
{
	touchgfx::Application::getInstance()->registerTimerWidget(this);
	setTouchable(true);

}

SlideMenuContainer::~SlideMenuContainer()
{
	touchgfx::Application::getInstance()->unregisterTimerWidget(this);
}

void SlideMenuContainer::handleTickEvent()
{
}
void SlideMenuContainer::handleClickEvent(const ClickEvent& evt)
{

}
void SlideMenuContainer::handleDragEvent(const DragEvent& evt)
{
	//touchgfx_printf("SlideMenuContainer->getDeltaX :%d   \r\n", evt.getDeltaX());
	
}
void SlideMenuContainer::handleGestureEvent(const GestureEvent& evt)
{
	if (evt.getType() == evt.SWIPE_VERTICAL)
	{
		//touchgfx_printf("SlideMenuContainer->handleGestureEvent   \r\n");
		if (evt.getVelocity() < 0)
		{
			currentState = ANIMATE_COLLAPSE;
			if (menuChangeAction && menuChangeAction->isValid())
			{
				menuChangeAction->execute(*this);
			}

		}
		else if (evt.getVelocity() > 0)
		{
			currentState = ANIMATE_SHOW;
			if (menuChangeAction && menuChangeAction->isValid())
			{
				menuChangeAction->execute(*this);
			}
		}
	}
}