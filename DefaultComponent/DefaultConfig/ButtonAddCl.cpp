/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonAddCl
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonAddCl.cpp
*********************************************************************/

//## auto_generated
#include "ButtonAddCl.h"
//## link itsForm1Main
#include "Form1Main.h"
//## package Default

//## class ButtonAddCl
ButtonAddCl::ButtonAddCl() {
    itsForm1Main = NULL;
    itsForm1Main_1 = NULL;
}

ButtonAddCl::~ButtonAddCl() {
    cleanUpRelations();
}

void ButtonAddCl::Open() {
    //#[ operation Open()
    //#]
}

int ButtonAddCl::getAddClient() const {
    return AddClient;
}

void ButtonAddCl::setAddClient(int p_AddClient) {
    AddClient = p_AddClient;
}

Form1Main* ButtonAddCl::getItsForm1Main() const {
    return itsForm1Main;
}

void ButtonAddCl::setItsForm1Main(Form1Main* p_Form1Main) {
    if(p_Form1Main != NULL)
        {
            p_Form1Main->_setItsButtonAddCl(this);
        }
    _setItsForm1Main(p_Form1Main);
}

Form1Main* ButtonAddCl::getItsForm1Main_1() const {
    return itsForm1Main_1;
}

void ButtonAddCl::setItsForm1Main_1(Form1Main* p_Form1Main) {
    if(p_Form1Main != NULL)
        {
            p_Form1Main->_setItsButtonAddCl_1(this);
        }
    _setItsForm1Main_1(p_Form1Main);
}

void ButtonAddCl::cleanUpRelations() {
    if(itsForm1Main != NULL)
        {
            ButtonAddCl* p_ButtonAddCl = itsForm1Main->getItsButtonAddCl();
            if(p_ButtonAddCl != NULL)
                {
                    itsForm1Main->__setItsButtonAddCl(NULL);
                }
            itsForm1Main = NULL;
        }
    if(itsForm1Main_1 != NULL)
        {
            ButtonAddCl* p_ButtonAddCl = itsForm1Main_1->getItsButtonAddCl_1();
            if(p_ButtonAddCl != NULL)
                {
                    itsForm1Main_1->__setItsButtonAddCl_1(NULL);
                }
            itsForm1Main_1 = NULL;
        }
}

void ButtonAddCl::__setItsForm1Main(Form1Main* p_Form1Main) {
    itsForm1Main = p_Form1Main;
}

void ButtonAddCl::_setItsForm1Main(Form1Main* p_Form1Main) {
    if(itsForm1Main != NULL)
        {
            itsForm1Main->__setItsButtonAddCl(NULL);
        }
    __setItsForm1Main(p_Form1Main);
}

void ButtonAddCl::_clearItsForm1Main() {
    itsForm1Main = NULL;
}

void ButtonAddCl::__setItsForm1Main_1(Form1Main* p_Form1Main) {
    itsForm1Main_1 = p_Form1Main;
}

void ButtonAddCl::_setItsForm1Main_1(Form1Main* p_Form1Main) {
    if(itsForm1Main_1 != NULL)
        {
            itsForm1Main_1->__setItsButtonAddCl_1(NULL);
        }
    __setItsForm1Main_1(p_Form1Main);
}

void ButtonAddCl::_clearItsForm1Main_1() {
    itsForm1Main_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonAddCl.cpp
*********************************************************************/
