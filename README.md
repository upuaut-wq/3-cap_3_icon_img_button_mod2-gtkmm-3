# cap3_button_icon_image_mod2-gtkmm 3

## OBS : Método add_pixlabel obsoleto, considerar somente montagem da interface e configuração dos sinais e botôes.

## Perguntas respondidas:

* Como posicionar icone em um botão(add_pixlabel OBSOLETO)?
* Como esconder a borda de um botão?
* Como um modelo de Gtk::RadioButton utilizando Gtk::Button?
* Como adicionar flags aos botões?
* Como criar sinais, ligar um sinal e um botão e realizar alterações de propriedades de widgets?

## APP

![](img/app.gif)

* Este exemplo tinha como objetivo mostrar o posicionamento do label em relação a imagem, porém, em pesquisas observou-se que o método `add_pixlabel(const std::string &pixfile, const Glib::ustring &label, Gtk::Align x_align, Gtk::Align y_align = Gtk::ALIGN_CENTER)` está obsoleto. Para fins de exemplo considerar somente a interface. Os recursos utilizados são o mesmo do exemplo anterior. O recurso `Gt::Frame` foi utilizado para desenhar uma linha em volta dos botoes. As configurações podem ser observadas a seguir.

   ~~~c
    this->m_f1.set_label(" Horizontal ");
    this->m_f1.set_label_align(0.2);
   ~~~

   Em seguida foi adicionado um `Gtk::Box` para receber os botões.

   ~~~c
    this->m_f1.add(this->m_vbox1);
    this->m_f2.add(this->m_hbox1);
   ~~~