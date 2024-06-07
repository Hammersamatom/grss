#ifndef GTK_LEARN_H
#define GTK_LEARN_H

#include <vector>

#include <gtkmm/button.h>
#include <gtkmm/listboxrow.h>
#include <gtkmm/window.h>
#include <gtkmm/listbox.h>
#include <gtkmm/box.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/label.h>

#include "slot.hpp"

class MainWindow : public Gtk::Window
{
	std::vector<Slot*> slots;
	protected:
	Gtk::ScrolledWindow m_scroll;
	Gtk::ListBox m_testListBox;
	public:
	MainWindow()
	{
		slots.push_back(new Slot("Hello world", "testing, testing"));
		slots.push_back(new Slot("I exist", "Therefore I am", "http://news.ycombinator.com"));
		slots.push_back(new Slot("Aye Captain", "Nay Captain", "http://youtube.com"));

		for (auto &slot : slots)
			m_testListBox.append(slot->m_fullBox);

		m_scroll.set_child(m_testListBox);
		set_child(m_scroll);
	};
	~MainWindow() {};
};
#endif
