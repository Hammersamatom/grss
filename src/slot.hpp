#ifndef RSS_SLOT
#define RSS_SLOT

#include <cstdlib>
#include <string>

#include <gtkmm/widget.h>
#include <gtkmm/box.h>
#include <gtkmm/enums.h>
#include <gtkmm/label.h>
#include <gtkmm/image.h>
#include <gtkmm/button.h>

class Slot
{
public:
	std::string m_url;
public:
	Gtk::Image m_favicon;

	Gtk::Label m_title;
	Gtk::Label m_urlTitle;	
	Gtk::Box   m_labelBox;

	Gtk::Button m_urlButton;
	Gtk::Image m_urlButtonImage;

	Gtk::Box m_fullBox;
public:
	Slot(std::string title = "Default Title Text", std::string urlTitle = "Default URL Text", std::string url = "http://google.com");
	~Slot();
public:
	void on_urlButton_click();
};
#endif
