#include <iostream>
#include <iostream>
#include "botoes.h"


Botoes::Botoes(){
    //Window
    this->add(this->m_box_main);
    this->set_border_width(5);
    
    //Box
    this->m_box_main.set_orientation(Gtk::ORIENTATION_VERTICAL);
    this->m_box1.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1.set_spacing(5);
    this->m_box1_1.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1_1.set_valign(Gtk::ALIGN_CENTER);
    this->m_box1_2.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1_2.set_valign(Gtk::ALIGN_CENTER);

    //Config Frame
    this->m_f1.set_label(" Horizontal ");
    this->m_f1.set_label_align(0.2);
    this->m_f2.set_label(" Vertical ");
    this->m_f2.set_label_align(0.2);


    //Botoes -> vox
    this->m_vbox1.set_border_width(5);
    this->m_hbox1.set_border_width(5);
    this->m_box1_2.pack_start(this->m_f1);
    this->m_box1_2.pack_start(this->m_f2);
    this->m_f1.add(this->m_vbox1);
    this->m_f2.add(this->m_hbox1);
    this->m_vbox1.pack_start(this->m_btn1);
    this->m_vbox1.pack_start(this->m_btn2);
    this->m_vbox1.pack_start(this->m_btn3);
    this->m_vbox1.pack_start(this->m_btn4);
    this->m_hbox1.pack_start(this->m_btn5);
    this->m_hbox1.pack_start(this->m_btn6);
    this->m_hbox1.pack_start(this->m_btn7);
    this->m_hbox1.pack_start(this->m_btn8);

    //Botoes
    this->ref1= Gdk::Pixbuf::create_from_file("img/d.svg",24,24,false);
    this->m_btn1.set_tooltip_text("Gtk::POS_RIGHT");
    this->img1.set(this->ref1);
    this->m_btn1.set_image(this->img1);
    this->m_btn1.set_relief(Gtk::RELIEF_NONE);
    this->m_btn1.set_state_flags(Gtk::STATE_FLAG_CHECKED);
    this->m_btn1.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn1_action));

    this->ref2= Gdk::Pixbuf::create_from_file("img/e.svg",24,24,false);
    this->m_btn2.set_tooltip_text("Gtk::POS_LEFT");
    this->img2.set(this->ref2);
    this->m_btn2.set_image(img2);
    this->m_btn2.set_relief(Gtk::RELIEF_NONE);
    this->m_btn2.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn2_action));

    this->ref3= Gdk::Pixbuf::create_from_file("img/t.svg",24,24,false);
    this->m_btn3.set_tooltip_text("Gtk::POS_TOP");
    this->img3.set(this->ref3);
    this->m_btn3.set_image(img3);
    this->m_btn3.set_relief(Gtk::RELIEF_NONE);
    this->m_btn3.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn3_action));

    this->ref4= Gdk::Pixbuf::create_from_file("img/u.svg",24,24,false);
    this->m_btn4.set_tooltip_text("Gtk::POS_BOTTOM");
    this->img4.set(this->ref4);
    this->m_btn4.set_image(img4);
    this->m_btn4.set_relief(Gtk::RELIEF_NONE);
    this->m_btn4.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn4_action));

    this->ref5= Gdk::Pixbuf::create_from_file("img/d.svg",24,24,false);
    this->m_btn5.set_state_flags(Gtk::STATE_FLAG_CHECKED);
    this->m_btn5.set_tooltip_text("Gtk::POS_RIGHT");
    this->img5.set(this->ref5);
    this->m_btn5.set_image(this->img5);
    this->m_btn5.set_relief(Gtk::RELIEF_NONE);
    this->m_btn5.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn5_action));

    this->ref6= Gdk::Pixbuf::create_from_file("img/e.svg",24,24,false);
    this->m_btn6.set_tooltip_text("Gtk::POS_LEFT");
    this->img6.set(this->ref6);
    this->m_btn6.set_image(img6);
    this->m_btn6.set_relief(Gtk::RELIEF_NONE);
    this->m_btn6.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn6_action));

    this->ref7= Gdk::Pixbuf::create_from_file("img/t.svg",24,24,false);
    this->m_btn7.set_tooltip_text("Gtk::POS_TOP");
    this->img7.set(this->ref7);
    this->m_btn7.set_image(img7);
    this->m_btn7.set_relief(Gtk::RELIEF_NONE);
    this->m_btn7.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn7_action));

    this->ref8= Gdk::Pixbuf::create_from_file("img/u.svg",24,24,false);
    this->m_btn8.set_tooltip_text("Gtk::POS_BOTTOM");
    this->img8.set(this->ref8);
    this->m_btn8.set_image(img8);
    this->m_btn8.set_relief(Gtk::RELIEF_NONE);
    this->m_btn8.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn8_action));

    //BOtão com Imagem;
   
   
    this->m_btn_img.add_pixlabel("img/img.svg","Label",Gtk::ALIGN_START,Gtk::ALIGN_START);
    this->v_al = Gtk::ALIGN_START;
    this->h_al = Gtk::ALIGN_START;
    this->m_btn_img.set_image_position(Gtk::POS_LEFT);
    this->m_btn_img.set_size_request(150,0);
    this->m_btn_img.set_image_position(Gtk::POS_TOP);
    this->m_box1_1.pack_start(this->m_btn_img);

    //boxs -> box_main
    this->m_box_main.pack_start(this->m_box1);
        this->m_box1.pack_start(this->m_box1_1);
        this->m_box1.pack_start(this->m_box1_2);

        this->show_all_children();
}



Botoes::~Botoes(){

}


void Botoes::on_btn1_action(){
     if((int)this->m_btn1.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->h_al = Gtk::ALIGN_START;
        //Método obsoleto.....
        this->m_btn_img.add_pixlabel("img/img.svg","Label",this->h_al,this->v_al);
    }

}
void Botoes::on_btn2_action(){

    if((int)this->m_btn2.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

       
    }
}
void Botoes::on_btn3_action(){
    if((int)this->m_btn3.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

       
    }
}


void Botoes::on_btn4_action(){
  if((int)this->m_btn4.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);

    }
}

void Botoes::on_btn5_action(){
      if((int)this->m_btn5.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn5.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn6.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn7.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn8.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

    
      }
}
void Botoes::on_btn6_action(){
     if((int)this->m_btn6.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn5.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn6.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn7.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn8.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

        
     }
   
}
void Botoes::on_btn7_action(){
    if((int)this->m_btn7.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn5.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn6.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn7.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn8.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

       
    }
}


void Botoes::on_btn8_action(){
     if((int)this->m_btn8.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn5.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn6.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn7.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn8.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);

    
     }
}