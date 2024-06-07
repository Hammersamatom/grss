#include <gtkmm/application.h>
#include "mainwindow.hpp"

int main(int argc, char* argv[])
{
	auto app = Gtk::Application::create("test.test.example");
	return app->make_window_and_run<MainWindow>(argc, argv);
}
