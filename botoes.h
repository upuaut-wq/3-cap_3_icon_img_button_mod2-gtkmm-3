#ifndef GTKMM_BOTOES_H
#define GTKMM_BOTOES_H

#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <glibmm/refptr.h>
#include <gdkmm/pixbuf.h>
#include <gtkmm/togglebutton.h>
#include <gtkmm/frame.h>

class Botoes:public Gtk::Window{
    public:
        Botoes();
        virtual ~Botoes();
    private:
        //Sinais
        void on_btn1_action();
        void on_btn2_action();
        void on_btn3_action();
        void on_btn4_action();
        void on_btn5_action();
        void on_btn6_action();
        void on_btn7_action();
        void on_btn8_action();

        //Estado de Alinhamento
        Gtk::Align v_al;
        Gtk::Align h_al;

        //Box
        Gtk::Box m_box_main;
            Gtk::Box m_box1;
                Gtk::Box m_box1_1;
                Gtk::Box m_box1_2;
                Gtk::Box m_vbox1;
                Gtk::Box m_hbox1;

        //Boteos
        Gtk::Frame m_f1;
        Glib::RefPtr<Gdk::Pixbuf> ref1;
        Gtk::Image img1; 
        Gtk::Button m_btn1;
        Glib::RefPtr<Gdk::Pixbuf> ref2;
        Gtk::Image img2;
        Gtk::Button m_btn2;
        Glib::RefPtr<Gdk::Pixbuf> ref3;
        Gtk::Image img3;
        Gtk::Button m_btn3;
        Glib::RefPtr<Gdk::Pixbuf> ref4;
        Gtk::Image img4;
        Gtk::Button m_btn4;
        Gtk::Frame m_f2;
        Glib::RefPtr<Gdk::Pixbuf> ref5;
        Gtk::Image img5; 
        Gtk::Button m_btn5;
        Glib::RefPtr<Gdk::Pixbuf> ref6;
        Gtk::Image img6;
        Gtk::Button m_btn6;
        Glib::RefPtr<Gdk::Pixbuf> ref7;
        Gtk::Image img7;
        Gtk::Button m_btn7;
        Glib::RefPtr<Gdk::Pixbuf> ref8;
        Gtk::Image img8;
        Gtk::Button m_btn8;

        Gtk::Button m_btn_img;
};

#endif //GTKMM_BOTOES_H