#ifndef SLIDEMENU_CONTAINER_HPP
#define SLIDEMENU_CONTAINER_HPP

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/ListLayout.hpp>

using namespace touchgfx;

class SlideMenuContainer : public touchgfx::Container
{
public:
	SlideMenuContainer();
	virtual ~SlideMenuContainer();

	virtual void handleTickEvent();
	virtual void handleClickEvent(const touchgfx::ClickEvent& evt);
	virtual void handleDragEvent(const touchgfx::DragEvent& evt);
	virtual void handleGestureEvent(const touchgfx::GestureEvent& evt);

	
	uint8_t getSelectedScreen()
	{
		return currentState;
	}
	void setMenuChangeEndedCallback(touchgfx::GenericCallback<const SlideMenuContainer&>& callback)
	{
		menuChangeAction = &callback;
	}
private:
	enum States
	{
		ANIMATE_COLLAPSE,
		ANIMATE_SHOW,
		NO_ANIMATION
	} currentState;

	GenericCallback<const SlideMenuContainer&>* menuChangeAction;

};



#endif