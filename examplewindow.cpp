#include <iostream>

#include "examplewindow.h"

ExampleWindow::ExampleWindow()
{
	set_title("Gtk::Application example");

	// We can use add_action because Gtk::ApplicationWindow derives from ActionMap.
	// This Action Map uses a "win." prefix for the actions.
	// Therefore, for instance, "win.new", is used in ExampleApplication::on_startup()
	// to layout the menu.
	add_action("new",   sigc::mem_fun(*this, &ExampleWindow::on_action_something));
	add_action("close", sigc::mem_fun(*this, &ExampleWindow::on_action_close));
	add_action("cut",   sigc::mem_fun(*this, &ExampleWindow::on_action_something));
	add_action("copy",  sigc::mem_fun(*this, &ExampleWindow::on_action_something));
	add_action("paste", sigc::mem_fun(*this, &ExampleWindow::on_action_something));
}

void ExampleWindow::on_action_something()
{
	std::cout << G_STRFUNC << std::endl;
}

void ExampleWindow::on_action_close()
{
	std::cout << G_STRFUNC << std::endl;

	hide();
}

