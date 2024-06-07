#include <gtkmm/enums.h>
#include <iostream>
#include "slot.hpp"

Slot::Slot(std::string title, std::string urlTitle, std::string url)
{
	// Set variables
	m_url = url;

	// Favicon
	m_favicon.set_from_icon_name("gtk4-demo");
	m_favicon.set_icon_size(Gtk::IconSize::LARGE);
	m_favicon.set_margin(5);

	// Setting contents
	m_title.set_text(title);
	m_urlTitle.set_text(urlTitle);
	// Stacking the labels in a box
	m_labelBox.set_orientation(Gtk::Orientation::VERTICAL);
	m_labelBox.append(m_title);
	m_labelBox.append(m_urlTitle);
	m_labelBox.set_expand();

	// Setting up the URL open button
	m_urlButtonImage.set_from_icon_name("window-new-symbolic");
	m_urlButton.set_child(m_urlButtonImage);
	m_urlButton.set_margin(5);
	m_urlButton.set_margin_end(15);
	m_urlButton.set_css_classes({"circular"});
	m_urlButton.signal_clicked().connect(sigc::mem_fun(*this, &Slot::on_urlButton_click));

	m_fullBox.append(m_favicon);
	m_fullBox.append(m_labelBox);
	m_fullBox.append(m_urlButton);
};

Slot::~Slot() {}

void Slot::on_urlButton_click()
{
	std::string command = "xdg-open " + m_url;
	std::system(command.c_str());
}
